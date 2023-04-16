from PySide6.QtCore import QPoint, Qt
from PySide6.QtGui import QFont, QIcon
from PySide6.QtWidgets import (
    QApplication,
    QGroupBox,
    QHBoxLayout,
    QLabel,
    QPushButton,
    QSizePolicy,
)

from constants import (
    MAIN_UI_GROUPBOX_TITLE,
    UI_CONTENTS_MARGINS,
    UI_FONT_TYPE,
    UI_GROUPBOX_FONT_SIZE,
    UI_GROUPBOX_STYLESHEET,
    UI_ICON_PATH,
    UI_TITLE,
)
from ui.config_ui import ConfigUI
from ui.setup_ui import SetupUI


class MainUI(SetupUI):
    def __init__(self):
        super().__init__()
        # Initialize the UI
        self.config_ui_instance = ConfigUI()

        # Center the window on the screen
        self.center_window()

        # Add buttons
        self.create_button()

        # Add labels
        self.main_ui_label()
        self.copyright_label()

        # Add group boxes
        self.create_group_box()

        # Initialize variable to keep track of whether CONFIG_UI is open
        self.config_ui_open = False

        # Set the window title and size
        self.setWindowTitle(UI_TITLE)
        self.setWindowIcon(QIcon(UI_ICON_PATH))
        self.setGeometry(0, 0, 400, 300)

        self.main_layout.addWidget(self.main_label)
        self.main_layout.addWidget(self.group_box)
        self.main_layout.addWidget(self.crlabel)

        # Initialize config_ui_pos variable to keep track of the config_ui position
        self.config_ui_pos = None

    def main_ui_label(self):
        """
        This function creates a QLabel object with a text string containing the main UI label,
        and some properties.
        """
        self.main_label = QLabel(MAIN_UI_GROUPBOX_TITLE)
        self.main_label.setFont(QFont(UI_FONT_TYPE))
        self.main_label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.main_label.setFont(
            QFont(UI_FONT_TYPE, UI_GROUPBOX_FONT_SIZE, QFont.Weight.Bold)
        )

    def create_group_box(self):
        """
        This function creates a group box with input fields and applies styling to it.
        """
        self.group_box = QGroupBox(self)
        self.group_box_layout = QHBoxLayout(self.group_box)
        self.group_box.setStyleSheet(UI_GROUPBOX_STYLESHEET)
        self.group_box.setFont(
            QFont(UI_FONT_TYPE, UI_GROUPBOX_FONT_SIZE, QFont.Weight.Bold)
        )
        self.group_box.setAlignment(Qt.AlignmentFlag.AlignHCenter)
        self.group_box.setFlat(True)

        self.group_box.setSizePolicy(
            QSizePolicy.Policy.Maximum, QSizePolicy.Policy.Maximum
        )
        self.group_box_layout.setContentsMargins(*UI_CONTENTS_MARGINS)

    def resize_config_ui(self):
        if self.config_ui_instance:
            self.config_ui_instance.resize(self.size())

    def keyPressEvent(self, event):
        # TODO: Combine keyPressEvent with the similar on in config_ui and move them to setup_ui.py.
        """
        This function is called when certain keys are pressed.
        """
        if event.key() == Qt.Key.Key_Escape or (
            event.key() == Qt.Key.Key_Q
            and event.modifiers() == Qt.KeyboardModifier.ControlModifier
        ):
            self.close()
            if self.config_ui_instance:
                self.config_ui_instance.close()

        else:
            super().keyPressEvent(event)

    # def moveEvent(self, event):
    #     """
    #     This function moves the config_ui along with the main_ui when the main_ui gets moved around.
    #     """
    #     super().moveEvent(event)
    #     if self.config_ui_open and self.config_ui_pos is not None:
    #         # Calculate the offset between the old and new main_ui positions
    #         offset = self.pos() - event.oldPos()

    #         # Calculate the new position for the config_ui
    #         new_pos = self.config_ui_pos + offset

    #         # Move the config_ui to the new position
    #         self.config_ui.move(new_pos)

    # TODO: make config_ui move along with main_ui when main_ui gets moved.

    def closeEvent(self, event):
        """
        This function closes CONFIG_UI when triggered in the MainUI.
        """
        self.config_ui_instance.close()
        event.accept()

    def create_button(self):
        """
        Creates the button to open and close CONFIG_UI
        """
        self.btn_toggle = QPushButton(self)
        self.btn_toggle.setIcon(QIcon.fromTheme("arrow-right"))
        self.btn_toggle.setToolTip("Open CONFIG_UI")
        self.btn_toggle.setFixedSize(20, 20)
        self.btn_toggle.move(self.width() - self.btn_toggle.width() - 10, 10)
        self.btn_toggle.clicked.connect(self.toggle_config_ui)

    def center_window(self):
        """
        This function centers a window on the screen.
        """
        screen_geometry = QApplication.screens()[0].geometry()
        center_point = screen_geometry.center()
        window_center = self.rect().center()
        window_top_left = QPoint(
            center_point.x() - window_center.x(), center_point.y() - window_center.y()
        )
        self.move(window_top_left)

    def show(self):
        """
        This function calls the parent class's show method and then centers the window.
        """
        super().show()
        self.center_window()

    def resizeEvent(self, event):
        super().resizeEvent(event)
        if self.config_ui_instance:
            self.config_ui_instance.resize(self.size())
        self.btn_toggle.move(self.width() - self.btn_toggle.width() - 10, 10)

    def toggle_config_ui(self):
        if not self.config_ui_open:
            # Create and show CONFIG_UI
            self.config_ui_instance.setGeometry(
                self.geometry().right() + 10,
                self.geometry().top(),
                self.config_ui_instance.width(),
                self.height(),
            )
            self.config_ui_instance.show()

            # Update variable to indicate that CONFIG_UI is open
            self.config_ui_open = True
        else:
            # Close CONFIG_UI
            self.config_ui_instance.close()

            # Update variable to indicate that CONFIG_UI is closed
            self.config_ui_open = False
            self.config_ui_pos = None  # Reset the config_ui position

        # If CONFIG_UI is open, attach it to MAIN_UI
        if self.config_ui_open:
            main_ui_rect = self.geometry()
            config_ui_rect = self.config_ui_instance.geometry()
            self.config_ui_instance.setGeometry(
                main_ui_rect.right() + 2,
                main_ui_rect.top(),
                config_ui_rect.width(),
                main_ui_rect.height(),
            )

        # Raise both windows to the top
        self.activateWindow()
        self.raise_()
        if self.config_ui_open:
            self.config_ui_instance.activateWindow()
            self.config_ui_instance.raise_()
