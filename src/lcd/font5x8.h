//
// font6x8.h
//
// mt32-pi - A baremetal MIDI synthesizer for Raspberry Pi
// Copyright (C) 2020-2022 Dale Whinham <daleyo@gmail.com>
//
// This file is part of mt32-pi.
//
// mt32-pi is free software: you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option) any later
// version.
//
// mt32-pi is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// mt32-pi. If not, see <http://www.gnu.org/licenses/>.
//

#ifndef _font5x8_h
#define _font5x8_h

#include <circle/types.h>

#define FONT_WIDTH  5
#define FONT_HEIGHT 8
#define FONT_SIZE   97
constexpr u8 Font5x8[FONT_SIZE][8] =
{
	{
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00000,
		0b00000,
		0b00010,
		0b00000
	},
	{
		0b00101,
		0b00101,
		0b00101,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00101,
		0b00101,
		0b01111,
		0b00101,
		0b01111,
		0b00101,
		0b00101,
		0b00000
	},
	{
		0b00010,
		0b00111,
		0b01010,
		0b00111,
		0b00010,
		0b01111,
		0b00010,
		0b00000
	},
	{
		0b01100,
		0b01100,
		0b00001,
		0b00010,
		0b00100,
		0b01001,
		0b00001,
		0b00000
	},
	{
		0b00110,
		0b01001,
		0b01010,
		0b00100,
		0b01010,
		0b01001,
		0b00110,
		0b00000
	},
	{
		0b00110,
		0b00010,
		0b00100,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00001,
		0b00010,
		0b00100,
		0b00100,
		0b00100,
		0b00010,
		0b00001,
		0b00000
	},
	{
		0b00100,
		0b00010,
		0b00001,
		0b00001,
		0b00001,
		0b00010,
		0b00100,
		0b00000
	},
	{
		0b00000,
		0b00010,
		0b01010,
		0b00111,
		0b01010,
		0b00010,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00010,
		0b00010,
		0b01111,
		0b00010,
		0b00010,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00110,
		0b00010,
		0b00100,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00000,
		0b01111,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00110,
		0b00110,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00001,
		0b00010,
		0b00100,
		0b01000,
		0b00000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01001,
		0b01010,
		0b01100,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00010,
		0b00110,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00111,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b00000,
		0b00001,
		0b00010,
		0b00100,
		0b01111,
		0b00000
	},
	{
		0b01111,
		0b00001,
		0b00010,
		0b00001,
		0b00000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00001,
		0b00011,
		0b00101,
		0b01001,
		0b01111,
		0b00001,
		0b00001,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01111,
		0b00000,
		0b00000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00011,
		0b00100,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01111,
		0b00000,
		0b00001,
		0b00010,
		0b00100,
		0b00100,
		0b00100,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b00111,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b00111,
		0b00000,
		0b00001,
		0b00110,
		0b00000
	},
	{
		0b00000,
		0b00110,
		0b00110,
		0b00000,
		0b00110,
		0b00110,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00110,
		0b00110,
		0b00000,
		0b00110,
		0b00010,
		0b00100,
		0b00000
	},
	{
		0b00001,
		0b00010,
		0b00100,
		0b01000,
		0b00100,
		0b00010,
		0b00001,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01111,
		0b00000,
		0b01111,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b01000,
		0b00100,
		0b00010,
		0b00001,
		0b00010,
		0b00100,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b00000,
		0b00001,
		0b00010,
		0b00000,
		0b00010,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01011,
		0b01010,
		0b01011,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01110,
		0b01001,
		0b01000,
		0b01000,
		0b01000,
		0b01001,
		0b01110,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b01011,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00111,
		0b00000
	},
	{
		0b00011,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b01001,
		0b00110,
		0b00000
	},
	{
		0b01000,
		0b01001,
		0b01010,
		0b01100,
		0b01010,
		0b01001,
		0b01000,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01111,
		0b00000
	},
	{
		0b01000,
		0b01101,
		0b01010,
		0b01010,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01100,
		0b01010,
		0b01001,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b01010,
		0b01001,
		0b00110,
		0b00000
	},
	{
		0b01111,
		0b01000,
		0b01000,
		0b01111,
		0b01010,
		0b01001,
		0b01000,
		0b00000
	},
	{
		0b00111,
		0b01000,
		0b01000,
		0b00111,
		0b00000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01111,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b01000,
		0b00101,
		0b00010,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b01010,
		0b01010,
		0b01010,
		0b00101,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b00101,
		0b00010,
		0b00101,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01000,
		0b00101,
		0b00010,
		0b00010,
		0b00010,
		0b00000
	},
	{
		0b01111,
		0b00000,
		0b00001,
		0b00010,
		0b00100,
		0b01000,
		0b01111,
		0b00000
	},
	{
		0b00111,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00111,
		0b00000
	},
	{
		0b01000,
		0b00101,
		0b01111,
		0b00010,
		0b01111,
		0b00010,
		0b00010,
		0b00000
	},
	{
		0b00111,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b00001,
		0b00111,
		0b00000
	},
	{
		0b00010,
		0b00101,
		0b01000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b01111,
		0b00000
	},
	{
		0b00011,
		0b00010,
		0b00001,
		0b00000,
		0b00000,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b00000,
		0b00111,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b01000,
		0b01111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b01111,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00001,
		0b00010,
		0b01111,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b00111,
		0b00000,
		0b00111,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01011,
		0b01100,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00010,
		0b00000,
		0b00110,
		0b00010,
		0b00010,
		0b00010,
		0b00111,
		0b00000
	},
	{
		0b00001,
		0b00000,
		0b00011,
		0b00001,
		0b00001,
		0b01001,
		0b00110,
		0b00000
	},
	{
		0b01000,
		0b01000,
		0b01001,
		0b01010,
		0b01100,
		0b01010,
		0b01001,
		0b00000
	},
	{
		0b00110,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00010,
		0b00111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01111,
		0b01010,
		0b01010,
		0b01010,
		0b01010,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01011,
		0b01100,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b01000,
		0b01000,
		0b00111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01111,
		0b01000,
		0b01111,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b00111,
		0b00000,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01011,
		0b01100,
		0b01000,
		0b01000,
		0b01000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b00111,
		0b01000,
		0b00111,
		0b00000,
		0b01111,
		0b00000
	},
	{
		0b00010,
		0b00010,
		0b01111,
		0b00010,
		0b00010,
		0b00010,
		0b00001,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01000,
		0b01000,
		0b01000,
		0b01001,
		0b00110,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01000,
		0b01000,
		0b01000,
		0b00101,
		0b00010,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01000,
		0b01000,
		0b01010,
		0b01010,
		0b00101,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01000,
		0b00101,
		0b00010,
		0b00101,
		0b01000,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01000,
		0b01000,
		0b00111,
		0b00000,
		0b00111,
		0b00000
	},
	{
		0b00000,
		0b00000,
		0b01111,
		0b00001,
		0b00010,
		0b00100,
		0b01111,
		0b00000
	},
	{
		0b00011,
		0b00100,
		0b00100,
		0b01000,
		0b00100,
		0b00100,
		0b00011,
		0b00000
	},
	{
		0b00010,
		0b00010,
		0b00010,
		0b00000,
		0b00010,
		0b00010,
		0b00010,
		0b00000
	},
	{
		0b00110,
		0b00001,
		0b00001,
		0b00000,
		0b00001,
		0b00001,
		0b00110,
		0b00000
	},
	{
		0b00000,
		0b00010,
		0b00001,
		0b01111,
		0b00001,
		0b00010,
		0b00000,
		0b00000
	},
	{
		0b00000,
		0b00010,
		0b00100,
		0b01111,
		0b00100,
		0b00010,
		0b00000,
		0b00000
	},
	// Normally 0xFF in the HD44780 ROM font, but this font is incomplete so
	// let's just add the full block character onto the end as 0x60
	{
		0b11111,
		0b11111,
		0b11111,
		0b11111,
		0b11111,
		0b11111,
		0b11111,
		0b11111
	}
};

#endif
