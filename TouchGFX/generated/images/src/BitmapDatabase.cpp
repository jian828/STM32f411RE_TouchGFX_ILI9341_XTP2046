// 4.15.0 0xba9ffea6
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_backgrounds_main_bg_320x240px[]; // BITMAP_BLUE_BACKGROUNDS_MAIN_BG_320X240PX_ID = 0, Size: 320x240 pixels
extern const unsigned char image_blue_buttons_round_edge_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID = 2, Size: 60x60 pixels
extern const unsigned char image_blue_slider_vertical_small_indicators_slider3_vertical_round_nob[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_INDICATORS_SLIDER3_VERTICAL_ROUND_NOB_ID = 3, Size: 34x54 pixels
extern const unsigned char image_blue_slider_vertical_small_slider3_vertical_round_back[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_BACK_ID = 4, Size: 20x172 pixels
extern const unsigned char image_blue_slider_vertical_small_slider3_vertical_round_fill[]; // BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_FILL_ID = 5, Size: 20x172 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_blue_backgrounds_main_bg_320x240px, 0, 320, 240, 0, 0, 320, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 240, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_indicators_slider3_vertical_round_nob, 0, 34, 54, 5, 7, 24, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_slider3_vertical_round_back, 0, 20, 172, 0, 10, 20, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 152, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_slider_vertical_small_slider3_vertical_round_fill, 0, 20, 172, 0, 10, 20, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 152, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
