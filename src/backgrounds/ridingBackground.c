const int RidingBackground_tile_map_size = 0x03A0;
const int RidingBackground_tile_map_width = 0x20;
const int RidingBackground_tile_map_height = 0x1D;

const int RidingBackground_tile_data_size = 0x05F0;
const int RidingBackground_tile_count = 0x5F;

const unsigned char RidingBackground_map_data[] ={
  0xC6, 0x00, 0x00, 0x01, 0x02, 0x01, 0x03, 0x04, 0x04, 0x00, 0xC3, 0x05, 0x06, 0x03, 0x01, 0x83, 
  0xF7, 0xFF, 0x0B, 0x07, 0x13, 0x00, 0x3F, 0x07, 0x94, 0xC0, 0xFF, 0xC1, 0x08, 0x09, 0x94, 0xA9, 
  0xFF, 0xC1, 0x0A, 0x0B, 0x86, 0xE1, 0xFF, 0xC3, 0x0C, 0x0C, 0x09, 0x0D, 0x83, 0xF4, 0xFF, 0x86, 
  0xD8, 0xFF, 0xC0, 0x0E, 0x84, 0xE8, 0xFF, 0xC7, 0x0E, 0x0F, 0x0C, 0x0C, 0x0A, 0x0B, 0x08, 0x09, 
  0x83, 0xE1, 0xFF, 0x03, 0x0C, 0xC7, 0x10, 0x09, 0x08, 0x0C, 0x0C, 0x10, 0x0A, 0x0B, 0x83, 0xE8, 
  0xFF, 0xC1, 0x09, 0x11, 0x83, 0xE2, 0xFF, 0x86, 0xE8, 0xFF, 0x18, 0x0C, 0xC7, 0x12, 0x13, 0x12, 
  0x13, 0x12, 0x14, 0x15, 0x13, 0x8F, 0xDF, 0xFF, 0xC7, 0x16, 0x17, 0x18, 0x19, 0x16, 0x19, 0x16, 
  0x19, 0x84, 0xF4, 0xFE, 0xC3, 0x1A, 0x1B, 0x1C, 0x1D, 0x0D, 0x1E, 0xC3, 0x1F, 0x20, 0x21, 0x22, 
  0x89, 0xD9, 0xFE, 0xC2, 0x23, 0x24, 0x25, 0x0F, 0x1E, 0xC2, 0x26, 0x27, 0x28, 0x89, 0xB9, 0xFE, 
  0xC1, 0x29, 0x2A, 0x11, 0x1E, 0xC1, 0x2B, 0x2C, 0x88, 0x99, 0xFE, 0xC0, 0x2D, 0x90, 0xC2, 0xFF, 
  0x84, 0xBE, 0xFF, 0xC0, 0x2E, 0x86, 0x78, 0xFE, 0x8F, 0x84, 0xFF, 0x89, 0x7C, 0xFF, 0x9A, 0xC2, 
  0xFF, 0x88, 0xBE, 0xFF, 0x97, 0xC2, 0xFF, 0x86, 0xBE, 0xFF, 0x99, 0xC2, 0xFF, 0x85, 0x7C, 0xFF, 
  0x9A, 0xC2, 0xFF, 0x84, 0xF8, 0xFE, 0xC2, 0x0C, 0x2F, 0x30, 0x99, 0xA0, 0xFE, 0xC5, 0x31, 0x32, 
  0x0C, 0x12, 0x33, 0x34, 0x83, 0x9E, 0xFE, 0xC1, 0x35, 0x36, 0x8D, 0x7E, 0xFE, 0xC1, 0x37, 0x38, 
  0x83, 0xA2, 0xFE, 0xC5, 0x39, 0x3A, 0x19, 0x3B, 0x3C, 0x34, 0x83, 0x91, 0xFD, 0xC1, 0x3D, 0x3E, 
  0x8D, 0xA0, 0xFE, 0xC1, 0x3F, 0x40, 0x83, 0x7B, 0xFD, 0xC7, 0x39, 0x41, 0x42, 0x43, 0x44, 0x34, 
  0x45, 0x46, 0x92, 0xFD, 0xFE, 0xCC, 0x1F, 0x20, 0x07, 0x47, 0x48, 0x39, 0x49, 0x4A, 0x4B, 0x4C, 
  0x4D, 0x4E, 0x28, 0x93, 0xBF, 0xFE, 0xCB, 0x26, 0x2E, 0x23, 0x4F, 0x50, 0x51, 0x52, 0x07, 0x53, 
  0x54, 0x55, 0x56, 0x94, 0xBF, 0xFE, 0xC8, 0x1F, 0x57, 0x58, 0x59, 0x5A, 0x07, 0x07, 0x53, 0x34, 
  0x97, 0xBF, 0xFE, 0xC7, 0x26, 0x2E, 0x39, 0x5A, 0x07, 0x07, 0x5B, 0x5C, 0x98, 0xBF, 0xFE, 0xC2, 
  0x1F, 0x5D, 0x5E, 0x9B, 0x81, 0xFE, 0x84, 0x3D, 0xFE, 0x9B, 0x81, 0xFE, 0x83, 0xB9, 0xFD, 0x9C, 
  0x81, 0xFE, 0xC2, 0x1E, 0x1E, 0x26, 0x00
};

const unsigned char RidingBackground_tile_data[] ={
  0x11, 0xFF, 0xC5, 0x81, 0x81, 0x9F, 0x9F, 0x83, 0x83, 0x03, 0x9F, 0xC1, 0x81, 0x81, 0x83, 0xE2, 
  0xFF, 0xCB, 0xB9, 0xB9, 0x99, 0x99, 0x89, 0x89, 0xA1, 0xA1, 0xB1, 0xB1, 0xB9, 0xB9, 0x85, 0xF0, 
  0xFF, 0xC5, 0x91, 0x91, 0x81, 0x81, 0xA9, 0xA9, 0x03, 0xB9, 0x83, 0xC2, 0xFF, 0x03, 0x99, 0xC1, 
  0xC3, 0xC3, 0x05, 0xE7, 0x85, 0xC0, 0xFF, 0x09, 0xE7, 0x83, 0xA2, 0xFF, 0x87, 0xE4, 0xFF, 0xC5, 
  0xE7, 0xE7, 0xC3, 0xC3, 0xFF, 0xFF, 0x10, 0x00, 0xE4, 0x01, 0x00, 0x03, 0x00, 0x07, 0x00, 0x0F, 
  0x00, 0x1F, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 
  0x00, 0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xC0, 0x00, 0xF0, 0x00, 0xFC, 0x44, 0x00, 
  0xFF, 0x88, 0xC0, 0xFF, 0x8F, 0xE8, 0xFF, 0x8D, 0xE0, 0xFF, 0xC4, 0x03, 0x00, 0x0F, 0x00, 0x3F, 
  0x8C, 0xD0, 0xFF, 0x87, 0xEE, 0xFF, 0x89, 0xE6, 0xFF, 0x85, 0xAC, 0xFF, 0xC4, 0x81, 0x00, 0xC3, 
  0x00, 0xE7, 0x92, 0xA0, 0xFF, 0xC4, 0x18, 0x00, 0x3C, 0x00, 0x7E, 0x87, 0x88, 0xFF, 0xC9, 0x10, 
  0xEF, 0x38, 0xC7, 0x7C, 0x83, 0x01, 0xEE, 0x00, 0xEF, 0x85, 0xF6, 0xFF, 0xFF, 0x38, 0xC7, 0xFE, 
  0x01, 0x7C, 0x83, 0xFF, 0x00, 0x00, 0xEF, 0x11, 0xEF, 0x3A, 0xC7, 0x7E, 0x85, 0x3E, 0xC5, 0xFE, 
  0x05, 0x7E, 0x85, 0xFE, 0x65, 0xB6, 0xDD, 0x80, 0xFF, 0xC0, 0x7F, 0xA0, 0x7F, 0xB0, 0x6F, 0xB8, 
  0x67, 0xBC, 0x63, 0xA1, 0x6E, 0xA0, 0x6F, 0x08, 0xF7, 0x1C, 0xE3, 0x3E, 0xC1, 0x1C, 0xE3, 0x7F, 
  0x80, 0x3E, 0xC1, 0xFF, 0x00, 0x00, 0xF7, 0x01, 0xFF, 0x03, 0xFE, 0x05, 0xFE, 0xD9, 0x0D, 0xF6, 
  0x1D, 0xE6, 0x3D, 0xC6, 0x85, 0x76, 0x05, 0xF6, 0x88, 0xF7, 0x5C, 0xE3, 0x7E, 0xA1, 0x7C, 0xA3, 
  0x7F, 0xA0, 0x7E, 0xA1, 0x7F, 0xA6, 0x6D, 0xBB, 0x85, 0x16, 0xFF, 0x85, 0xCA, 0xFF, 0xD3, 0x80, 
  0x77, 0x00, 0xF7, 0xB6, 0xD5, 0xB6, 0xD5, 0xAA, 0xDD, 0xAA, 0xD5, 0xAA, 0xD5, 0x7A, 0x7D, 0x06, 
  0x05, 0x06, 0x05, 0x42, 0xA0, 0x60, 0xC1, 0xA6, 0x66, 0x42, 0xAB, 0x6D, 0xC1, 0xBB, 0x55, 0x8F, 
  0xB4, 0xFE, 0xCD, 0x01, 0x06, 0x03, 0x0C, 0x07, 0x18, 0x0F, 0x30, 0x1F, 0x60, 0x3F, 0xC0, 0x7F, 
  0x80, 0x91, 0xE1, 0xFE, 0xCD, 0x80, 0x60, 0xC0, 0x30, 0xE0, 0x18, 0xF0, 0x0C, 0xF8, 0x06, 0xFC, 
  0x03, 0xFE, 0x01, 0x8E, 0x71, 0xFE, 0xC2, 0x80, 0x00, 0xC0, 0x42, 0x05, 0x06, 0xC1, 0x65, 0x66, 
  0x42, 0xD5, 0xB6, 0xC1, 0xDD, 0xAA, 0x83, 0x99, 0xFF, 0xC7, 0x55, 0xBB, 0x55, 0xAB, 0x55, 0xAB, 
  0x5E, 0xBE, 0x83, 0x85, 0xFF, 0x47, 0x06, 0x05, 0xC5, 0xAB, 0x55, 0xAB, 0x55, 0xBE, 0x5E, 0x85, 
  0x6A, 0xFF, 0xE9, 0xA1, 0x61, 0xA3, 0x63, 0x07, 0x06, 0x0F, 0x0C, 0x1F, 0x18, 0x3F, 0x30, 0x7F, 
  0x60, 0xFF, 0xC0, 0xFF, 0x80, 0xFF, 0x00, 0xE0, 0x60, 0xF0, 0x30, 0xF8, 0x18, 0xFC, 0x0C, 0xFE, 
  0x06, 0xFF, 0x03, 0xFF, 0x01, 0xFF, 0x00, 0xD5, 0xAA, 0xD5, 0xAA, 0x7D, 0x7A, 0x85, 0x9A, 0xFF, 
  0xC3, 0x85, 0x86, 0xC5, 0xC6, 0x47, 0x60, 0xA0, 0x85, 0xA0, 0xFF, 0xC1, 0x03, 0x03, 0x87, 0xE4, 
  0xFD, 0xC7, 0xA1, 0x66, 0xA3, 0x6C, 0xA7, 0x78, 0xCF, 0xF0, 0x87, 0x30, 0xFF, 0xC7, 0x85, 0x66, 
  0xC5, 0x36, 0xE5, 0x1E, 0xF3, 0x0F, 0x87, 0x40, 0xFF, 0x85, 0xC0, 0xFF, 0xC1, 0xC0, 0xC0, 0x87, 
  0x40, 0xFF, 0x8C, 0xA5, 0xFD, 0xC0, 0x01, 0x86, 0xB8, 0xFF, 0x87, 0x21, 0xFF, 0xC2, 0x80, 0xC0, 
  0xC0, 0x87, 0xB6, 0xFD, 0xC7, 0x03, 0xFF, 0x05, 0xFE, 0x0D, 0xFA, 0x15, 0xFA, 0x85, 0xA6, 0xFD, 
  0xC9, 0xE0, 0xFF, 0x58, 0xBF, 0x54, 0xAF, 0x56, 0xAB, 0x55, 0xAB, 0x85, 0x96, 0xFD, 0xC9, 0x07, 
  0xFF, 0x1A, 0xFD, 0x2A, 0xF5, 0x6A, 0xD5, 0xAA, 0xD5, 0x87, 0x86, 0xFD, 0xD7, 0xC0, 0xFF, 0xA0, 
  0x7F, 0xB0, 0x5F, 0xA8, 0x5F, 0x15, 0xFA, 0x35, 0xDA, 0x75, 0x9A, 0x35, 0xDA, 0xF5, 0x1A, 0x75, 
  0x9A, 0xF5, 0x1A, 0x15, 0xFA, 0x47, 0x55, 0xAB, 0xCF, 0x10, 0xEF, 0x39, 0xC7, 0x7F, 0x82, 0x3B, 
  0xCE, 0xFF, 0x16, 0x7F, 0x92, 0xFF, 0x10, 0x0F, 0xEC, 0x83, 0x46, 0xFD, 0x42, 0x80, 0xFF, 0xC5, 
  0xA0, 0xFF, 0xF0, 0xDF, 0xF0, 0x9F, 0x83, 0x36, 0xFD, 0x42, 0x01, 0xFF, 0xD5, 0x05, 0xFF, 0x0F, 
  0xFB, 0x0F, 0xF9, 0x08, 0xF7, 0x9C, 0xE3, 0xFE, 0x41, 0xDC, 0x73, 0xFF, 0x68, 0xFE, 0x49, 0xFF, 
  0x08, 0xF0, 0x37, 0x47, 0xAA, 0xD5, 0xCF, 0xA8, 0x5F, 0xAC, 0x5B, 0xAE, 0x59, 0xAC, 0x5B, 0xAF, 
  0x58, 0xAE, 0x59, 0xAF, 0x58, 0xA8, 0x5F, 0x83, 0xC0, 0xFC, 0xC3, 0x1E, 0x1E, 0x35, 0x2B, 0x43, 
  0x55, 0x6A, 0x43, 0x15, 0x1A, 0x43, 0x95, 0x9A, 0xC5, 0x07, 0x04, 0x03, 0x02, 0x03, 0x02, 0x85, 
  0xC0, 0xFE, 0x83, 0x00, 0xFF, 0xC7, 0xF7, 0x16, 0xEF, 0x6C, 0xDF, 0x58, 0xBF, 0xB0, 0x87, 0x70, 
  0xFE, 0xC7, 0xEF, 0x68, 0xF7, 0x36, 0xFB, 0x1A, 0xFD, 0x0D, 0x87, 0x70, 0xFE, 0xC5, 0xE0, 0x20, 
  0xC0, 0x40, 0xC0, 0x40, 0x85, 0xC0, 0xFE, 0x83, 0xE0, 0xFE, 0x43, 0xA8, 0x58, 0x43, 0xA9, 0x59, 
  0x83, 0x50, 0xFC, 0xC3, 0x78, 0x78, 0xAC, 0xD4, 0x43, 0xAA, 0x56, 0x46, 0x55, 0x6A, 0xC5, 0x35, 
  0x2A, 0x95, 0x9A, 0xF5, 0xEA, 0x45, 0x55, 0xAA, 0x87, 0x20, 0xFC, 0xC3, 0x07, 0x07, 0x0D, 0x0A, 
  0x83, 0x64, 0xFF, 0x89, 0x84, 0xFE, 0xC1, 0x40, 0xC0, 0x83, 0x45, 0xFD, 0x89, 0x64, 0xFE, 0xC1, 
  0x02, 0x03, 0x83, 0x30, 0xFD, 0x87, 0xF0, 0xFB, 0xC3, 0xE0, 0xE0, 0xB0, 0x50, 0x85, 0x88, 0xFF, 
  0xC1, 0xAF, 0x57, 0x45, 0xAA, 0x55, 0x46, 0xAA, 0x56, 0xC3, 0xAC, 0x54, 0x1F, 0x1F, 0x8D, 0xBE, 
  0xFB, 0xC3, 0xD5, 0xEA, 0x35, 0x2A, 0x45, 0x15, 0x1A, 0x88, 0x70, 0xFE, 0x86, 0x6C, 0xFF, 0x87, 
  0xE0, 0xFE, 0x87, 0x5A, 0xFF, 0x87, 0x20, 0xFF, 0x88, 0x9A, 0xFF, 0x87, 0x90, 0xFE, 0x86, 0x3B, 
  0xFF, 0xC3, 0xAB, 0x57, 0xAC, 0x54, 0x45, 0xA8, 0x58, 0xC1, 0xF8, 0xF8, 0x8D, 0x4E, 0xFB, 0x47, 
  0x15, 0x1A, 0x8A, 0x04, 0xFF, 0x8A, 0x88, 0xFF, 0xC3, 0x7F, 0xFF, 0x80, 0x80, 0x85, 0x16, 0xFB, 
  0xC3, 0x60, 0xA0, 0x40, 0xC0, 0x87, 0xF4, 0xFF, 0x83, 0x14, 0xFB, 0xC5, 0x06, 0x05, 0x02, 0x03, 
  0x01, 0x01, 0x89, 0x90, 0xFC, 0x85, 0xC5, 0xFE, 0xC1, 0xFE, 0xFF, 0x87, 0xEC, 0xFF, 0x8A, 0xB5, 
  0xFE, 0x85, 0x00, 0xFE, 0x46, 0x58, 0xA8, 0xC0, 0x58, 0x8B, 0x14, 0xFF, 0xC3, 0x0F, 0x0F, 0x00, 
  0x00, 0x8B, 0x80, 0xFD, 0xC3, 0xFE, 0xFF, 0x00, 0x03, 0x8B, 0xC0, 0xFD, 0xC2, 0x7F, 0xFF, 0x00, 
  0x88, 0x30, 0xFE, 0x83, 0x28, 0xFE, 0xC3, 0xF0, 0xF0, 0x00, 0x00, 0x00
};