from PySide6.QtWidgets import QGraphicsRectItem

from interfaces.configs.graphics_object_configs import GraphicsObjectTypeHints


class GraphicsObjectModule(QGraphicsRectItem):
    """A class to represent a graphics object module."""

    def __init__(
        self,
        configs: GraphicsObjectTypeHints,
        posx: int,
        posy: int,
        dimx: int,
        dimy: int,
        rad: int,
    ) -> None:
        """Initialize the graphics object module.

        Args:
            configs (GraphicsObjectTypeHints): A configuration.
            posx (int): The x position.
            posy (int): The y position.
            dimx (int): The x dimension.
            dimy (int): The y dimension.
            rad (int): The rotation angle.
        """
        super().__init__()
        self.setup_props(configs, posx, posy, dimx, dimy, rad)

    def setup_props(
        self,
        configs: GraphicsObjectTypeHints,
        posx: int,
        posy: int,
        dimx: int,
        dimy: int,
        rad: int,
    ) -> None:
        """Setup the graphics object module.

        Args:
            configs (GraphicsObjectTypeHints): A configuration.
            posx (int): The x position.
            posy (int): The y position.
            dimx (int): The x dimension.
            dimy (int): The y dimension.
            rad (int): The rotation angle.
        """
        self.setFlags(*configs.flags)
        self.setToolTip(configs.tooltip)
        self.setZValue(configs.zvalue)
        self.setPos(posx, posy)
        self.setRect(self.rect().x(), self.rect().y(), dimx, dimy)
        self.setRotation(rad)
        self.setPen(configs.pen)
        if configs.fill:
            self.setBrush(configs.brush)
            self.setOpacity(configs.opacity)
