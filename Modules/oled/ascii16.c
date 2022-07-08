#include "ascii16.h"

static const unsigned char Ascii1608[] =              // ASCII
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // - -
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x18,0x3C,0x3C,0x3C,0x18,0x18,  // -!-
	0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,

	0x00,0x66,0x66,0x66,0x24,0x00,0x00,0x00,  // -"-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x36,0x36,0x7F,0x36,0x36,  // -#-
	0x36,0x7F,0x36,0x36,0x00,0x00,0x00,0x00,

	0x18,0x18,0x3E,0x63,0x43,0x03,0x3E,0x60,  // -$-
	0x61,0x63,0x3E,0x18,0x18,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x43,0x63,0x30,0x18,  // -%-
	0x0C,0x06,0x63,0x61,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0x36,0x36,0x1C,0x6E,0x3B,  // -&-
	0x33,0x33,0x33,0x6E,0x00,0x00,0x00,0x00,

	0x00,0x0C,0x0C,0x0C,0x06,0x00,0x00,0x00,  // -'-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x30,0x18,0x0C,0x0C,0x0C,0x0C,  // -(-
	0x0C,0x0C,0x18,0x30,0x00,0x00,0x00,0x00,

	0x00,0x00,0x0C,0x18,0x30,0x30,0x30,0x30,  // -)-
	0x30,0x30,0x18,0x0C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x66,0x3C,0xFF,  // -*-
	0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x7E,  // -+-
	0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -,-
	0x00,0x18,0x18,0x18,0x0C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,  // ---
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -.-
	0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x40,0x60,0x30,0x18,  // -/-
	0x0C,0x06,0x03,0x01,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x73,0x6B,0x6B,  // -0-
	0x67,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x18,0x1C,0x1E,0x18,0x18,0x18,  // -1-
	0x18,0x18,0x18,0x7E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x60,0x30,0x18,0x0C,  // -2-
	0x06,0x03,0x63,0x7F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x60,0x60,0x3C,0x60,  // -3-
	0x60,0x60,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x30,0x38,0x3C,0x36,0x33,0x7F,  // -4-
	0x30,0x30,0x30,0x78,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7F,0x03,0x03,0x03,0x3F,0x70,  // -5-
	0x60,0x60,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0x06,0x03,0x03,0x3F,0x63,  // -6-
	0x63,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7F,0x63,0x60,0x60,0x30,0x18,  // -7-
	0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x63,0x3E,0x63,  // -8-
	0x63,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x63,0x7E,0x60,  // -9-
	0x60,0x60,0x30,0x1E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,  // -:-
	0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,  // -;-
	0x00,0x18,0x18,0x0C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x60,0x30,0x18,0x0C,0x06,  // -<-
	0x0C,0x18,0x30,0x60,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,  // -=-
	0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x06,0x0C,0x18,0x30,0x60,  // ->-
	0x30,0x18,0x0C,0x06,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x30,0x18,0x18,  // -?-
	0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x3E,0x63,0x63,0x7B,0x7B,  // -@-
	0x7B,0x3B,0x03,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x08,0x1C,0x36,0x63,0x63,0x7F,  // -A-
	0x63,0x63,0x63,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3F,0x66,0x66,0x66,0x3E,0x66,  // -B-
	0x66,0x66,0x66,0x3F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3C,0x66,0x43,0x03,0x03,0x03,  // -C-
	0x03,0x43,0x66,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1F,0x36,0x66,0x66,0x66,0x66,  // -D-
	0x66,0x66,0x36,0x1F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7F,0x66,0x46,0x16,0x1E,0x16,  // -E-
	0x06,0x46,0x66,0x7F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7F,0x66,0x46,0x16,0x1E,0x16,  // -F-
	0x06,0x06,0x06,0x0F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3C,0x66,0x43,0x03,0x03,0x7B,  // -G-
	0x63,0x63,0x66,0x5C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x63,0x63,0x63,0x7F,0x63,  // -H-
	0x63,0x63,0x63,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3C,0x18,0x18,0x18,0x18,0x18,  // -I-
	0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x78,0x30,0x30,0x30,0x30,0x30,  // -J-
	0x33,0x33,0x33,0x1E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x67,0x66,0x36,0x36,0x1E,0x1E,  // -K-
	0x36,0x66,0x66,0x67,0x00,0x00,0x00,0x00,

	0x00,0x00,0x0F,0x06,0x06,0x06,0x06,0x06,  // -L-
	0x06,0x46,0x66,0x7F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x77,0x7F,0x7F,0x6B,0x63,  // -M-
	0x63,0x63,0x63,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x67,0x6F,0x7F,0x7B,0x73,  // -N-
	0x63,0x63,0x63,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0x36,0x63,0x63,0x63,0x63,  // -O-
	0x63,0x63,0x36,0x1C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3F,0x66,0x66,0x66,0x3E,0x06,  // -P-
	0x06,0x06,0x06,0x0F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x63,0x63,0x63,  // -Q-
	0x63,0x6B,0x7B,0x3E,0x30,0x70,0x00,0x00,

	0x00,0x00,0x3F,0x66,0x66,0x66,0x3E,0x36,  // -R-
	0x66,0x66,0x66,0x67,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3E,0x63,0x63,0x06,0x1C,0x30,  // -S-
	0x60,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7E,0x7E,0x5A,0x18,0x18,0x18,  // -T-
	0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x63,  // -U-
	0x63,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x63,  // -V-
	0x63,0x36,0x1C,0x08,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x6B,  // -W-
	0x6B,0x7F,0x36,0x36,0x00,0x00,0x00,0x00,

	0x00,0x00,0x63,0x63,0x36,0x36,0x1C,0x1C,  // -X-
	0x36,0x36,0x63,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x66,0x66,0x66,0x66,0x3C,0x18,  // -Y-
	0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x7F,0x63,0x61,0x30,0x18,0x0C,  // -Z-
	0x06,0x43,0x63,0x7F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,  // -[-
	0x0C,0x0C,0x0C,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x01,0x03,0x07,0x0E,0x1C,  // -\-
	0x38,0x70,0x60,0x40,0x00,0x00,0x00,0x00,

	0x00,0x00,0x3C,0x30,0x30,0x30,0x30,0x30,  // -]-
	0x30,0x30,0x30,0x3C,0x00,0x00,0x00,0x00,

	0x08,0x1C,0x36,0x63,0x00,0x00,0x00,0x00,  // -^-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -_-
	0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,

	0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,  // -`-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x1E,0x30,0x3E,  // -a-
	0x33,0x33,0x33,0x6E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x07,0x06,0x06,0x1E,0x36,0x66,  // -b-
	0x66,0x66,0x66,0x3B,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3E,0x63,0x03,  // -c-
	0x03,0x03,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x38,0x30,0x30,0x3C,0x36,0x33,  // -d-
	0x33,0x33,0x33,0x6E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3E,0x63,0x7F,  // -e-
	0x03,0x03,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0x36,0x26,0x06,0x0F,0x06,  // -f-
	0x06,0x06,0x06,0x0F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x6E,0x33,0x33,  // -g-
	0x33,0x33,0x33,0x3E,0x30,0x33,0x1E,0x00,

	0x00,0x00,0x07,0x06,0x06,0x36,0x6E,0x66,  // -h-
	0x66,0x66,0x66,0x67,0x00,0x00,0x00,0x00,

	0x00,0x00,0x18,0x18,0x00,0x1C,0x18,0x18,  // -i-
	0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x60,0x60,0x00,0x70,0x60,0x60,  // -j-
	0x60,0x60,0x60,0x60,0x66,0x66,0x3C,0x00,

	0x00,0x00,0x07,0x06,0x06,0x66,0x36,0x1E,  // -k-
	0x1E,0x36,0x66,0x67,0x00,0x00,0x00,0x00,

	0x00,0x00,0x1C,0x18,0x18,0x18,0x18,0x18,  // -l-
	0x18,0x18,0x18,0x3C,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x37,0x7F,0x6B,  // -m-
	0x6B,0x6B,0x6B,0x6B,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3B,0x66,0x66,  // -n-
	0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3E,0x63,0x63,  // -o-
	0x63,0x63,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3B,0x66,0x66,  // -p-
	0x66,0x66,0x66,0x3E,0x06,0x06,0x0F,0x00,

	0x00,0x00,0x00,0x00,0x00,0x6E,0x33,0x33,  // -q-
	0x33,0x33,0x33,0x3E,0x30,0x30,0x78,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3B,0x6E,0x46,  // -r-
	0x06,0x06,0x06,0x0F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3E,0x63,0x06,  // -s-
	0x1C,0x30,0x63,0x3E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x08,0x0C,0x0C,0x3F,0x0C,0x0C,  // -t-
	0x0C,0x0C,0x6C,0x38,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x33,0x33,0x33,  // -u-
	0x33,0x33,0x33,0x6E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x66,0x66,0x66,  // -v-
	0x66,0x66,0x3C,0x18,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,  // -w-
	0x6B,0x6B,0x7F,0x36,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x63,0x36,0x1C,  // -x-
	0x1C,0x1C,0x36,0x63,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,  // -y-
	0x63,0x63,0x63,0x7E,0x60,0x30,0x1F,0x00,

	0x00,0x00,0x00,0x00,0x00,0x7F,0x33,0x18,  // -z-
	0x0C,0x06,0x63,0x7F,0x00,0x00,0x00,0x00,

	0x00,0x00,0x70,0x18,0x18,0x18,0x0E,0x18,  // -{-
	0x18,0x18,0x18,0x70,0x00,0x00,0x00,0x00,

	0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x18,  // -|-
	0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,

	0x00,0x00,0x0E,0x18,0x18,0x18,0x70,0x18,  // -}-
	0x18,0x18,0x18,0x0E,0x00,0x00,0x00,0x00,

	0x00,0x00,0x6E,0x3B,0x00,0x00,0x00,0x00,  // -~-
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x08,0x1C,0x36,0x63,  // --
	0x63,0x63,0x7F,0x00,0x00,0x00,0x00,0x00,
};

unsigned char *get_ascii16_code(unsigned char a)
{
    return (unsigned char *)(Ascii1608+(a-' ')*16);
}

//6*12
static const unsigned char Ascii12[] =              // ASCII
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // - -
	0x00,0x00,0x00,0x00,

	0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00,  // -!-
	0x08,0x00,0x00,0x00,

	0x00,0x36,0x12,0x12,0x00,0x00,0x00,0x00,  // -"-
	0x00,0x00,0x00,0x00,

	0x00,0x28,0x28,0x14,0x3E,0x14,0x3E,0x14,  // -#-
	0x0A,0x0A,0x00,0x00,

	0x00,0x08,0x1C,0x02,0x02,0x1C,0x12,0x0E,  // -$-
	0x08,0x08,0x00,0x00,

	0x00,0x04,0x0A,0x04,0x30,0x0E,0x10,0x28,  // -%-
	0x10,0x00,0x00,0x00,

	0x00,0x00,0x00,0x18,0x04,0x04,0x2A,0x12,  // -&-
	0x2C,0x00,0x00,0x00,

	0x00,0x08,0x08,0x08,0x08,0x00,0x00,0x00,  // -'-
	0x00,0x00,0x00,0x00,

	0x00,0x10,0x10,0x08,0x08,0x08,0x08,0x08,  // -(-
	0x08,0x10,0x10,0x00,

	0x00,0x04,0x04,0x08,0x08,0x08,0x08,0x08,  // -)-
	0x08,0x04,0x04,0x00,

	0x00,0x08,0x3E,0x08,0x14,0x14,0x00,0x00,  // -*-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x08,0x08,0x08,0x3F,0x08,0x08,  // -+-
	0x08,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,  // -,-
	0x08,0x0C,0x04,0x00,

	0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x00,  // ---
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,  // -.-
	0x0C,0x00,0x00,0x00,

	0x00,0x20,0x20,0x10,0x10,0x08,0x08,0x04,  // -/-
	0x04,0x02,0x00,0x00,

	0x00,0x1C,0x22,0x22,0x22,0x22,0x22,0x22,  // -0-
	0x1C,0x00,0x00,0x00,

	0x00,0x0C,0x08,0x08,0x08,0x08,0x08,0x08,  // -1-
	0x3E,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x20,0x10,0x08,0x04,0x22,  // -2-
	0x3E,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x20,0x18,0x20,0x20,0x22,  // -3-
	0x1C,0x00,0x00,0x00,

	0x00,0x30,0x28,0x28,0x24,0x22,0x3E,0x20,  // -4-
	0x30,0x00,0x00,0x00,

	0x00,0x3C,0x04,0x04,0x1C,0x20,0x20,0x22,  // -5-
	0x1C,0x00,0x00,0x00,

	0x00,0x38,0x04,0x02,0x1E,0x22,0x22,0x22,  // -6-
	0x1C,0x00,0x00,0x00,

	0x00,0x3E,0x22,0x20,0x10,0x10,0x10,0x08,  // -7-
	0x08,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x22,0x1C,0x22,0x22,0x22,  // -8-
	0x1C,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x22,0x22,0x3C,0x20,0x10,  // -9-
	0x0E,0x00,0x00,0x00,

	0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x0C,  // -:-
	0x0C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x18,  // -;-
	0x0C,0x04,0x00,0x00,

	0x00,0x00,0x30,0x08,0x06,0x01,0x06,0x08,  // -<-
	0x30,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x3E,0x00,0x3E,0x00,  // -=-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x03,0x04,0x18,0x20,0x18,0x04,  // ->-
	0x03,0x00,0x00,0x00,

	0x00,0x00,0x18,0x24,0x20,0x10,0x08,0x00,  // -?-
	0x0C,0x00,0x00,0x00,

	0x1C,0x22,0x22,0x32,0x2A,0x2A,0x32,0x02,  // -@-
	0x22,0x1C,0x00,0x00,

	0x00,0x0C,0x08,0x14,0x14,0x14,0x3E,0x22,  // -A-
	0x37,0x00,0x00,0x00,

	0x00,0x1F,0x22,0x22,0x1E,0x22,0x22,0x22,  // -B-
	0x1F,0x00,0x00,0x00,

	0x00,0x3C,0x22,0x02,0x02,0x02,0x02,0x22,  // -C-
	0x1C,0x00,0x00,0x00,

	0x00,0x0F,0x12,0x22,0x22,0x22,0x22,0x12,  // -D-
	0x0F,0x00,0x00,0x00,

	0x00,0x3F,0x22,0x0A,0x0E,0x0A,0x02,0x22,  // -E-
	0x3F,0x00,0x00,0x00,

	0x00,0x3E,0x04,0x14,0x1C,0x14,0x04,0x04,  // -F-
	0x0E,0x00,0x00,0x00,

	0x00,0x3C,0x22,0x02,0x02,0x32,0x22,0x22,  // -G-
	0x1C,0x00,0x00,0x00,

	0x00,0x37,0x22,0x22,0x3E,0x22,0x22,0x22,  // -H-
	0x37,0x00,0x00,0x00,

	0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,  // -I-
	0x3E,0x00,0x00,0x00,

	0x00,0x3C,0x10,0x10,0x10,0x12,0x12,0x12,  // -J-
	0x0C,0x00,0x00,0x00,

	0x00,0x37,0x22,0x12,0x0A,0x0E,0x12,0x22,  // -K-
	0x27,0x00,0x00,0x00,

	0x00,0x0E,0x04,0x04,0x04,0x04,0x24,0x24,  // -L-
	0x3E,0x00,0x00,0x00,

	0x00,0x37,0x36,0x36,0x2A,0x2A,0x22,0x22,  // -M-
	0x37,0x00,0x00,0x00,

	0x00,0x37,0x26,0x26,0x2A,0x2A,0x2A,0x32,  // -N-
	0x37,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x22,0x22,0x22,0x22,0x22,  // -O-
	0x1C,0x00,0x00,0x00,

	0x00,0x1E,0x24,0x24,0x24,0x1C,0x04,0x04,  // -P-
	0x0E,0x00,0x00,0x00,

	0x00,0x1C,0x22,0x22,0x22,0x22,0x22,0x22,  // -Q-
	0x1C,0x38,0x00,0x00,

	0x00,0x1F,0x22,0x22,0x22,0x1E,0x12,0x22,  // -R-
	0x07,0x00,0x00,0x00,

	0x00,0x2C,0x32,0x02,0x1C,0x20,0x20,0x26,  // -S-
	0x1A,0x00,0x00,0x00,

	0x00,0x3F,0x09,0x08,0x08,0x08,0x08,0x08,  // -T-
	0x1C,0x00,0x00,0x00,

	0x00,0x37,0x22,0x22,0x22,0x22,0x22,0x22,  // -U-
	0x1C,0x00,0x00,0x00,

	0x00,0x37,0x22,0x22,0x14,0x14,0x14,0x08,  // -V-
	0x08,0x00,0x00,0x00,

	0x00,0x37,0x22,0x22,0x2A,0x2A,0x2A,0x2A,  // -W-
	0x14,0x00,0x00,0x00,

	0x00,0x23,0x22,0x14,0x08,0x08,0x14,0x22,  // -X-
	0x23,0x00,0x00,0x00,

	0x00,0x37,0x22,0x14,0x14,0x08,0x08,0x08,  // -Y-
	0x1C,0x00,0x00,0x00,

	0x00,0x3E,0x22,0x10,0x08,0x08,0x04,0x22,  // -Z-
	0x3E,0x00,0x00,0x00,

	0x00,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,  // -[-
	0x04,0x04,0x1C,0x00,

	0x00,0x02,0x04,0x04,0x04,0x08,0x08,0x10,  // -\-
	0x10,0x10,0x00,0x00,

	0x00,0x1C,0x10,0x10,0x10,0x10,0x10,0x10,  // -]-
	0x10,0x10,0x1C,0x00,

	0x00,0x08,0x08,0x14,0x22,0x00,0x00,0x00,  // -^-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -_-
	0x00,0x00,0x00,0x3F,

	0x00,0x08,0x10,0x00,0x00,0x00,0x00,0x00,  // -`-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x1C,0x22,0x3C,0x22,0x22,  // -a-
	0x3C,0x00,0x00,0x00,

	0x00,0x03,0x02,0x1A,0x26,0x22,0x22,0x22,  // -b-
	0x1F,0x00,0x00,0x00,

	0x00,0x00,0x00,0x3C,0x22,0x02,0x02,0x22,  // -c-
	0x1C,0x00,0x00,0x00,

	0x00,0x30,0x20,0x2C,0x32,0x22,0x22,0x22,  // -d-
	0x3C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x1C,0x22,0x3E,0x02,0x02,  // -e-
	0x3C,0x00,0x00,0x00,

	0x00,0x38,0x04,0x3E,0x04,0x04,0x04,0x04,  // -f-
	0x3E,0x00,0x00,0x00,

	0x00,0x00,0x00,0x2C,0x32,0x22,0x22,0x22,  // -g-
	0x3C,0x20,0x1C,0x00,

	0x00,0x03,0x02,0x1A,0x26,0x22,0x22,0x22,  // -h-
	0x37,0x00,0x00,0x00,

	0x00,0x08,0x00,0x0E,0x08,0x08,0x08,0x08,  // -i-
	0x3E,0x00,0x00,0x00,

	0x00,0x08,0x00,0x1E,0x10,0x10,0x10,0x10,  // -j-
	0x10,0x10,0x0E,0x00,

	0x00,0x03,0x02,0x3A,0x12,0x0E,0x0A,0x12,  // -k-
	0x3B,0x00,0x00,0x00,

	0x00,0x0C,0x08,0x08,0x08,0x08,0x08,0x08,  // -l-
	0x3E,0x00,0x00,0x00,

	0x00,0x00,0x00,0x17,0x2A,0x2A,0x2A,0x2A,  // -m-
	0x3F,0x00,0x00,0x00,

	0x00,0x00,0x00,0x1B,0x26,0x22,0x22,0x22,  // -n-
	0x37,0x00,0x00,0x00,

	0x00,0x00,0x00,0x1C,0x22,0x22,0x22,0x22,  // -o-
	0x1C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x1B,0x26,0x22,0x22,0x22,  // -p-
	0x1E,0x02,0x07,0x00,

	0x00,0x00,0x00,0x2C,0x32,0x22,0x22,0x22,  // -q-
	0x3C,0x20,0x30,0x00,

	0x00,0x00,0x00,0x36,0x0C,0x04,0x04,0x04,  // -r-
	0x3E,0x00,0x00,0x00,

	0x00,0x00,0x00,0x3C,0x22,0x1C,0x20,0x22,  // -s-
	0x1E,0x00,0x00,0x00,

	0x00,0x00,0x04,0x3E,0x04,0x04,0x04,0x04,  // -t-
	0x38,0x00,0x00,0x00,

	0x00,0x00,0x00,0x33,0x22,0x22,0x22,0x32,  // -u-
	0x2C,0x00,0x00,0x00,

	0x00,0x00,0x00,0x37,0x22,0x22,0x14,0x14,  // -v-
	0x08,0x00,0x00,0x00,

	0x00,0x00,0x00,0x37,0x22,0x2A,0x2A,0x2A,  // -w-
	0x14,0x00,0x00,0x00,

	0x00,0x00,0x00,0x33,0x12,0x0C,0x0C,0x12,  // -x-
	0x33,0x00,0x00,0x00,

	0x00,0x00,0x00,0x37,0x22,0x24,0x14,0x18,  // -y-
	0x08,0x08,0x1E,0x00,

	0x00,0x00,0x00,0x3E,0x12,0x08,0x04,0x22,  // -z-
	0x3E,0x00,0x00,0x00,

	0x00,0x10,0x08,0x08,0x08,0x08,0x04,0x08,  // -{-
	0x08,0x08,0x10,0x00,

	0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,  // -|-
	0x08,0x08,0x00,0x00,

	0x00,0x04,0x08,0x08,0x08,0x08,0x10,0x08,  // -}-
	0x08,0x08,0x04,0x00,

	0x00,0x00,0x00,0x00,0x00,0x24,0x1A,0x00,  // -~-
	0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00,0x00,0x24,0x1A,0x00,  // --
	0x00,0x00,0x00,0x00,
};

unsigned char *get_ascii12_code(unsigned char a)
{
    return (unsigned char *)(Ascii12+(a-' ')*12);
}
