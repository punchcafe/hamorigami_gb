#include <gb/gb.h>
const unsigned char background_pattern_block [] = {0x01,0x00,0x03,0x00,0x1f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x1e,0x01,0x73,0x0c,0x80,0x00,0xc0,0x00,0xe0,0x00,0xff,0x00,0xff,0x00,0x0e,0xf1,0xc0,0x3f,0x3e,0x00,0xd1,0x00,0xfc,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0x80,0x00,0xff,0x00,0xff,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xfb,0x00,0xfd,0x00,0xfb,0x00,0xfd,0x00,0xfb,0x00,0xf5,0x00,0xa2,0x00,0x55,0x00,0xa2,0x00,0x54,0x00,0x02,0x00,0xa4,0x03,0x01,0x03,0x17,0x1f,0x0c,0x38,0x08,0x70,0x10,0xe0,0x20,0xc0,0x00,0xc0,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x55,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xfe,0x01,0x00,0xff,0x01,0xfe,0x0e,0xf0,0xbf,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0xfc,0x00,0xdd,0x00,0xfc,0x00,0xdc,0x00,0xfc,0x00,0xdc,0x00,0xdc,0x00,0xdc,0x00,0x55,0x00,0x2a,0x00,0x55,0x00,0x00,0x00,0x2a,0xc0,0x00,0x00,0x55,0x00,0x00,0x00,0x2a,0x00,0x15,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0xfe,0x00,0xdf,0x00,0xfe,0x00,0xdf,0x00,0xde,0x00,0xdd,0x00,0x9e,0x00,0xdd,0x00,0x15,0x00,0x40,0x00,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe3,0x00,0xe3,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0xf8,0x00,0xfe,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0x01,0x01,0x02,0x03,0x01,0x07,0x00,0x1f,0x01,0x1f,0x02,0x0f,0x00,0x1c,0xfd,0x00,0xfb,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x30,0x3c,0x30,0x3c,0x10,0x1c,0x10,0x1c,0x00,0x1c,0x00,0x18,0x00,0x18,0x00,0x18,0x40,0xbf,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x08,0x07,0x01,0x0f,0x12,0x0f,0x21,0x1f,0x43,0x3f,0x47,0x3f,0x8b,0x7f,0x10,0xff,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8a,0x00,0x8f,0x00,0x02,0xfd,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x7b,0x00,0x7b,0x00,0x73,0x00,0x77,0x00,0x77,0x00,0x67,0x00,0x4f,0x00,0x5f,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x2a,0x00,0x15,0x00,0x80,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0xfa,0x00,0xf9,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0xf0,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0x04,0x1c,0x1c,0x78,0x38,0xd0,0x70,0xa0,0xe0,0x00,0x80,0x00,0x00,0x00,0x00,0x08,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x20,0x18,0x38,0xf8,0xe0,0xe0,0x00,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x1f,0x00,0x5f,0x00,0x5f,0x00,0x1f,0x00,0x55,0x00,0xd8,0x00,0xd4,0x00,0xc8,0x00,0x54,0x00,0xc8,0x00,0x94,0x00,0xc8,0x00,0x54,0x00,0x05,0x00,0x82,0x00,0xf0,0x00,0xf9,0x00,0xfe,0x00,0xfe,0x00,0xfe,0x00,0xc4,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x04,0xb8,0x88,0xb0,0x90,0xe0,0xc0,0xe0,0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x3f,0x00,0x2a,0x00,0x15,0x00,0x2a,0x00,0x15,0x00,0x00,0x00,0x2a,0x00,0x7c,0x00,0xe6,0x18,0x1c,0xe0,0xf8,0x00,0x30,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0xe3,0x00,0xe5,0x00,0xe5,0x00,0xed,0x00,0xed,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x2a,0x00,0x3f,0x00,0x00,0x00,0xff,0x00,0x05,0xff,0xff,0xff,0xad,0xff,0xef,0xff,0xf8,0x07,0x0f,0x00,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0xf0,0x00,0x57,0x00,0x08,0xf0,0x70,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0xaa,0x00,0x40,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x00,0x00,0xff,0x03,0x0a,0xff,0xe1,0xff,0x7f,0xff,0xff,0xff,0x00,0xff,0xca,0x35,0x09,0x07,0x03,0x0e,0x10,0x0e,0x20,0x1e,0x4a,0x3e,0x16,0x7e,0xab,0x7e,0x07,0xff,0xfd,0x00,0xfb,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfc,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0xff,0x00,0xa0,0x5f,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x00,0xc0,0x7f,0xe0,0xa0,0xff,0x7f,0xff,0xfa,0xff,0xff,0xff,0x07,0xf8,0x00,0xff,0x02,0x01,0xff,0x03,0x06,0xff,0xfd,0xff,0x7a,0xff,0xff,0xff,0x00,0xff,0xca,0x35,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0xff,0x00,0xff,0x00,0x30,0x38,0x28,0x3c,0x14,0x3c,0x28,0x3e,0x16,0x3c,0x20,0x3c,0x08,0x34,0x18,0x66,0xc8,0x00,0xd8,0x00,0xe8,0x00,0xf8,0x00,0xe8,0x00,0xf8,0x00,0xe8,0x00,0xf8,0x00,0xf9,0x00,0xa3,0x00,0x47,0x00,0xaf,0x00,0x51,0x0e,0x00,0x0f,0xaa,0x01,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x60,0x40,0xc0,0xc0,0xc0,0x00,0x00,0x5a,0x00,0xdd,0x00,0x9a,0x00,0x5d,0x00,0x9a,0x00,0x55,0x00,0x0a,0x00,0x94,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xeb,0x00,0xe9,0x00,0xe5,0x00,0xe4,0x00,0xf7,0x00,0xf0,0x0c,0x00,0xf8,0x30,0xf0,0xe0,0xe0,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x06,0xf9,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xab,0x55,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0xf7,0x00,0x56,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x55,0x00,0x7f,0x00,0x2a,0x00,0x07,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xc0,0x3f,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x00,0xfc,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0xf5,0x00,0xf3,0x00,0xef,0x00,0x1f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0xf8,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x55,0x00,0x7f,0x00,0x2a,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x3f,0xc0,0x00,0xff,0x00,0x7f,0x3e,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x00,0xc0,0x00,0x80,0x07,0x00,0xd4,0xc0,0xc0,0xc0,0xa0,0xe0,0x40,0xf0,0x00,0xfc,0x5c,0xe2,0x8e,0xf0,0x86,0x78,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x10,0x00,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0x01,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,0x00,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xd0,0x00,0x48,0x00,0xf4,0x00,0xec,0x00,0xe4,0x00,0xe2,0x00,0xe1,0x00,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x1f,0x00,0x3f,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x80,0xe0,0x00,0x70,0x00,0x38,0x00,0x18,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x3f,0x00,0x54,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x0b,0x00,0x9f,0x00,0xfe,0x00,0x7c,0x55,0x00,0x00,0x00,0x30,0x00,0x10,0xf8,0x6a,0xec,0x85,0x86,0x02,0x03,0x03,0x03,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x1f,0xe0,0x0a,0xf5,0x30,0xcf,0xcf,0xc0,0x82,0x7d,0x00,0xff,0x01,0xff,0x7e,0x81,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x3f,0x00,0x7f,0x00,0x3f,0x00,0x3f,0x00,0xfd,0x02,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x07,0xf8,0x00,0xff,0x00,0xff,0x04,0xfb,0x78,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x06,0x01,0x09,0x07,0x1f,0x03,0x07,0x13,0x01,0x38,0x22,0x1c,0x05,0x00,0x8a,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0xa0,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x80,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x02,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x7d,0xff,0xfe,0xff,0xbd,0xff,0x7e,0x7e,0x3c,0x3c,0x38,0x38,0x38,0x38,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x3f,0x00,0x7f,0x00,0xff,0x00,0xff,0x00,0x50,0x07,0x03,0x0f,0x14,0x0c,0x20,0x38,0x28,0x38,0x38,0x39,0xb9,0x3b,0xfe,0xff,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x07,0x00,0x0f,0x00,0x3f,0x00,0x3f,0x00,0x7f,0x00,0x00,0x7f,0x60,0x1f,0x1f,0x00,0xf7,0x00,0xaf,0x00,0x5a,0x05,0xbe,0x01,0x54,0x0a,0x16,0x08,0xac,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x07,0x06,0x1e,0x00,0x70,0xff,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x2a,0x00,0x55,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x1f,0x00,0x4a,0x00,0x1f,0x00,0x55,0x00,0x0a,0x00,0x15,0x00,0x4a,0x00,0x00,0x00,0x83,0x00,0xc3,0x00,0xe3,0x00,0xf3,0x00,0xf3,0x00,0xfb,0x00,0xfb,0x00,0xfb,0x00,0x10,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x3c,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x02,0x00,0x03,0x00,0x01,0x00,0x10,0x2f,0x08,0x37,0x14,0x2b,0x0a,0x15,0x0d,0x12,0x0f,0x00,0xe8,0x17,0x55,0xaa,0x03,0x7c,0x63,0x1c,0x00,0x1f,0x10,0x0f,0x08,0x07,0x08,0x07,0x01,0x07,0x02,0x07,0x00,0xff,0x80,0x7f,0x50,0x07,0xab,0x01,0x55,0x01,0x03,0x03,0xaf,0x07,0x02,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x01,0x0f,0x0f,0x00,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xad,0xff,0xef,0xff,0xf8,0x07,0x0f,0x00,0xef,0x00,0xef,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xdf,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x55,0xaa,0xff,0x00,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xef,0x00,0xef,0x00,0xfc,0x00,0xfe,0x00,0x07,0xf8,0x03,0x0c,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0xc0,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xe1,0xfe,0xf2,0xf0,0x64,0xe0,0xa0,0xe0,0xfc,0x03,0x00,0xff,0x00,0xff,0x00,0xff,0xde,0x21,0x60,0x00,0x00,0x00,0x00,0x00,0x88,0x00,0x50,0x00,0x08,0x00,0x90,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0xf5,0x00,0xa2,0x00,0x55,0x00,0xa2,0x00,0x54,0x00,0x02,0x00,0xa4,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xfe,0x00,0x54,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x15,0x00,0xbf,0x00,0x2a,0x00,0x3f,0x00,0x15,0x00,0x40,0xc0,0x80,0x80,0x01,0x02,0x01,0x1f,0x14,0x7e,0x28,0xf8,0x00,0xc0,0x00,0x80,0xe0,0xf0,0x60,0xe0,0xc0,0xc0,0x80,0xc0,0x00,0x80,0x00,0x80,0x00,0x80,0x80,0xc0,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x7f,0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x80,0x00,0xea,0x00,0x00,0xe0,0x15,0xe0,0x00,0xc0,0x8f,0x00,0x8f,0x00,0xff,0x00,0xdf,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x03,0x00,0xab,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0c,0x00,0x0c,0x0c,0x0e,0x03,0x03,0x00,0x00,0x00,0x00,0xff,0x00,0x56,0xff,0xf9,0xff,0x7f,0xff,0xff,0xff,0x00,0xff,0xca,0x35,0xfb,0x00,0xfb,0x00,0xfb,0x00,0xfb,0x00,0x53,0x00,0xfb,0x00,0xab,0x00,0x53,0x00,0x78,0x7c,0xc8,0xce,0x8c,0x8e,0x08,0x0c,0x00,0x7c,0x30,0xf0,0x80,0xc0,0x00,0xc0,0x34,0x6e,0x81,0xff,0xae,0xff,0x75,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x80,0x7f,0x00,0x00,0xff,0x00,0x01,0xfe,0xfe,0xff,0xdf,0xff,0xff,0xff,0xff,0x00,0x00,0xf0,0xe0,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0xf0,0x00,0xe8,0x00,0xe4,0x00,0xe2,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x55,0xaa,0xff,0x00,0x00,0xff,0x40,0xbf,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x00,0x00,0x00,0xfe,0x14,0xff,0xea,0xff,0xd5,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x80,0x7f,0x55,0x00,0xff,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xe8,0xff,0x7f,0xff,0xfa,0xff,0xff,0xff,0x07,0xf8,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x3f,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0xe0,0x00,0x30,0xc0,0x98,0xc0,0x98,0xc0,0x18,0x04,0x08,0x14,0x01,0x00,0x07,0x06,0x00,0x38,0x00,0xf0,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x78,0xf8,0x1c,0xc0,0x27,0xc0,0x01,0xc0,0x00,0xc0,0x00,0x55,0x00,0xaa,0x00,0x40,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x6a,0x00,0xbf,0x00,0x02,0x01,0xfe,0x03,0x06,0xff,0xfd,0xff,0x7b,0xff,0xff,0xff,0x00,0xff,0xca,0x35,0x00,0x00,0xe1,0x00,0x63,0x80,0x80,0x77,0xe3,0x1c,0xe7,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0xff,0x00,0x57,0xff,0xfe,0xff,0x7f,0xff,0xff,0xff,0x00,0xff,0xca,0x35,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0x58,0xa4,0x28,0xd4,0x58,0xa4,0xa0,0x58,0x50,0xa8,0xe0,0x10,0x17,0xe8,0xaa,0x55,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x55,0x00,0x7f,0x00,0x2a,0x00,0xff,0x00,0x80,0x80,0xff,0xc0,0xc0,0xff,0xff,0xff,0xfa,0xff,0xff,0xff,0x07,0xf8,0x00,0xff,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfc,0x00,0xfd,0x00,0xfc,0x00,0xfd,0x00,0xfc,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x00,0xff,0x00,0xff,0x07,0xf8,0x3c,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xe0,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x3b,0x00,0x3b,0x00,0x7b,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2b,0xd4,0x00,0xff,0x00,0x7f,0x7c,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x63,0x1c,0x3c,0x03,0x13,0x00,0x0c,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfe,0x00,0xf1,0x00,0x8f,0x00,0xbf,0x00,0x78,0x07,0x43,0x3c,0x60,0x1f,0x00,0x1f,0x10,0x0f,0x00,0x0f,0x08,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x00,0x60,0x40,0x60,0x40,0x60,0x40,0x70,0x30,0x38,0x38,0x3f,0x0f,0x0f,0x00,0x00,0x02,0x00,0x02,0x00,0x01,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x0a,0xff,0x35,0xff,0xfb,0xff,0xff,0xff,0x00,0xff,0x80,0x7f,0x00,0x00,0x7f,0x80,0xe8,0xff,0x3f,0xff,0xfa,0xff,0xff,0xff,0x07,0xf8,0x00,0xff,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0x52,0x00,0x00,0x00,0xff,0xc0,0x60,0xff,0xff,0xff,0xfa,0xff,0xff,0xff,0x07,0xf8,0x00,0xff,0x54,0xc0,0x00,0xc0,0x20,0xc0,0x10,0xe0,0x04,0xf8,0x19,0xe6,0x0e,0xf1,0x8b,0x74,0x4d,0x1f,0x10,0x0f,0x10,0x0f,0x20,0x1f,0x20,0x1f,0x06,0x1f,0xc3,0x0f,0xe0,0x1c,0xf2,0x00,0xa0,0x00,0xf2,0x00,0x52,0x00,0xa0,0x00,0x52,0x00,0xa0,0x00,0x00,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0x00,0x3c,0x81,0x7e,0xa8,0xff,0x75,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x80,0x7f,0x3f,0x00,0x7f,0x00,0x7f,0x00,0xff,0x00,0x01,0xfe,0xc8,0xf7,0xf8,0xc7,0xc4,0xc3,0xc0,0x00,0xe0,0x00,0x58,0x00,0x48,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x03,0x00,0x02,0x00,0x01,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xb1,0xcf,0x01,0xff,0x19,0xff,0xb5,0xff,0xfb,0xff,0xff,0xff,0x00,0xff,0x80,0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x7f,0x00,0x7f,0x00,0x10,0x00,0x90,0x00,0xd0,0x00,0xd8,0x00,0xc8,0x00,0xd8,0x00,0xc8,0x00,0xd8,0x00,0xbf,0x40,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x3f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x6a,0x00,0x01,0x00,0x40,0x80,0x80,0x40,0x60,0x80,0xd3,0x20,0x34,0xc3,0x08,0xf7,0x00,0xff,0x00,0xfc,0x00,0x18,0x00,0x38,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3c,0x00,0x7c,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xaa,0x00,0xff,0x00};
const unsigned char background_index_array [] = {0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xad,0x53,0x63,0x61,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x92,0x39,0xd8,0x22,0x8d,0x24,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x79,0x43,0x50,0xc4,0x08,0xdc,0x89,0x5b,0x51,0x89,0xbb,0x08,0x08,0xcb,0x08,0x08,0x69,0x26,0x26,0xa4,0x00,0x17,0x17,0x5f,0x71,0x1d,0x89,0xdd,0x51,0x89,0xbb,0x08,0x08,0x98,0x50,0x50,0x1e,0x89,0x89,0xe2,0xaf,0x89,0x89,0xc0,0x76,0x89,0x89,0x45,0x51,0x89,0xbb,0x08,0x08,0x57,0x89,0x89,0x2e,0x89,0x89,0x11,0x2e,0x89,0x89,0xc0,0xc5,0x89,0x89,0x23,0x7e,0x89,0xbb,0x52,0x99,0x57,0x89,0x89,0x2e,0x89,0x89,0x8a,0x2e,0x89,0x89,0xc0,0x1f,0x89,0x89,0x49,0xa0,0x89,0x05,0xaf,0x9b,0x57,0x89,0x89,0x2e,0x89,0x89,0x33,0x3a,0x89,0x89,0xd5,0x2a,0x3e,0x3e,0xd0,0x9c,0x89,0x14,0xb6,0x1b,0x57,0x89,0x89,0x2e,0x89,0x89,0x15,0x09,0x89,0x89,0x8b,0x7d,0xa6,0xa6,0xd4,0x81,0x16,0x4c,0x38,0x6d,0x57,0x89,0x89,0x2e,0x89,0x89,0xc1,0x0b,0x89,0x89,0x87,0x10,0x80,0x80,0x6e,0xd9,0x7b,0x93,0x08,0x08,0x56,0xe4,0xe4,0xc2,0x89,0x89,0x0c,0x34,0x3f,0x3f,0x0f,0x08,0x08,0x08,0x08,0xb0,0xae,0x75,0x08,0x08,0x7c,0x2f,0x2f,0x95,0x54,0x54,0x2b,0x31,0xa8,0xa8,0x48,0x08,0x08,0x08,0x08,0x08,0xc8,0xb8,0x32,0x08,0x08,0x08,0x08,0x0e,0xa9,0xa9,0x91,0x20,0x01,0x01,0x28,0x08,0x08,0x08,0x08,0x08,0x08,0x7f,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x6c,0x35,0xb9,0xd6,0xaa,0xa3,0xb2,0x08,0x08,0x08,0x08,0x08,0x08,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x82,0xa5,0x88,0x88,0x88,0x88,0xbc,0x50,0x50,0x50,0x50,0x50,0x50,0xe3,0x4f,0x40,0xe3,0xe3,0xe3,0x6a,0x19,0xdb,0xdb,0xdb,0xdb,0xdb,0x1c,0xde,0xe3,0xe3,0xe3,0xe3,0x4b,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xad,0x53,0x63,0x61,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x92,0x39,0xd8,0x22,0x8d,0x24,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x79,0x43,0x50,0xc4,0x08,0xdc,0x89,0x5b,0x51,0x89,0xbb,0x08,0x08,0xcb,0x08,0x08,0x69,0x26,0x26,0xa4,0x00,0x17,0x17,0x5f,0x71,0x1d,0x89,0xdd,0x51,0x89,0xbb,0x08,0x08,0x98,0x50,0x50,0x1e,0x89,0x89,0xe2,0xaf,0x89,0x89,0xc0,0x76,0x89,0x89,0x45,0x51,0x89,0xbb,0x08,0x08,0x57,0x89,0x89,0x2e,0x89,0x89,0x11,0x2e,0x89,0x89,0xc0,0xc5,0x89,0x89,0x23,0x7e,0x89,0xbb,0x52,0x99,0x57,0x89,0x89,0x2e,0x89,0x89,0x8a,0x2e,0x89,0x89,0xc0,0x1f,0x89,0x89,0x49,0xa0,0x89,0x05,0xaf,0x9b,0x57,0x89,0x89,0x2e,0x89,0x89,0x33,0x3a,0x89,0x89,0xd5,0x2a,0x3e,0x3e,0xd0,0x9c,0x89,0x14,0xb6,0x1b,0x57,0x89,0x89,0x2e,0x89,0x89,0x15,0x09,0x89,0x89,0x8b,0x7d,0xa6,0xa6,0xd4,0x81,0x16,0x36,0xb5,0x6d,0x57,0x89,0x89,0x2e,0x89,0x89,0xc1,0x0b,0x89,0x89,0x87,0x10,0x80,0x80,0x6e,0xd9,0x7b,0x78,0x9d,0x08,0x56,0xe4,0xe4,0xc2,0x89,0x89,0x0c,0x34,0x3f,0x3f,0x0f,0x08,0x08,0x08,0x08,0x02,0xb4,0x64,0xb3,0x8c,0x0d,0x2f,0x2f,0x95,0x54,0x54,0x2b,0x31,0xa8,0xa8,0x48,0x08,0x08,0x08,0xab,0x5d,0x4e,0x18,0x08,0x08,0x08,0x08,0x08,0x0e,0xa9,0xa9,0x91,0x20,0x01,0x01,0x28,0x08,0x08,0x08,0x08,0x08,0x08,0xe1,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x6c,0x86,0x3b,0xa7,0xd1,0xa3,0xb2,0x08,0x08,0x08,0x08,0x08,0x08,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x82,0xa5,0x88,0x88,0x88,0x88,0xbc,0x50,0x50,0x50,0x50,0x50,0x50,0xe3,0x4f,0x40,0xe3,0xe3,0xe3,0x6a,0x19,0xdb,0xdb,0xdb,0xdb,0xdb,0x1c,0xde,0xe3,0xe3,0xe3,0xe3,0x4b,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xad,0x53,0x63,0x61,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x92,0x39,0xd8,0x22,0x8d,0x24,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x79,0x43,0x50,0xc4,0x08,0xdc,0x89,0x5b,0x51,0x89,0xbb,0x08,0x08,0xcb,0x08,0x08,0x69,0x26,0x26,0xa4,0x00,0x17,0x17,0x5f,0x71,0x1d,0x89,0xdd,0x51,0x89,0xbb,0x08,0x08,0x98,0x50,0x50,0x1e,0x89,0x89,0xe2,0xaf,0x89,0x89,0xc0,0x76,0x89,0x89,0x45,0x51,0x89,0xbb,0x08,0x08,0x57,0x89,0x89,0x2e,0x89,0x89,0x11,0x2e,0x89,0x89,0xc0,0xc5,0x89,0x89,0x23,0x7e,0x89,0xbb,0x52,0x99,0x57,0x89,0x89,0x2e,0x89,0x89,0x8a,0x2e,0x89,0x89,0xc0,0x1f,0x89,0x89,0x49,0xa0,0x89,0x05,0xaf,0x9b,0x57,0x89,0x89,0x2e,0x89,0x89,0x33,0x3a,0x89,0x89,0xd5,0x2a,0x3e,0x3e,0xd0,0x9c,0x89,0x14,0xb6,0x1b,0x57,0x89,0x89,0x2e,0x89,0x89,0x15,0x09,0x89,0x89,0x8b,0x7d,0xa6,0xa6,0xd4,0x81,0x94,0x5c,0x38,0x6d,0x57,0x89,0x89,0x2e,0x89,0x89,0xc1,0x0b,0x89,0x89,0x87,0x10,0x80,0x80,0x6e,0xd9,0x46,0x66,0x03,0x59,0xbe,0xe4,0xe4,0xc2,0x89,0x89,0x0c,0x34,0x3f,0x3f,0x0f,0x08,0x08,0x79,0x73,0x12,0x13,0x5a,0x85,0xd7,0x8e,0x9a,0x2f,0x95,0x54,0x54,0x2b,0x31,0xa8,0xa8,0x48,0x08,0x08,0xbd,0x58,0x67,0x30,0x83,0x07,0x68,0xac,0xc6,0x08,0x0e,0xa9,0xa9,0x91,0x20,0x01,0x01,0x28,0x08,0x08,0x08,0x08,0x08,0x79,0x3c,0xb1,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x6c,0x86,0x42,0xda,0xbf,0xa3,0xb2,0x08,0x08,0x08,0x08,0x08,0x08,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x82,0xa5,0x88,0x88,0x88,0x88,0xbc,0x50,0x50,0x50,0x50,0x50,0x50,0xe3,0x4f,0x40,0xe3,0xe3,0xe3,0x6a,0x19,0xdb,0xdb,0xdb,0xdb,0xdb,0x1c,0xde,0xe3,0xe3,0xe3,0xe3,0x4b,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xad,0x53,0x63,0x61,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x92,0x39,0xd8,0x22,0x8d,0x24,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x79,0x43,0x50,0xc4,0x08,0xdc,0x89,0x5b,0x51,0x89,0xbb,0x08,0x08,0xcb,0x08,0x08,0x69,0x26,0x26,0xa4,0x00,0x17,0x17,0x5f,0x71,0x1d,0x89,0xdd,0x51,0x89,0xbb,0x08,0x08,0x98,0x50,0x50,0x1e,0x89,0x89,0xe2,0xaf,0x89,0x89,0xc0,0x76,0x89,0x89,0x45,0x51,0x89,0xbb,0x08,0x08,0x57,0x89,0x89,0x2e,0x89,0x89,0x11,0x2e,0x89,0x89,0xc0,0xc5,0x89,0x89,0x23,0x7e,0x89,0xbb,0x52,0x99,0x57,0x89,0x89,0x2e,0x89,0x89,0x8a,0x2e,0x89,0x89,0xc0,0x1f,0x89,0x89,0x49,0xa0,0x89,0x05,0xaf,0x9b,0x57,0x89,0x89,0x2e,0x89,0x89,0x33,0x3a,0x89,0x89,0xd5,0x2a,0x3e,0x3e,0xd0,0x9c,0x89,0x3d,0xdf,0x1b,0x57,0x89,0x89,0x2e,0x89,0x89,0x15,0x09,0x89,0x89,0x8b,0x7d,0xa6,0xa6,0xd4,0x70,0xc9,0x55,0x5e,0x2c,0x57,0x89,0x89,0x2e,0x89,0x89,0xc1,0x0b,0x89,0x89,0x87,0x10,0x80,0x80,0x6e,0xcd,0x84,0x8f,0xc3,0x37,0x4d,0xe4,0xe4,0xc2,0x89,0x89,0x0c,0x34,0x3f,0x3f,0x0f,0x08,0x08,0x60,0x2d,0x25,0xd3,0xd2,0x6f,0x77,0x04,0x0a,0x21,0x95,0x54,0x54,0x2b,0x31,0xa8,0xa8,0x48,0x08,0x08,0xc7,0x90,0x6b,0x4a,0xca,0xe0,0x27,0xac,0xba,0x08,0x0e,0xa9,0xa9,0x91,0x20,0x01,0x01,0x28,0x08,0x08,0x08,0x08,0x08,0x79,0x1a,0x97,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x6c,0x86,0xb7,0xce,0x41,0xa3,0xb2,0x08,0x08,0x08,0x08,0x08,0x08,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x82,0xa5,0x88,0x88,0x88,0x88,0xbc,0x50,0x50,0x50,0x50,0x50,0x50,0xe3,0x4f,0x40,0xe3,0xe3,0xe3,0x6a,0x19,0xdb,0xdb,0xdb,0xdb,0xdb,0x1c,0xde,0xe3,0xe3,0xe3,0xe3,0x4b,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xad,0x53,0x63,0x61,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x92,0x39,0xd8,0x22,0x8d,0x24,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x79,0x43,0x50,0xc4,0x08,0xdc,0x89,0x5b,0x51,0x89,0xbb,0x08,0x08,0xcb,0x08,0x08,0x69,0x26,0x26,0xa4,0x00,0x17,0x17,0x5f,0x71,0x1d,0x89,0xdd,0x51,0x89,0xbb,0x08,0x08,0x98,0x50,0x50,0x1e,0x89,0x89,0xe2,0xaf,0x89,0x89,0xc0,0x76,0x89,0x89,0x45,0x51,0x89,0xbb,0x08,0x08,0x57,0x89,0x89,0x2e,0x89,0x89,0x11,0x2e,0x89,0x89,0xc0,0xc5,0x89,0x89,0x23,0x7e,0x89,0xbb,0x52,0x99,0x57,0x89,0x89,0x2e,0x89,0x89,0x8a,0x2e,0x89,0x89,0xc0,0x1f,0x89,0x89,0x49,0xa0,0x89,0x05,0xaf,0x9b,0x57,0x89,0x89,0x2e,0x89,0x89,0x33,0x3a,0x89,0x89,0xd5,0x2a,0x3e,0x3e,0xd0,0x9c,0x89,0x14,0xb6,0x1b,0x57,0x89,0x89,0x2e,0x89,0x89,0x15,0x09,0x89,0x89,0x8b,0x7d,0xa6,0xa6,0xd4,0x81,0x16,0x4c,0x38,0x6d,0x57,0x89,0x89,0x2e,0x89,0x89,0xc1,0x0b,0x89,0x89,0x87,0x10,0x80,0x80,0x6e,0xd9,0x7b,0x06,0xa1,0x08,0x56,0xe4,0xe4,0xc2,0x89,0x89,0x0c,0x34,0x3f,0x3f,0x0f,0x08,0x08,0x08,0x08,0x7a,0x65,0x74,0x96,0x62,0x7c,0x2f,0x2f,0x95,0x54,0x54,0x2b,0x31,0xa8,0xa8,0x48,0x08,0x08,0x08,0x08,0xcc,0x47,0x72,0x9e,0x29,0x08,0x08,0x08,0x0e,0xa9,0xa9,0x91,0x20,0x01,0x01,0x28,0x08,0x08,0x08,0x08,0x08,0x08,0x44,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x6c,0x35,0x9f,0xa2,0xcf,0xa3,0xb2,0x08,0x08,0x08,0x08,0x08,0x08,0x50,0x50,0x50,0x50,0x50,0x50,0x50,0x82,0xa5,0x88,0x88,0x88,0x88,0xbc,0x50,0x50,0x50,0x50,0x50,0x50,0xe3,0x4f,0x40,0xe3,0xe3,0xe3,0x6a,0x19,0xdb,0xdb,0xdb,0xdb,0xdb,0x1c,0xde,0xe3,0xe3,0xe3,0xe3,0x4b};
#define ROUGH_PATTERN_BLOCK_SIZE 229

void setup_background()
{
    set_bkg_data(0, 229, background_pattern_block);
    set_bkg_tiles(0, 0, 20, 18, &background_index_array[1080]);
}