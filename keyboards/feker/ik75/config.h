/* Copyright 2022 Feker
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// Disable RGB when suspended: only useful if NO_USB_STARTUP_CHECK is not defined.
#define RGB_DISABLE_WHEN_USB_SUSPENDED 1
// Disable deep sleep: only useful if NO_USB_STARTUP_CHECK is not defined
#define DISABLE_AVR_DEEP_SLEEP 1

// This makes the above define not work, but lol
// This SHOULD work around the issue of the keyboard not working properly after suspend
// Specially annoying when it made me reflash the keyboard god damn twice.
// #define NO_USB_STARTUP_CHECK

// I don't really need more layouts: reduce size
#define LAYER_STATE_8BIT

// Default stuff below -- removed some RGB modes, though.
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS

    /* RGB Matrix config */
    #define IS31FL3733_I2C_ADDRESS_1 IS31FL3733_I2C_ADDRESS_VCC_VCC
    #define IS31FL3733_I2C_ADDRESS_2 IS31FL3733_I2C_ADDRESS_GND_GND
    #define DRIVER_1_LED_TOTAL 63
    #define DRIVER_2_LED_TOTAL 64

    /* RGB Matrix effect */
    #define ENABLE_RGB_MATRIX_ALPHAS_MODS
    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_BREATHING
    #define ENABLE_RGB_MATRIX_BAND_SAT
    #define ENABLE_RGB_MATRIX_BAND_VAL
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    #define ENABLE_RGB_MATRIX_DUAL_BEACON
    #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    #define ENABLE_RGB_MATRIX_HUE_BREATHING
    #define ENABLE_RGB_MATRIX_HUE_PENDULUM
    #define ENABLE_RGB_MATRIX_HUE_WAVE
    #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL

    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN

    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    #define ENABLE_RGB_MATRIX_SPLASH
    #define ENABLE_RGB_MATRIX_MULTISPLASH
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH
    #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
