const int DuelBackground_tile_map_size = 0x0240;
const int DuelBackground_tile_map_width = 0x20;
const int DuelBackground_tile_map_height = 0x12;

const int DuelBackground_tile_data_size = 0x0490;
const int DuelBackground_tile_count = 0x49;

const unsigned char DuelBackground_map_data[] ={
  0xC5, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x0D, 0x00, 0x0B, 0x05, 0xC4, 0x06, 0x07, 0x06, 0x08, 
  0x01, 0x9A, 0xE0, 0xFF, 0xCA, 0x09, 0x0A, 0x0B, 0x05, 0x05, 0x0C, 0x0D, 0x05, 0x0E, 0x0F, 0x10, 
  0x88, 0xF4, 0xFF, 0x8B, 0xEC, 0xFF, 0xCA, 0x11, 0x12, 0x13, 0x05, 0x14, 0x15, 0x16, 0x05, 0x17, 
  0x18, 0x19, 0x88, 0xF4, 0xFF, 0x8B, 0xEC, 0xFF, 0xCA, 0x1A, 0x1B, 0x1C, 0x05, 0x1D, 0x1E, 0x1F, 
  0x05, 0x20, 0x21, 0x22, 0x88, 0xF4, 0xFF, 0x8B, 0xEC, 0xFF, 0x0D, 0x05, 0xC3, 0x23, 0x24, 0x24, 
  0x25, 0x8D, 0xED, 0xFF, 0x44, 0x26, 0x27, 0x83, 0xE1, 0xFF, 0xC3, 0x28, 0x29, 0x29, 0x2A, 0x8D, 
  0xCD, 0xFF, 0x44, 0x2B, 0x2C, 0xC3, 0x05, 0x05, 0x05, 0x2D, 0x02, 0x29, 0x8E, 0xE0, 0xFF, 0x44, 
  0x2E, 0x2F, 0xC3, 0x05, 0x30, 0x31, 0x32, 0x02, 0x33, 0xC1, 0x34, 0x35, 0x8C, 0x8C, 0xFF, 0xCB, 
  0x36, 0x37, 0x36, 0x37, 0x36, 0x38, 0x39, 0x38, 0x39, 0x38, 0x3A, 0x3B, 0x05, 0x3C, 0xC1, 0x3D, 
  0x3A, 0x8B, 0xE0, 0xFE, 0xC4, 0x3E, 0x3F, 0x3E, 0x3F, 0x3E, 0x0E, 0x40, 0x8B, 0xC0, 0xFE, 0xCA, 
  0x41, 0x42, 0x41, 0x42, 0x41, 0x12, 0x43, 0x44, 0x12, 0x45, 0x12, 0x83, 0xFA, 0xFF, 0xC0, 0x46, 
  0x83, 0xF5, 0xFF, 0x8B, 0xA0, 0xFE, 0xC4, 0x47, 0x48, 0x47, 0x48, 0x47, 0x84, 0xE5, 0xFF, 0xC2, 
  0x12, 0x12, 0x46, 0x04, 0x12, 0xC0, 0x45, 0x8C, 0xE0, 0xFF, 0xC0, 0x45, 0x83, 0xEC, 0xFF, 0x84, 
  0xE2, 0xFF, 0x83, 0xDD, 0xFF, 0xC0, 0x45, 0x84, 0xD7, 0xFF, 0x8B, 0x60, 0xFE, 0x84, 0xC9, 0xFF, 
  0xC0, 0x45, 0x83, 0xCA, 0xFF, 0x85, 0xBC, 0xFF, 0x83, 0xBB, 0xFF, 0x8D, 0xE0, 0xFF, 0x85, 0xE9, 
  0xFF, 0x86, 0x9F, 0xFF, 0x84, 0xBB, 0xFF, 0x8C, 0xC0, 0xFF, 0x83, 0x9F, 0xFF, 0x84, 0x87, 0xFF, 
  0x89, 0xD8, 0xFF, 0x8B, 0x00, 0xFE, 0x85, 0x46, 0xFF, 0x86, 0xA4, 0xFF, 0xC0, 0x45, 0x83, 0x59, 
  0xFF, 0xC0, 0x46, 0x8C, 0x40, 0xFF, 0x00
};

const unsigned char DuelBackground_tile_data[] ={
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0x99,0x99,0x99,0x99,0xC3,0xC3,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xFF,0xFF,
  0xFF,0xFF,0xC3,0xC3,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xC3,0xC3,0xFF,0xFF,
  0xFF,0xFF,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB9,0xB1,0xB1,0xC3,0xC3,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xE7,0xE7,0xE7,0xE7,0xFF,0xFF,0xE7,0xE7,0xE7,0xE7,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x81,0x81,0x9F,0x9F,0x83,0x83,0x9F,0x9F,0x9F,0x9F,0x81,0x81,0xFF,0xFF,
  0xFF,0xFF,0xB9,0xB9,0x99,0x99,0x89,0x89,0xA1,0xA1,0xB1,0xB1,0xB9,0xB9,0xFF,0xFF,
  0xFF,0xFF,0xB9,0xB9,0x91,0x91,0x81,0x81,0xA9,0xA9,0xB9,0xB9,0xB9,0xB9,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,
  0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x07,0x04,0x37,0x34,0x7F,0x48,0xFF,0x80,
  0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0x40,0xF0,0x30,0xFC,0x0C,0xFE,0x02,0xFE,0x02,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x02,0x07,0x04,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0x40,0xF0,0x30,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,0x1F,0x11,
  0x00,0x00,0x01,0x01,0x03,0x02,0x07,0x04,0x37,0x34,0x7F,0x48,0xFF,0x80,0xFF,0x00,
  0x00,0x00,0x80,0x80,0xC0,0x40,0xF0,0x30,0xFC,0x0C,0xFE,0x02,0xFE,0x02,0xFE,0x02,
  0x1F,0x11,0x3F,0x20,0x3F,0x20,0x3F,0x20,0x7F,0x40,0xBF,0xC0,0xBF,0xC0,0x41,0x7E,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFE,0x02,0xFF,0x01,0xFE,0x02,0xFF,0x01,0xFE,0x02,0xFF,0x01,0xFF,0x01,0xF9,0x07,
  0x00,0x00,0x00,0x00,0x0E,0x0E,0x1F,0x11,0x3F,0x20,0x3F,0x20,0x3F,0x20,0x7F,0x40,
  0x37,0x34,0x7F,0x48,0xFF,0x80,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xFC,0x0C,0xFE,0x02,0xFE,0x02,0xFE,0x02,0xFF,0x01,0xFE,0x02,0xFF,0x01,0xFE,0x02,
  0x3F,0x20,0x3F,0x20,0x3F,0x20,0x7F,0x40,0xBF,0xC0,0xBF,0xC0,0x41,0x7E,0x40,0x7F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x40,0xBF,
  0xFF,0x01,0xFE,0x02,0xFF,0x01,0xFE,0x02,0xFF,0x01,0xFF,0x01,0xF9,0x07,0x71,0x8F,
  0x40,0x7F,0x3E,0x3F,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0xBF,0x00,0xFF,0xBF,0xFF,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x71,0x8F,0x06,0xFE,0x88,0xF8,0x70,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xBF,0xC0,0xBF,0xC0,0x41,0x7E,0x40,0x7F,0x3E,0x3F,0x01,0x01,0x00,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0x40,0xBF,0x00,0xFF,0xBF,0xFF,0x40,0x40,0x00,0x00,
  0xFF,0x01,0xFF,0x01,0xF9,0x07,0x71,0x8F,0x06,0xFE,0x88,0xF8,0x70,0x70,0x00,0x00,
  0x3E,0x3F,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0xBF,0xFF,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x06,0xFE,0x88,0xF8,0x70,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x3F,0x3F,0x7F,0x60,0xF0,0xCF,0xE0,0x9F,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,
  0x7F,0x7F,0xFF,0x80,0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,
  0x7C,0x7C,0xFE,0x86,0xC3,0x3F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x03,0x06,0x05,0x06,0x05,0x06,0x05,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0x40,0xA0,0x60,0xA0,0x60,0xA0,0x60,
  0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,
  0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,
  0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,
  0x06,0x05,0x66,0x65,0xB6,0xD5,0xB6,0xD5,0xB6,0xD5,0xAA,0xDD,0xAA,0xD5,0xAA,0xD5,
  0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA6,0x66,0xAB,0x6D,
  0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,0xC0,0xBF,
  0x7A,0x7D,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,
  0xAB,0x6D,0xAB,0x6D,0xBB,0x55,0xAB,0x55,0xAB,0x55,0xBE,0x5E,0xA0,0x60,0xA0,0x60,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x03,0x03,
  0x3F,0x3F,0x7F,0x60,0xF0,0xCF,0xE0,0x9F,0xC0,0xBF,0xC0,0xBF,0xC0,0x3F,0xFF,0x00,
  0xC0,0xBF,0xC0,0x3F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0xFF,0x00,
  0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0x80,0x7F,0xFF,0x00,
  0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0x81,0x7F,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,
  0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x86,0x85,0xC6,0x45,0xA3,0x63,0xBF,0x60,
  0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA1,0x61,0xA2,0x63,0xC6,0xC5,0xFE,0x05,
  0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xA0,0x60,0xC0,0xC0,0xFF,0x00,
  0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x06,0x05,0x03,0x03,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,
  0x07,0x06,0x0F,0x0C,0x1E,0x19,0x3C,0x33,0x78,0x67,0xF0,0xCF,0xE0,0x9F,0xFF,0x00,
  0xFF,0x00,0xFF,0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x00,
  0xE0,0x60,0xF0,0x30,0x78,0x98,0x3C,0xCC,0x1E,0xE6,0x0F,0xF3,0x07,0xF9,0xFF,0x00,
  0xA0,0x7F,0xBF,0x60,0xA0,0x7F,0xBF,0x60,0xA0,0x7F,0xBF,0x60,0xBF,0x60,0xBF,0x66,
  0x06,0xFD,0xFE,0x05,0x66,0xFD,0xBE,0xD5,0xB6,0xDD,0xBE,0xD5,0xAA,0xDD,0xAA,0xD5,
  0x00,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0xBB,0x6D,0xBB,0x6D,0xBB,0x6D,0xBB,0x55,0xAB,0x55,0xAB,0x55,0xBF,0x5E,0xBF,0x60,
  0xAA,0xD5,0xFA,0x7D,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xD5,0x2A,0xEA,0x15,0xC0,0x3F,0x80,0x7F,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0x55,0xAA,0xAB,0x54,0x01,0xFE,0x00,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x0E,0xF1,0x11,0xE1,0x21,0xE1,0x21,0xFF,0x1E,
  0xFF,0x00,0xFF,0x38,0xC7,0x46,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0x81,0xFF,0x7E,
  0xBF,0x60,0xBF,0x60,0xBF,0x60,0xBF,0x60,0xBF,0x60,0xBF,0x60,0xBF,0x60,0xFF,0xC0,
  0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFE,0x05,0xFF,0x03
};
