from functools import partial
from typing import Dict, Optional, Tuple, Union

from constants import (
    BUTTONS,
    CHECKBOXES,
    DEBUG_NAME,
    GRAPHIC_VIEWS,
    INPUTFIELDS,
    LABELS,
    SPINBOXES,
)
from delegates.graphics_delegate import GraphicsDelegate
from handlers.visibility_handler import VisibilityHandler
from PySide6.QtCore import Qt, Signal
from PySide6.QtGui import QIcon
from PySide6.QtWidgets import (
    QBoxLayout,
    QCheckBox,
    QDoubleSpinBox,
    QGraphicsView,
    QLabel,
    QLayout,
    QLineEdit,
    QPushButton,
    QVBoxLayout,
    QWidget,
)


class ModuleHandler(QWidget):
    on_button_clicked = Signal(int)

    def __init__(
        self,
        module_type: str,
        module_index: int,
        margins: Optional[Tuple[int, int, int, int]] = None,
        alignment: Optional[str] = None,
        parent: Optional[QWidget] = None,
    ) -> None:
        super().__init__(parent)
        self.visibility_handler = VisibilityHandler()
        self.setup_module(module_type, module_index, margins, alignment)

    def setup_module(
        self,
        module_type: str,
        module_index: int,
        margins: Optional[Tuple[int, int, int, int]] = None,
        alignment: Optional[str] = None,
    ) -> None:
        layout = QVBoxLayout(self)
        module_data = self.get_module_data(module_type, module_index)

        if module_data:
            module = self.create_module(module_type, module_data)
            if module:
                layout.addWidget(module)
            else:
                raise ValueError(
                    f'{DEBUG_NAME}"{module_type}" is not a valid module type'
                )
        else:
            raise ValueError(f'{DEBUG_NAME}"index" {module_index} not found')

        layout.setContentsMargins(*(margins or (0, 0, 0, 0)))
        if alignment:
            self.setAlignment(layout, alignment)
        self.setLayout(layout)

    def get_module_data(
        self, module_type: str, module_index: int
    ) -> Optional[Dict[str, Union[str, int, float]]]:
        module_list = {
            "Label": LABELS,
            "Checkbox": CHECKBOXES,
            "SpinBox": SPINBOXES,
            "InputField": INPUTFIELDS,
            "Button": BUTTONS,
            "GraphicView": GRAPHIC_VIEWS,
        }.get(module_type, [])
        module_data = next(
            (module for module in module_list if module["index"] == module_index), None
        )
        return module_data

    def create_module(self, module_type: str, module_data: dict) -> Optional[QWidget]:
        module_class = {
            "Label": QLabel,
            "Checkbox": QCheckBox,
            "SpinBox": QDoubleSpinBox,
            "InputField": QLineEdit,
            "Button": QPushButton,
            "GraphicView": GraphicsDelegate,
        }.get(module_type)

        if not module_class:
            raise ValueError(f'{DEBUG_NAME}"{module_type}" is not a valid module type')

        module = module_class()

        if module_type != "GraphicView":
            module.setStyleSheet(module_data["stylesheet"])

        if module_type == "Label":
            module.setText(module_data["title"])
        elif module_type == "Checkbox":
            module.setText(module_data["title"])
        elif module_type == "SpinBox":
            module.setMinimum(module_data["min_value"])
            module.setMaximum(module_data["max_value"])
            module.setValue(module_data["default_value"])
            module.setSingleStep(module_data["step"])
            module.setSuffix(module_data["suffix"])
        elif module_type == "InputField":
            module.setPlaceholderText(module_data["placeholder"])
        elif module_type == "Button":
            if module_data["icon_path"]:
                icon = QIcon(module_data["icon_path"])
                module.setIcon(icon)
            else:
                module.setText(module_data["title"])
            module.setStyleSheet(module_data["stylesheet"])
            module.clicked.connect(
                partial(self.on_button_clicked.emit, module_data["index"])
            )
        else:
            raise ValueError(f'{DEBUG_NAME}"{module_type}" is not a valid module type')
        return module

    def setAlignment(self, layout: Union[QLayout, QBoxLayout], alignment: str) -> None:
        alignment_mapping = {
            "Left": Qt.AlignmentFlag.AlignLeft,
            "Right": Qt.AlignmentFlag.AlignRight,
            "Center": Qt.AlignmentFlag.AlignCenter,
            "Justify": Qt.AlignmentFlag.AlignJustify,
            "Top": Qt.AlignmentFlag.AlignTop,
            "Bottom": Qt.AlignmentFlag.AlignBottom,
        }
        layout.setAlignment(
            alignment_mapping.get(alignment, Qt.AlignmentFlag.AlignLeft)
        )

    def toggle_module(self, module_type: str, module_index: int) -> None:
        self.visibility_handler.toggle_visibility_state(self, module_type, module_index)
