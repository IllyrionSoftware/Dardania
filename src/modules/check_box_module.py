from enum import Enum

from PySide6.QtWidgets import QCheckBox


class CheckBoxModule(QCheckBox):
    """A class to represent a check box module."""

    def __init__(self, configs: Enum) -> None:
        """Initialize the class.

        Args:
            configs (Enum): A configuration.
        """
        super().__init__()
        self.setup_props(configs)

    def setup_props(self, configs: Enum) -> None:
        """Setup the properties.

        Args:
            configs (Enum): A configuration.
        """
        value = configs.value
        self.setText(value["title"])
        self.setStyleSheet(value["stylesheet"])
