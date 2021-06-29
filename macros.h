#define OLED_COMMAND 0x00
#define OLED_DATA 0xC0
#define OLED_DATA_CONTINUE 0x40

#define OLED_SET_CONTRAST_CONTROL 0x81
#define OLED_DISPLAY_ALL_ON_RESUME 0xA4
#define OLED_DISPLAY_ALL_ON 0xA5
#define OLED_NORMAL_DISPLAY 0xA6
#define OLED_INVERT_DISPLAY 0xA7
#define OLED_DISPLAY_OFF 0xAE
#define OLED_DISPLAY_ON 0xAF
#define OLED_NOP 0xE3

#define OLED_HORIZONTAL_SCROLL_RIGHT 0x26
#define OLED_HORIZONTAL_SCROLL_LEFT 0x27
#define OLED_HORIZONTAL_SCROLL_VERTICAL_AND_RIGHT 0x29
#define OLED_HORIZONTAL_SCROLL_VERTICAL_AND_LEFT 0x2A
#define OLED_DEACTIVATE_SCROLL 0x2E
#define OLED_ACTIVATE_SCROLL 0x2F
#define OLED_SET_VERTICAL_SCROLL_AREA 0xA3

#define OLED_SET_LOWER_COLUMN 0x00
#define OLED_SET_HIGHER_COLUMN 0x10
#define OLED_MEMORY_ADDR_MODE 0x20
#define OLED_SET_COLUMN_ADDR 0x21
#define OLED_SET_PAGE_ADDR 0x22

#define OLED_SET_START_LINE 0x40
#define OLED_SET_SEGMENT_REMAP 0xA0
#define OLED_SET_MULTIPLEX_RATIO 0xA8
#define OLED_COM_SCAN_DIR_INC 0xC0
#define OLED_COM_SCAN_DIR_DEC 0xC8
#define OLED_SET_DISPLAY_OFFSET 0xD3
#define OLED_SET_COM_PINS 0xDA
#define OLED_CHARGE_PUMP 0x8D

#define OLED_SET_DISPLAY_CLOCK_DIV_RATIO 0xD5
#define OLED_SET_PRECHARGE_PERIOD 0xD9
#define OLED_SET_VCOM_DESELECT 0xDB
