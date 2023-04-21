import winreg

from constants import *


class ThemeHandler:
    @staticmethod
    def switch_theme_handler(ui):
        """
        Switches the application theme by applying the appropriate stylesheet.
        """
        if not ui.styleSheet():
            with open(DARK_THEME_DIR_PATH, "r") as f:
                ui.setStyleSheet(f.read())
        else:
            ui.setStyleSheet("")

    # TODO: Implement
    def detect_theme_in_microsoft_handler(self):
        """
        This function detects if the Windows color mode is set to dark or light.
        :return: a boolean value indicating whether the color mode in Windows is set to dark mode or not. It
        returns True if the color mode is set to dark mode, and False otherwise.
        """
        registry = winreg.ConnectRegistry(None, winreg.HKEY_CURRENT_USER)
        reg_keypath = (
            r"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize"
        )
        try:
            reg_key = winreg.OpenKey(registry, reg_keypath)
        except FileNotFoundError:
            return False
        for i in range(1024):
            try:
                value_name, value, _ = winreg.EnumValue(reg_key, i)
                if value_name == "AppsUseLightTheme":
                    return value == 0
            except OSError:
                break
        return False
