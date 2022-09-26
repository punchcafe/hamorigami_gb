#include <gb/gb.h>
#include "../../include/systems/render_bonsai.h"

const unsigned char background_pattern_block [] = {0x01,0x00,0x03,0x00,0x1f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xfb,0x00,0xfd,0x00,0xfb,0x00,0xfd,0x00,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x40,0x80,0x40,0xbf,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x80,0xc0,0x80,0xe0,0xc0,0xe0,0x80,0xc0,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x7f,0x60,0x00,0x8f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xf8,0x1f,0xfc,0x9c,0xff,0x5f,0xff,0xbf,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0xfc,0x00,0xdd,0x00,0xfc,0x00,0xdc,0x00,0xfc,0x00,0xdc,0x00,0xdc,0x00,0xdc,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0xc0,0x03,0x03,0x02,0x03,0x01,0x03,0x02,0x03,0x01,0x03,0x02,0x03,0x00,0x03,0x01,0x06,0x2a,0x00,0x15,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xd7,0xff,0xff,0xff,0x80,0x7f,0xfc,0x03,0xfe,0x00,0xdf,0x00,0xfe,0x00,0xdf,0x00,0xde,0x00,0xdd,0x00,0x9e,0x00,0xdd,0x00,0x15,0x00,0x40,0x00,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe3,0x00,0xe3,0x00,0xfd,0x00,0xfb,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x04,0x7c,0x38,0xf8,0x40,0xc0,0x00,0x81,0x81,0x87,0x82,0x9f,0x90,0xbc,0xe0,0xf8,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x18,0x24,0x18,0xfe,0x40,0xe7,0x80,0x83,0x00,0x01,0x00,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x40,0xbf,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8a,0x00,0x8f,0x00,0x00,0xff,0x07,0xf8,0x78,0x80,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xfd,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x00,0x06,0x04,0x06,0x04,0x06,0x04,0x07,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x7f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3c,0x03,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x07,0xfe,0xaa,0xff,0x57,0xff,0xbf,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x7b,0x00,0x7b,0x00,0x73,0x00,0x77,0x00,0x77,0x00,0x67,0x00,0x4f,0x00,0x5f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x1f,0xe0,0x83,0x7c,0x80,0x7f,0x40,0x3f,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x70,0x30,0xe0,0x00,0xe0,0x00,0xe0,0xa0,0xe0,0x60,0xe0,0xb0,0xe0,0x78,0xf0,0x01,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xfb,0x00,0xc0,0x00,0xe0,0x00,0x70,0x80,0x30,0xc0,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0xfa,0x00,0xf9,0x00,0x03,0x06,0xf8,0x0f,0x6a,0xff,0x97,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xa8,0x57,0x00,0xbf,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x05,0xfa,0x02,0xfd,0x05,0xfa,0xaa,0x55,0x55,0xaa,0xfe,0x01,0x00,0xfe,0x08,0xf4,0x00,0x00,0x01,0x01,0x07,0x03,0x3d,0x07,0x4a,0x3e,0x80,0x78,0x00,0xf0,0x00,0xc0,0x08,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0x60,0x80,0xc0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x80,0x00,0xff,0x03,0xff,0x4e,0xbe,0x86,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x1f,0x00,0x5f,0x00,0x5f,0x00,0x1f,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0xc0,0x02,0xc1,0xc3,0xef,0x3e,0x3e,0x00,0x00,0xd8,0x00,0xd4,0x00,0xc8,0x00,0x54,0x00,0xc8,0x00,0x94,0x00,0xc8,0x00,0x54,0x00,0x17,0x1f,0x0f,0x0f,0x0b,0x0f,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x02,0x0d,0x00,0x0f,0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x07,0x00,0x0f,0x00,0x00,0x1f,0x0c,0x0f,0x1f,0x1c,0xfc,0xfc,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x60,0x1f,0x9f,0x7f,0xfa,0x3f,0x7e,0x3f,0x1f,0x80,0x20,0xc0,0x15,0x00,0x3f,0x00,0x2a,0x00,0x15,0x00,0x2a,0x00,0x15,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x86,0x84,0xfc,0xfc,0xfc,0x00,0x00,0x9f,0x00,0x3f,0x00,0x7f,0x00,0xff,0x00,0x11,0xee,0x00,0xff,0xa3,0x1c,0x0c,0x0c,0xe3,0x00,0xe5,0x00,0xe5,0x00,0xed,0x00,0xed,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x2a,0x00,0x3f,0x00,0x55,0x00,0x00,0x00,0x01,0x00,0x02,0x83,0xa2,0xc3,0x53,0x63,0x2b,0x33,0x3f,0x3f,0xf7,0x07,0xae,0x0c,0x5d,0x08,0xa2,0x00,0x50,0x07,0x03,0x0f,0x88,0x3c,0x10,0x3c,0x55,0x00,0xaa,0x00,0x40,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x01,0x0f,0x06,0x1e,0x18,0x78,0x60,0xe0,0x00,0x00,0x00,0x0f,0xf1,0x3f,0xae,0xff,0x1d,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xa8,0x57,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0xff,0x00,0xa0,0x5f,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x7c,0x43,0xc7,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0xff,0x00,0xff,0x00,0x00,0x03,0xf8,0x07,0x7a,0xff,0xe7,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xa8,0x57,0xc8,0x00,0xd8,0x00,0xe8,0x00,0xf8,0x00,0xe8,0x00,0xf8,0x00,0xe8,0x00,0xf8,0x00,0x07,0x00,0x1e,0x01,0x31,0x0e,0x0f,0x70,0x33,0xc0,0x7c,0x80,0x80,0x80,0x80,0x80,0xff,0x00,0xaa,0x00,0x55,0x00,0xab,0x00,0x55,0x00,0x01,0x00,0xaa,0x00,0x00,0x00,0x5a,0x00,0xdd,0x00,0x9a,0x00,0x5d,0x00,0x9a,0x00,0x55,0x00,0x0a,0x00,0x94,0x00,0xeb,0x00,0xfb,0x00,0xeb,0x00,0xeb,0x00,0xe9,0x00,0xe5,0x00,0xe4,0x00,0xf7,0x00,0x5d,0x0c,0x1c,0x1c,0x2a,0x3e,0x14,0x7f,0x00,0xff,0x15,0xfe,0x28,0xff,0x08,0xc7,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x01,0x00,0x00,0x00,0x00,0x07,0x0f,0x01,0x3c,0x02,0x7c,0x00,0xec,0x10,0x3c,0xc0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xaa,0x00,0xe0,0x00,0x4f,0x00,0xff,0x00,0x06,0xf9,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xab,0x55,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0x17,0x00,0xe2,0x00,0x01,0x02,0x00,0x03,0x01,0x02,0x00,0x01,0x00,0x01,0x00,0x00,0xff,0x00,0xff,0x00,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0xf7,0x00,0x56,0x00,0xc0,0x3f,0x00,0xff,0x00,0xff,0x00,0xff,0xe7,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x54,0x80,0x00,0x80,0x00,0x83,0x00,0x8f,0x00,0xbc,0x00,0xf0,0x00,0xe0,0x00,0xc0,0xff,0x00,0xc0,0x3f,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0x00,0xfc,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0x34,0xc8,0x08,0xf4,0x06,0xf8,0x0d,0xf2,0x03,0xfc,0x80,0x7f,0x00,0x7f,0x00,0x7f,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x55,0x00,0x7f,0x00,0x2a,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x01,0x04,0x03,0x01,0x07,0x0a,0x07,0x10,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x07,0x00,0x0f,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x01,0x04,0x03,0x04,0x03,0x08,0x07,0x11,0x0f,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x10,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xf0,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x80,0x7f,0x40,0xbf,0xaa,0x55,0xd5,0x2a,0xff,0x00,0x80,0x7f,0x54,0xab,0xd0,0x00,0x48,0x00,0xf4,0x00,0xec,0x00,0xe4,0x00,0xe2,0x00,0xe1,0x00,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x07,0x55,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0x00,0x70,0x00,0x19,0x00,0x0f,0x00,0x07,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0xc0,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xff,0x00,0xff,0x00,0x7f,0xb0,0x1f,0x5e,0x1f,0x3f,0x3f,0xf6,0x7e,0x2a,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0xc0,0x00,0xe1,0x00,0xfa,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xfc,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x3f,0x00,0x3f,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x3f,0x00,0x7f,0x00,0x3f,0x00,0x3f,0x00,0xfd,0x02,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x05,0x00,0x8a,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0x00,0x00,0x00,0xa0,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x07,0xd0,0xf0,0xe0,0xf0,0xd0,0xf0,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x80,0x80,0x80,0x80,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x20,0xe0,0x00,0x60,0x80,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xf8,0x07,0x00,0xff,0x00,0xff,0xe7,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xbf,0x40,0x00,0xff,0x00,0xff,0xc0,0x3f,0x3d,0x02,0x06,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xe0,0x01,0xe0,0x01,0xf0,0x00,0xf0,0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x3f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf0,0x00,0x3e,0xc0,0xc6,0x38,0x38,0x07,0xce,0x01,0x3e,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0xf8,0x00,0x1e,0xe0,0xe3,0xfc,0xf9,0xfc,0xf9,0xfc,0xf1,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x0f,0x00,0x04,0xc3,0x06,0x81,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x2a,0x00,0x55,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x1f,0x00,0x4a,0x00,0x1f,0x00,0x55,0x00,0x0a,0x00,0x15,0x00,0x4a,0x00,0x00,0x00,0x83,0x00,0xc3,0x00,0xe3,0x00,0xf3,0x00,0xf3,0x00,0xfb,0x00,0xfb,0x00,0xfb,0x00,0x3f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x6a,0x00,0x1f,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xc0,0x40,0xc0,0x80,0xe0,0x60,0xc0,0x00,0xc0,0x80,0x40,0x80,0x60,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x02,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0xff,0x00,0x55,0xff,0xff,0xff,0xd7,0xff,0xff,0xff,0x80,0x7f,0xfc,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xef,0x00,0xef,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xdf,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x55,0xaa,0xff,0x00,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x03,0x02,0x01,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0x40,0xe0,0x17,0xf8,0xee,0xff,0x53,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0xe3,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xe7,0x00,0xef,0x00,0xef,0x00,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x90,0x60,0xe8,0x10,0xb0,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x20,0xdb,0x08,0xfb,0x19,0xfe,0xec,0x1e,0x12,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0x00,0xfb,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xc0,0x00,0x88,0x00,0x50,0x00,0x08,0x00,0x90,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x00,0x01,0x01,0x00,0x01,0x00,0x02,0x01,0x02,0x01,0xf0,0x01,0xfc,0x00,0xfe,0x01,0x0f,0x00,0x0f,0x00,0x00,0x1e,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf5,0x00,0xa2,0x00,0x55,0x00,0xa2,0x00,0x54,0x00,0x02,0x00,0xa4,0x00,0x00,0x00,0x00,0xc0,0x1f,0xe0,0x8e,0xff,0x57,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x07,0x00,0x00,0x07,0x06,0x01,0x01,0x00,0xfc,0x00,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0xbf,0x00,0x3f,0x00,0x15,0x00,0xbf,0x00,0x2a,0x00,0x3f,0x00,0x15,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x03,0xfc,0x1c,0xe0,0x02,0x00,0xa4,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x7f,0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0xff,0x00,0xdf,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x8f,0x00,0x03,0x00,0xab,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xfb,0x00,0xfb,0x00,0xfb,0x00,0xfb,0x00,0x53,0x00,0xfb,0x00,0xab,0x00,0x53,0x00,0x03,0x1c,0x00,0x0f,0x00,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0xf0,0x00,0xe8,0x00,0xe4,0x00,0xe2,0x00,0xf5,0x00,0xfa,0x00,0xf5,0x00,0xf8,0x00,0xfe,0x00,0xf0,0x0e,0x01,0xfe,0x00,0xfc,0xff,0x00,0xaa,0x00,0xff,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0xff,0x00,0xaa,0x00,0x55,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0xaa,0x00,0x55,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x07,0x01,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x3f,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0x00,0xfc,0x00,0xfe,0x00,0xff,0x00,0xff,0x00,0xa0,0x5f,0x0c,0xf3,0xf3,0x00,0xd5,0xfc,0x00,0xfc,0x02,0xfc,0x01,0xfe,0x00,0xff,0x61,0xfe,0x30,0xff,0x08,0xc7,0x03,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x3f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x7f,0x00,0xbf,0x00,0x6a,0x00,0xbf,0x00,0x80,0x40,0x80,0x40,0x80,0x40,0x00,0x80,0x00,0x80,0x00,0x00,0x17,0x08,0x2a,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x00,0x79,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x07,0xf8,0x00,0xff,0xf0,0x0f,0x01,0x00,0x06,0x01,0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x02,0x00,0xf1,0x00,0xf8,0x00,0xea,0x10,0x00,0xf0,0x15,0xe0,0xe0,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0xf9,0x00,0x00,0x00,0xff,0x00,0x80,0xff,0xff,0xff,0xad,0xff,0xff,0xff,0x7f,0x80,0x00,0xff,0xdf,0x00,0x3f,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x7f,0x80,0x2b,0x1c,0xf0,0x3f,0x61,0xff,0xdb,0xff,0xaf,0xff,0xff,0xff,0x00,0xff,0xa8,0x57,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfc,0x00,0xfd,0x00,0xfc,0x00,0xfd,0x00,0xfc,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x3f,0x00,0xbf,0x00,0xbf,0x00,0xbf,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xe0,0x00,0x05,0x00,0x0a,0x00,0x00,0x00,0x85,0x00,0xe0,0x00,0xe0,0x00,0xe0,0x00,0x40,0x80,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x3b,0x00,0x3b,0x00,0x7b,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x00,0xff,0x00,0x00,0xff,0xfe,0xff,0xd7,0xff,0xff,0xff,0x80,0x7f,0xfc,0x03,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0xf2,0x00,0x52,0x00,0xff,0x00,0xff,0x00,0xfe,0x00,0xe1,0x00,0x1f,0x00,0xff,0x00,0xff,0x00,0x80,0x7f,0xf2,0x00,0xa0,0x00,0xf2,0x00,0x52,0x00,0xa0,0x00,0x52,0x00,0xa0,0x00,0x00,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe1,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0xe3,0x00,0x31,0xc1,0x30,0xc3,0x00,0xf7,0x01,0xfe,0x82,0x7c,0x80,0x7c,0x14,0x78,0x28,0x70,0x40,0x87,0x86,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xff,0xff,0xff,0xad,0xff,0xff,0xff,0x7f,0x80,0x00,0xff,0xc0,0x00,0xe0,0x00,0x58,0x00,0x48,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x8e,0x7f,0x16,0xfe,0x2c,0xfc,0x18,0xfc,0x30,0xf8,0x70,0xf8,0xb0,0xf8,0x08,0xfc,0x03,0x00,0x02,0x00,0x01,0x00,0x02,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x75,0x08,0xf2,0x08,0xa5,0x50,0xe2,0x10,0x54,0xa0,0x42,0x80,0xa4,0x80,0x80,0x80,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0xf8,0x04,0xe0,0x1c,0x00,0xf8,0xe0,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x5f,0x00,0x7f,0x00,0x7f,0x00,0x10,0x00,0x90,0x00,0xd0,0x00,0xd8,0x00,0xc8,0x00,0xd8,0x00,0xc8,0x00,0xd8,0x00,0x20,0x1f,0xe0,0x3f,0x60,0xff,0xd3,0xff,0xbf,0xff,0xff,0xff,0x00,0xff,0xa8,0x57,0xbf,0x40,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x78,0xf8,0xc0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xe2,0x00,0xff,0x00,0x00,0xff,0x00,0xff,0x00,0xff,0xaa,0x55,0x00,0xff,0x55,0xaa,0xaa,0x55,0x15,0x00,0xc0,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xf0,0x0f,0x00,0xff,0x00,0xff,0x00,0xe0,0x4f,0xfc,0xa6,0xff,0x5f,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x00,0xff,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x55,0x00,0xff,0x00,0xaa,0x00,0xff,0x00,0xf7,0x00,0xff,0x00,0xf7,0x00,0xf7,0x00,0xf7,0x00,0xa7,0x00,0x87,0x00,0x76,0x08};
const unsigned char background_index_array [] = {0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xb5,0x62,0x75,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xa0,0x45,0xd7,0x28,0x9b,0x2b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x86,0x4d,0x5f,0xc9,0x03,0xde,0x95,0x6a,0x60,0x95,0xc2,0x03,0x03,0xcd,0x03,0x03,0x76,0x2e,0x2e,0xaf,0x00,0x17,0x17,0x6e,0x7d,0x1e,0x95,0xdf,0x60,0x95,0xc2,0x03,0x03,0xa9,0x5f,0x5f,0x21,0x95,0x95,0xe4,0xb7,0x95,0x95,0xc6,0x82,0x95,0x95,0x4f,0x60,0x95,0xc2,0x03,0x03,0x66,0x95,0x95,0x38,0x95,0x95,0x11,0x38,0x95,0x95,0xc6,0xcb,0x95,0x95,0x29,0x8c,0x95,0xc2,0x61,0xaa,0x66,0x95,0x95,0x38,0x95,0x95,0x97,0x38,0x95,0x95,0xc6,0x22,0x95,0x95,0x53,0xad,0x95,0x02,0xb7,0xab,0x66,0x95,0x95,0x38,0x95,0x95,0x40,0x46,0x95,0x95,0xd3,0x34,0x49,0x49,0xd0,0xac,0x95,0x12,0xbc,0x1a,0x66,0x95,0x95,0x38,0x95,0x95,0x14,0x04,0x95,0x95,0x99,0x8b,0xb1,0xb1,0xd2,0x90,0x15,0x5b,0x44,0x78,0x66,0x95,0x95,0x38,0x95,0x95,0xc7,0x06,0x95,0x95,0x93,0x10,0x8e,0x8e,0x79,0xd9,0x89,0xa3,0x03,0x03,0x65,0xe8,0xe8,0xc8,0x95,0x95,0x0a,0x41,0x4a,0x4a,0x0f,0x03,0x03,0x03,0x03,0xb8,0xb6,0x81,0x03,0x03,0x8a,0x3b,0x3b,0xa7,0x63,0x63,0x36,0x3d,0xb2,0xb2,0x52,0x03,0x03,0x03,0x03,0xc0,0x84,0x50,0x32,0x03,0x03,0x03,0x03,0x0d,0xb3,0xb3,0x9f,0x24,0x01,0x01,0x31,0x03,0x03,0x03,0x03,0x03,0x26,0xcc,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x96,0x3c,0x91,0x4e,0xa4,0xc3,0x85,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5a,0x6d,0x94,0x94,0x94,0x94,0x2f,0xbd,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0xe5,0x5e,0x4b,0xe5,0xe5,0xe5,0x77,0x19,0xdc,0xdc,0xdc,0xdc,0x2d,0x1c,0xe1,0xe5,0xe5,0xe5,0xe5,0x58,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xb5,0x62,0x75,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xa0,0x45,0xd7,0x28,0x9b,0x2b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x86,0x4d,0x5f,0xc9,0x03,0xde,0x95,0x6a,0x60,0x95,0xc2,0x03,0x03,0xcd,0x03,0x03,0x76,0x2e,0x2e,0xaf,0x00,0x17,0x17,0x6e,0x7d,0x1e,0x95,0xdf,0x60,0x95,0xc2,0x03,0x03,0xa9,0x5f,0x5f,0x21,0x95,0x95,0xe4,0xb7,0x95,0x95,0xc6,0x82,0x95,0x95,0x4f,0x60,0x95,0xc2,0x03,0x03,0x66,0x95,0x95,0x38,0x95,0x95,0x11,0x38,0x95,0x95,0xc6,0xcb,0x95,0x95,0x29,0x8c,0x95,0xc2,0x61,0xaa,0x66,0x95,0x95,0x38,0x95,0x95,0x97,0x38,0x95,0x95,0xc6,0x22,0x95,0x95,0x53,0xad,0x95,0x02,0xb7,0xab,0x66,0x95,0x95,0x38,0x95,0x95,0x40,0x46,0x95,0x95,0xd3,0x34,0x49,0x49,0xd0,0xac,0x95,0x12,0xbc,0x1a,0x66,0x95,0x95,0x38,0x95,0x95,0x14,0x04,0x95,0x95,0x99,0x8b,0xb1,0xb1,0xd2,0x90,0x15,0xe9,0x44,0x78,0x66,0x95,0x95,0x38,0x95,0x95,0xc7,0x06,0x95,0x95,0x93,0x10,0x8e,0x8e,0x79,0xd9,0x51,0xda,0x03,0x03,0x65,0xe8,0xe8,0xc8,0x95,0x95,0x0a,0x41,0x4a,0x4a,0x0f,0x03,0x03,0x03,0x27,0x56,0x70,0x5d,0x08,0x2a,0x8a,0x3b,0x3b,0xa7,0x63,0x63,0x36,0x3d,0xb2,0xb2,0x52,0x03,0x03,0x03,0xa2,0xa6,0xdb,0x71,0x03,0x03,0x03,0x03,0x03,0x0d,0xb3,0xb3,0x9f,0x24,0x01,0x01,0x31,0x03,0x03,0x03,0x03,0x03,0x7a,0x0b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x96,0x3c,0xcf,0x48,0xe7,0xd6,0x85,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5a,0x6d,0x94,0x94,0x94,0x94,0x2f,0xbd,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0xe5,0x5e,0x4b,0xe5,0xe5,0xe5,0x77,0x19,0xdc,0xdc,0xdc,0xdc,0x2d,0x1c,0xe1,0xe5,0xe5,0xe5,0xe5,0x58,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xb5,0x62,0x75,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xa0,0x45,0xd7,0x28,0x9b,0x2b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x86,0x4d,0x5f,0xc9,0x03,0xde,0x95,0x6a,0x60,0x95,0xc2,0x03,0x03,0xcd,0x03,0x03,0x76,0x2e,0x2e,0xaf,0x00,0x17,0x17,0x6e,0x7d,0x1e,0x95,0xdf,0x60,0x95,0xc2,0x03,0x03,0xa9,0x5f,0x5f,0x21,0x95,0x95,0xe4,0xb7,0x95,0x95,0xc6,0x82,0x95,0x95,0x4f,0x60,0x95,0xc2,0x03,0x03,0x66,0x95,0x95,0x38,0x95,0x95,0x11,0x38,0x95,0x95,0xc6,0xcb,0x95,0x95,0x29,0x8c,0x95,0xc2,0x61,0xaa,0x66,0x95,0x95,0x38,0x95,0x95,0x97,0x38,0x95,0x95,0xc6,0x22,0x95,0x95,0x53,0xad,0x95,0x02,0xb7,0xab,0x66,0x95,0x95,0x38,0x95,0x95,0x40,0x46,0x95,0x95,0xd3,0x34,0x49,0x49,0xd0,0xac,0x95,0x12,0xbc,0x1a,0x66,0x95,0x95,0x38,0x95,0x95,0x14,0x04,0x95,0x95,0x99,0x8b,0xb1,0xb1,0xd2,0x90,0x57,0x59,0x44,0x78,0x66,0x95,0x95,0x38,0x95,0x95,0xc7,0x06,0x95,0x95,0x93,0x10,0x8e,0x8e,0x79,0xbb,0x3f,0xb9,0xdd,0xbe,0x65,0xe8,0xe8,0xc8,0x95,0x95,0x0a,0x41,0x4a,0x4a,0x0f,0x03,0x03,0x68,0x92,0x80,0x54,0x7c,0x3a,0x23,0xb0,0x3b,0x3b,0xa7,0x63,0x63,0x36,0x3d,0xb2,0xb2,0x52,0x03,0x03,0xae,0x7e,0x9c,0xd5,0xd4,0xe2,0x1f,0x9d,0x03,0x03,0x0d,0xb3,0xb3,0x9f,0x24,0x01,0x01,0x31,0x03,0x03,0x03,0x03,0x03,0x67,0x25,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x96,0x3c,0x0e,0xc5,0x09,0xd6,0x85,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5a,0x6d,0x94,0x94,0x94,0x94,0x2f,0xbd,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0xe5,0x5e,0x4b,0xe5,0xe5,0xe5,0x77,0x19,0xdc,0xdc,0xdc,0xdc,0x2d,0x1c,0xe1,0xe5,0xe5,0xe5,0xe5,0x58,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xb5,0x62,0x75,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xa0,0x45,0xd7,0x28,0x9b,0x2b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x86,0x4d,0x5f,0xc9,0x03,0xde,0x95,0x6a,0x60,0x95,0xc2,0x03,0x03,0xcd,0x03,0x03,0x76,0x2e,0x2e,0xaf,0x00,0x17,0x17,0x6e,0x7d,0x1e,0x95,0xdf,0x60,0x95,0xc2,0x03,0x03,0xa9,0x5f,0x5f,0x21,0x95,0x95,0xe4,0xb7,0x95,0x95,0xc6,0x82,0x95,0x95,0x4f,0x60,0x95,0xc2,0x03,0x03,0x66,0x95,0x95,0x38,0x95,0x95,0x11,0x38,0x95,0x95,0xc6,0xcb,0x95,0x95,0x29,0x8c,0x95,0xc2,0x61,0xaa,0x66,0x95,0x95,0x38,0x95,0x95,0x97,0x38,0x95,0x95,0xc6,0x22,0x95,0x95,0x53,0xad,0x95,0x02,0xb7,0xab,0x66,0x95,0x95,0x38,0x95,0x95,0x40,0x46,0x95,0x95,0xd3,0x34,0x49,0x49,0xd0,0xac,0x95,0x9e,0x8d,0x1a,0x66,0x95,0x95,0x38,0x95,0x95,0x14,0x04,0x95,0x95,0x99,0x8b,0xb1,0xb1,0xd2,0x55,0xd1,0xc4,0x74,0xca,0x66,0x95,0x95,0x38,0x95,0x95,0xc7,0x06,0x95,0x95,0x93,0x10,0x8e,0x8e,0x79,0xb4,0x72,0xa8,0x1b,0x6b,0x65,0xe8,0xe8,0xc8,0x95,0x95,0x0a,0x41,0x4a,0x4a,0x0f,0x03,0x87,0x83,0x18,0xa1,0xba,0x9a,0xa5,0xbf,0xe6,0xc1,0x3b,0xa7,0x63,0x63,0x36,0x3d,0xb2,0xb2,0x52,0x03,0x39,0x7f,0x5c,0x33,0x88,0x64,0x30,0x4c,0x6c,0x03,0x03,0x0d,0xb3,0xb3,0x9f,0x24,0x01,0x01,0x31,0x03,0x03,0x03,0x03,0x03,0x69,0xd8,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x96,0x3c,0x0e,0xe0,0x20,0xd6,0x85,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5a,0x6d,0x94,0x94,0x94,0x94,0x2f,0xbd,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0xe5,0x5e,0x4b,0xe5,0xe5,0xe5,0x77,0x19,0xdc,0xdc,0xdc,0xdc,0x2d,0x1c,0xe1,0xe5,0xe5,0xe5,0xe5,0x58,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xb5,0x62,0x75,0x73,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xa0,0x45,0xd7,0x28,0x9b,0x2b,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x86,0x4d,0x5f,0xc9,0x03,0xde,0x95,0x6a,0x60,0x95,0xc2,0x03,0x03,0xcd,0x03,0x03,0x76,0x2e,0x2e,0xaf,0x00,0x17,0x17,0x6e,0x7d,0x1e,0x95,0xdf,0x60,0x95,0xc2,0x03,0x03,0xa9,0x5f,0x5f,0x21,0x95,0x95,0xe4,0xb7,0x95,0x95,0xc6,0x82,0x95,0x95,0x4f,0x60,0x95,0xc2,0x03,0x03,0x66,0x95,0x95,0x38,0x95,0x95,0x11,0x38,0x95,0x95,0xc6,0xcb,0x95,0x95,0x29,0x8c,0x95,0xc2,0x61,0xaa,0x66,0x95,0x95,0x38,0x95,0x95,0x97,0x38,0x95,0x95,0xc6,0x22,0x95,0x95,0x53,0xad,0x95,0x02,0xb7,0xab,0x66,0x95,0x95,0x38,0x95,0x95,0x40,0x46,0x95,0x95,0xd3,0x34,0x49,0x49,0xd0,0xac,0x95,0x12,0xbc,0x1a,0x66,0x95,0x95,0x38,0x95,0x95,0x14,0x04,0x95,0x95,0x99,0x8b,0xb1,0xb1,0xd2,0x90,0x15,0x5b,0x44,0x78,0x66,0x95,0x95,0x38,0x95,0x95,0xc7,0x06,0x95,0x95,0x93,0x10,0x8e,0x8e,0x79,0xd9,0x89,0x43,0x07,0x03,0x65,0xe8,0xe8,0xc8,0x95,0x95,0x0a,0x41,0x4a,0x4a,0x0f,0x03,0x03,0x03,0x6f,0x47,0x42,0x13,0x16,0xce,0x8a,0x3b,0x3b,0xa7,0x63,0x63,0x36,0x3d,0xb2,0xb2,0x52,0x03,0x03,0x03,0x1d,0x3e,0x37,0x7b,0x35,0xe3,0x03,0x03,0x03,0x0d,0xb3,0xb3,0x9f,0x24,0x01,0x01,0x31,0x03,0x03,0x03,0x03,0x03,0x0c,0x8f,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x96,0x3c,0x91,0x2c,0x98,0xc3,0x85,0x05,0x03,0x03,0x03,0x03,0x03,0x03,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5a,0x6d,0x94,0x94,0x94,0x94,0x2f,0xbd,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0xe5,0x5e,0x4b,0xe5,0xe5,0xe5,0x77,0x19,0xdc,0xdc,0xdc,0xdc,0x2d,0x1c,0xe1,0xe5,0xe5,0xe5,0xe5,0x58};


void setup_background()
{
    set_bkg_data(0, BACKGROUND_PATTERN_BLOCK_SIZE, background_pattern_block);
}