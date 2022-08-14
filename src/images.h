#ifndef IMAGES_H
#define IMAGES_H

enum {
  ICON_CONNECTED = 0,
  ICON_DISCONNECTED,
  ICON_REMOTEXT,
  ICON_RAINDELAY,
  ICON_RAIN,
  ICON_SOIL,
  ICON_ETHER_CONNECTED,
  ICON_ETHER_DISCONNECTED,
  NUM_CUSTOM_ICONS
};

enum {
  LCD_CURSOR_REMOTEXT = 11,
  LCD_CURSOR_RAINDELAY, // 12
  LCD_CURSOR_SENSOR1,   // 13
  LCD_CURSOR_SENSOR2,   // 14
  LCD_CURSOR_NETWORK    // 15
};

#endif