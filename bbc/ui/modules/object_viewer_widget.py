from PySide6.QtWidgets import QFrame, QLabel, QVBoxLayout, QWidget


class ObjectViewerWidget(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.initObjectViewerWidget()

    def initObjectViewerWidget(self):
        self.frame = QFrame()
        self.viewer_layout = QVBoxLayout(self.frame)

        label = QLabel("Hello, World!")
        self.viewer_layout.addWidget(label)

        # Optional: Set frame properties
        self.frame.setFrameStyle(QFrame.Shape.Box)
        self.frame.setLineWidth(1)

        self.setLayout(self.viewer_layout)
