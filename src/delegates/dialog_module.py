import sys
from functools import partial

from PySide6.QtCore import Qt
from PySide6.QtGui import QColor
from PySide6.QtWidgets import (
    QAbstractSpinBox,
    QCheckBox,
    QComboBox,
    QDialog,
    QDoubleSpinBox,
    QFrame,
    QGraphicsRectItem,
    QGridLayout,
    QGroupBox,
    QLabel,
    QPushButton,
    QVBoxLayout,
    QWidget,
)

from interfaces.configs.color_dialog_configs import DefaultColorDialogConfig
from interfaces.configs.dialog_configs import DialogTypeHints
from interfaces.configs.input_dialog_configs import LumberTypeConfig
from interfaces.modules.color_dialog_module import ColorDialogModule
from interfaces.modules.input_dialog_module import InputDialogModule

# TODO


class DialogModule(QDialog):
    """A class to represent a dialog module."""

    def __init__(
        self, configs: DialogTypeHints, obj: QGraphicsRectItem, obj_id: str
    ) -> None:
        """Initialize the dialog module.

        Args:
            configs (DialogTypeHints): The dialog configs.
            obj (QGraphicsRectItem): The object.
            obj_id (str): The object id.
        """
        super().__init__()
        self.setup_props(configs, obj, obj_id)

    def setup_props(
        self, configs: DialogTypeHints, obj: QGraphicsRectItem, obj_id: str
    ) -> None:
        """Setup the dialog module.

        Args:
            configs (DialogTypeHints): The dialog configs.
            obj (QGraphicsRectItem): The object.
            obj_id (str): The object id.
        """
        self.setWindowTitle(configs.title)
        self.setWindowIcon(configs.icon_path)

        layout = QVBoxLayout(self)

        props = [
            {
                "frame_title": "General Settings:",
                "frame_border": QFrame.Shape.Box,
                "data": [
                    [
                        {
                            "widget": QLabel(),
                            "content": "Object ID:",
                        },
                        {
                            "widget": QLabel(),
                            "content": obj_id,
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Type:",
                        },
                        {
                            "widget": QPushButton(),
                            "content": obj.toolTip(),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Draw Order:",
                        },
                        {
                            "widget": QDoubleSpinBox(),
                            "content": obj.zValue(),
                        },
                    ],
                ],
            },
            {
                "frame_title": "Dimension Settings:",
                "frame_border": QFrame.Shape.Box,
                "data": [
                    [
                        {
                            "widget": QLabel(),
                            "content": "Pos (X, Y):",
                        },
                        {
                            "widget": QLabel(),
                            "content": str(obj.pos().x()) + ", " + str(obj.pos().y()),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Dim (LxB):",
                        },
                        {
                            "widget": QLabel(),
                            "content": str(obj.rect().width())
                            + " x "
                            + str(obj.rect().height()),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Rotation:",
                        },
                        {
                            "widget": QLabel(),
                            "content": str(obj.rotation()),
                        },
                    ],
                ],
            },
            {
                "frame_title": "Annotation Settings:",
                "frame_border": QFrame.Shape.Box,
                "data": [
                    [
                        {
                            "widget": QLabel(),
                            "content": "Pen Color:",
                        },
                        {
                            "widget": QPushButton(),
                            "content": obj.pen().color().name(QColor.NameFormat.HexRgb),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Pen Thickness:",
                        },
                        {
                            "widget": QDoubleSpinBox(),
                            "content": obj.pen().widthF(),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Pen Style:",
                        },
                        {
                            "widget": QComboBox(),
                            "content": obj.pen().style().name,
                            "content_options": Qt.PenStyle,
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Fill State:",
                        },
                        {
                            "widget": QCheckBox(),
                            "content": obj.brush().style() != Qt.BrushStyle.NoBrush,
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Fill Color:",
                        },
                        {
                            "widget": QPushButton(),
                            "content": obj.brush()
                            .color()
                            .name(QColor.NameFormat.HexRgb),
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Fill Pattern:",
                        },
                        {
                            "widget": QComboBox(),
                            "content": obj.brush().style().name,
                            "content_options": Qt.BrushStyle,
                        },
                    ],
                    [
                        {
                            "widget": QLabel(),
                            "content": "Fill Opacity:",
                        },
                        {
                            "widget": QDoubleSpinBox(),
                            "content": obj.opacity() * 100,
                        },
                    ],
                ],
            },
        ]

        self.inputs = {}
        self.changed_values = {}

        save_button = QPushButton("Save")
        discard_button = QPushButton("Discard")

        save_button.clicked.connect(self.accept)
        discard_button.clicked.connect(self.reject)

        for prop_group in props:
            group_box = QGroupBox(prop_group["frame_title"])
            frame_layout = QGridLayout(group_box)

            for row, prop_data in enumerate(prop_group["data"]):
                label_widget: QLabel = prop_data[0]["widget"]
                label_widget.setText(prop_data[0]["content"])
                frame_layout.addWidget(label_widget, row, 0)

                input_widget: QWidget = prop_data[1]["widget"]
                input_widget.setFixedWidth(150)
                frame_layout.addWidget(input_widget, row, 1)

                if isinstance(input_widget, QPushButton):
                    if prop_data[0]["content"] == "Type:":
                        input_widget.setText(prop_data[1]["content"])
                        input_widget.clicked.connect(
                            partial(
                                InputDialogModule,
                                LumberTypeConfig(),
                                input_widget,
                            )
                        )

                    else:
                        input_widget.setStyleSheet(
                            f"background-color: {prop_data[1]['content']};"
                            "border: 1px solid lightgray;"
                        )
                        input_widget.setFixedSize(16, 16)
                        input_widget.clicked.connect(
                            partial(
                                ColorDialogModule,
                                DefaultColorDialogConfig(),
                                input_widget,
                            )
                        )
                elif isinstance(input_widget, QCheckBox):
                    input_widget.setChecked(prop_data[1]["content"])
                elif isinstance(input_widget, QComboBox):
                    input_widget.addItems(prop_data[1]["content_options"])
                    input_widget.setCurrentText(prop_data[1]["content"])
                elif isinstance(input_widget, QDoubleSpinBox):
                    if prop_data[0]["content"] == "Fill Opacity:":
                        input_widget.setRange(0, 100)
                    else:
                        input_widget.setRange(0, sys.float_info.max)
                    input_widget.setSingleStep(1)
                    input_widget.setDecimals(0)
                    input_widget.setValue(prop_data[1]["content"])
                    input_widget.setButtonSymbols(
                        QAbstractSpinBox.ButtonSymbols.NoButtons
                    )
                elif isinstance(input_widget, QLabel):
                    input_widget.setText(prop_data[1]["content"])

                self.inputs[prop_data[0]["content"]] = input_widget
                row += 1

                frame_layout.addWidget(
                    label_widget, row, 0, alignment=Qt.AlignmentFlag.AlignLeft
                )
                frame_layout.addWidget(
                    input_widget, row, 1, alignment=Qt.AlignmentFlag.AlignCenter
                )

            group_box.setLayout(frame_layout)
            layout.addWidget(group_box)

        layout.addWidget(save_button)
        layout.addWidget(discard_button)

        self.setFixedSize(self.sizeHint())

        self.exec()

    def accept(self) -> None:
        """Override the accept method to return changed values."""
        for label_content, input_widget in self.inputs.items():
            if isinstance(input_widget, QPushButton):
                if label_content == "Type:":
                    self.changed_values[label_content] = input_widget.text()
            elif isinstance(input_widget, QCheckBox):
                self.changed_values[label_content] = input_widget.isChecked()
            elif isinstance(input_widget, QComboBox):
                self.changed_values[label_content] = input_widget.currentText()
            elif isinstance(input_widget, QDoubleSpinBox):
                self.changed_values[label_content] = input_widget.value()
            elif isinstance(input_widget, QLabel):
                self.changed_values[label_content] = input_widget.text()

        super().accept()

    def get_new_values(self) -> dict:
        """Return the changed values."""
        return self.changed_values
