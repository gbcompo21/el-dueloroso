const int gbCompo2021_tile_map_size = 0x0168;
const int gbCompo2021_tile_map_width = 0x14;
const int gbCompo2021_tile_map_height = 0x12;

const int gbCompo2021_tile_data_size = 0x09F0;
const int gbCompo2021_tile_count = 0x9F;

const unsigned char gbCompo2021_map_data[] ={
    0x13, 0x00, 0xD2, 0x01, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 
    0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x02, 0x01, 0xE3, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
    0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x01, 0x01, 0x01, 0x24, 0x25, 0x26, 
    0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x03, 0x01, 0xCF, 
    0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x40, 0x41, 0x42, 0x43, 
    0x83, 0xEC, 0xFF, 0xCE, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
    0x50, 0x51, 0x52, 0x04, 0x01, 0xCE, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 
    0x5D, 0x5E, 0x5F, 0x60, 0x61, 0x84, 0xEC, 0xFF, 0xCF, 0x24, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 
    0x68, 0x69, 0x63, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x84, 0xB0, 0xFF, 0xC7, 0x70, 0x71, 0x72, 
    0x73, 0x74, 0x71, 0x75, 0x76, 0x02, 0x71, 0xC3, 0x77, 0x71, 0x75, 0x78, 0x83, 0x9C, 0xFF, 0xC3, 
    0x79, 0x01, 0x79, 0x7A, 0x07, 0x01, 0xC3, 0x7B, 0x79, 0x01, 0x79, 0x84, 0xAF, 0xFF, 0xC4, 0x79, 
    0x01, 0x7C, 0x7D, 0x7E, 0x83, 0x7E, 0xFF, 0xC2, 0x7F, 0x80, 0x81, 0x88, 0xED, 0xFF, 0xCA, 0x79, 
    0x82, 0x83, 0x84, 0x85, 0x01, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x89, 0xD8, 0xFF, 0xC9, 0x8B, 0x8C, 
    0x8D, 0x8E, 0x01, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x89, 0xD8, 0xFF, 0xC9, 0x7C, 0x94, 0x95, 0x01, 
    0x01, 0x01, 0x96, 0x01, 0x01, 0x93, 0x8A, 0xB0, 0xFF, 0xC7, 0x01, 0x01, 0x97, 0x98, 0x99, 0x01, 
    0x01, 0x01, 0x8A, 0xD8, 0xFF, 0xC0, 0x9A, 0x87, 0x88, 0xFF, 0xC0, 0x9B, 0x87, 0x88, 0xFF, 0xC2, 
    0x01, 0x01, 0x9C, 0x87, 0x74, 0xFF, 0xC0, 0x9D, 0x84, 0x26, 0xFF, 0x13, 0x9E, 0x00
};

const unsigned char gbCompo2021_tile_data[] ={
    0x03, 0xFF, 0xC0, 0x00, 0x83, 0xFC, 0xFF, 0x83, 0xFA, 0xFF, 0xC0, 0x00, 0x83, 0xFC, 0xFF, 0x4B, 
    0xFF, 0x00, 0xC5, 0xFF, 0x10, 0xFF, 0x28, 0xFF, 0x28, 0x8A, 0xE0, 0xFF, 0xC4, 0x1E, 0xFF, 0x21, 
    0xFF, 0x18, 0x8A, 0xD0, 0xFF, 0xC4, 0x77, 0xFF, 0x22, 0xFF, 0x22, 0x8A, 0xC0, 0xFF, 0xC4, 0x78, 
    0xFF, 0x24, 0xFF, 0x38, 0x8A, 0xB0, 0xFF, 0xC4, 0xC6, 0xFF, 0x44, 0xFF, 0x6C, 0x8A, 0xA0, 0xFF, 
    0xC4, 0xF9, 0xFF, 0x22, 0xFF, 0x21, 0x8A, 0x90, 0xFF, 0xC4, 0xE3, 0xFF, 0x14, 0xFF, 0x83, 0x8A, 
    0x80, 0xFF, 0xC4, 0xCF, 0xFF, 0x22, 0xFF, 0x02, 0x8A, 0x70, 0xFF, 0xC2, 0x9E, 0xFF, 0x21, 0x8C, 
    0xD0, 0xFF, 0xC4, 0x73, 0xFF, 0x52, 0xFF, 0x52, 0x8A, 0x50, 0xFF, 0xC4, 0x1F, 0xFF, 0x08, 0xFF, 
    0x08, 0x8C, 0xD0, 0xFF, 0xC0, 0xA1, 0x8C, 0xA0, 0xFF, 0xC0, 0x7C, 0x8E, 0x60, 0xFF, 0xC2, 0x1F, 
    0xFF, 0x12, 0x8C, 0xA0, 0xFF, 0xC2, 0xDD, 0xFF, 0x48, 0x8C, 0xC0, 0xFF, 0xC4, 0xDF, 0xFF, 0x88, 
    0xFF, 0x88, 0x8A, 0xF0, 0xFE, 0xC2, 0x80, 0xFF, 0x80, 0x84, 0xBA, 0xFF, 0xC2, 0x44, 0xFF, 0xEE, 
    0x85, 0xDA, 0xFE, 0xC9, 0xFE, 0x00, 0xFE, 0x00, 0xFF, 0x06, 0xFF, 0x21, 0xFF, 0x1E, 0x83, 0xC1, 
    0xFE, 0xC0, 0x80, 0x02, 0x00, 0xC1, 0x1F, 0x1F, 0x84, 0xFC, 0xFE, 0xC0, 0x1C, 0x83, 0xB1, 0xFE, 
    0x03, 0x00, 0xC7, 0xFC, 0xFC, 0xFF, 0x24, 0xFF, 0x22, 0xFF, 0x7C, 0x87, 0xF0, 0xFF, 0xC3, 0x7F, 
    0x7F, 0xFF, 0x54, 0x87, 0xC0, 0xFF, 0xCB, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xFF, 0x20, 0xFF, 
    0x22, 0xFF, 0xF9, 0x83, 0x81, 0xFE, 0xCB, 0xF0, 0x00, 0xE0, 0x00, 0x03, 0x03, 0xFF, 0x60, 0xFF, 
    0x14, 0xFF, 0xE3, 0x87, 0xC0, 0xFF, 0xC7, 0xFF, 0xFF, 0xFF, 0xC2, 0xFF, 0x22, 0xFF, 0xCF, 0x87, 
    0xB0, 0xFF, 0xC1, 0x87, 0x87, 0x84, 0xFC, 0xFE, 0xC0, 0x9E, 0x87, 0xA0, 0xFF, 0xC7, 0xFE, 0xFE, 
    0xFF, 0x4A, 0xFF, 0x4A, 0xFF, 0x66, 0x87, 0x90, 0xFF, 0xC5, 0x3F, 0x3F, 0xFF, 0x0E, 0xFF, 0x08, 
    0x89, 0x80, 0xFF, 0xC1, 0x9F, 0x9F, 0x84, 0xCC, 0xFE, 0x84, 0x60, 0xFF, 0x86, 0xB0, 0xFF, 0xC4, 
    0x3C, 0xFF, 0x22, 0xFF, 0x77, 0x85, 0x80, 0xFF, 0xC0, 0x01, 0x83, 0x80, 0xFF, 0xC4, 0x02, 0xFF, 
    0x02, 0xFF, 0x07, 0x85, 0x40, 0xFF, 0xC0, 0x80, 0x83, 0x40, 0xFF, 0xC4, 0x0F, 0xFF, 0x08, 0xFF, 
    0x1D, 0x8A, 0x60, 0xFF, 0xC4, 0x8E, 0xFF, 0x88, 0xFF, 0xDF, 0x85, 0xEA, 0xFD, 0xC2, 0x7F, 0x00, 
    0x7F, 0x89, 0xF8, 0xFE, 0x86, 0xD8, 0xFD, 0x47, 0xFC, 0x00, 0xD1, 0x3F, 0x3F, 0x70, 0x70, 0xE0, 
    0xE0, 0xFF, 0xC1, 0xC3, 0xC3, 0xFF, 0xC3, 0xFF, 0xC3, 0xC3, 0xFF, 0xFC, 0xFC, 0x03, 0x0F, 0xC1, 
    0xFF, 0xC3, 0x04, 0xFF, 0xC4, 0x81, 0xE1, 0xFF, 0x7F, 0x7F, 0x03, 0x60, 0xC7, 0x7F, 0x63, 0xE0, 
    0xE0, 0xFF, 0xE0, 0xFF, 0xC0, 0x83, 0xE0, 0xFF, 0x03, 0x07, 0xDB, 0xFF, 0xC1, 0x07, 0x07, 0xFF, 
    0x07, 0xFF, 0x01, 0xC1, 0xFF, 0x07, 0x07, 0x8E, 0x8E, 0x9E, 0x9E, 0x9F, 0x9C, 0x98, 0x98, 0x9F, 
    0x98, 0x9F, 0x98, 0x98, 0x9F, 0xFF, 0xFF, 0x03, 0x01, 0xC1, 0xFF, 0x78, 0x07, 0xFF, 0xC1, 0x87, 
    0x87, 0x03, 0xFE, 0xD0, 0xFF, 0x7C, 0xFC, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 
    0x03, 0x03, 0x01, 0x01, 0xFF, 0x02, 0x70, 0xCC, 0xFF, 0x70, 0xFF, 0x70, 0x70, 0xFF, 0x3F, 0x3F, 
    0xB1, 0xB1, 0xF0, 0xF0, 0xFF, 0x02, 0xF0, 0xC0, 0xFF, 0x83, 0xFA, 0xFF, 0xC9, 0xFF, 0xFF, 0xFF, 
    0xF8, 0xF8, 0x60, 0x60, 0xFF, 0x60, 0x00, 0x84, 0x28, 0xFD, 0x83, 0x16, 0xFD, 0x03, 0xF0, 0x85, 
    0xE0, 0xFF, 0xC5, 0xDF, 0xD8, 0xD8, 0xDF, 0xF8, 0xF8, 0x84, 0x60, 0xFF, 0x02, 0xE1, 0xC7, 0xFF, 
    0x01, 0xFF, 0x07, 0x07, 0xFF, 0x1F, 0x1F, 0x03, 0xF8, 0xC0, 0xFF, 0x02, 0xF1, 0xCC, 0xFF, 0xF1, 
    0xFF, 0xF1, 0xF1, 0xFF, 0xFC, 0xFC, 0x0E, 0x0E, 0x07, 0x07, 0xFF, 0x02, 0xC3, 0x85, 0x30, 0xFF, 
    0x47, 0x3F, 0x00, 0x89, 0x00, 0xFF, 0x86, 0xC6, 0xFC, 0xC8, 0xC0, 0xE0, 0xFF, 0xF0, 0xFF, 0x7F, 
    0x7F, 0x3F, 0x3F, 0x83, 0xFF, 0xFD, 0xCB, 0xF3, 0x03, 0xFF, 0x01, 0x03, 0xFF, 0x07, 0xFF, 0xFE, 
    0xFE, 0xFC, 0xFC, 0x86, 0x30, 0xFE, 0xC3, 0xC3, 0xC3, 0xFF, 0xC0, 0x84, 0xF3, 0xFE, 0x86, 0x20, 
    0xFE, 0xC1, 0xC1, 0xC7, 0x8A, 0xE0, 0xFF, 0xD3, 0x9F, 0x80, 0x9F, 0x9C, 0x9E, 0x9F, 0x9E, 0x9F, 
    0x0F, 0x0F, 0x47, 0x07, 0x40, 0x00, 0xC0, 0x00, 0x8F, 0x0F, 0xFF, 0x78, 0x84, 0x66, 0xFC, 0x89, 
    0xD0, 0xFF, 0xC8, 0x7C, 0xFE, 0xFF, 0xFE, 0xFF, 0xCF, 0xCF, 0x8F, 0x8F, 0x86, 0x00, 0xFE, 0xC3, 
    0x00, 0x01, 0xFF, 0x01, 0x88, 0xB0, 0xFF, 0xC1, 0x7F, 0x00, 0x83, 0x4C, 0xFF, 0xC1, 0xF1, 0xFF, 
    0x03, 0xBF, 0x84, 0x00, 0xFE, 0xC2, 0x1F, 0xFF, 0x90, 0x83, 0xF7, 0xFE, 0x03, 0x9F, 0x85, 0xB0, 
    0xFD, 0xC4, 0xDF, 0xD9, 0xD8, 0xDF, 0xD8, 0x04, 0xDF, 0x85, 0x60, 0xFD, 0x83, 0xB2, 0xFE, 0x03, 
    0xC0, 0xCD, 0xCE, 0xC0, 0x0C, 0x00, 0x0C, 0x00, 0xFC, 0x00, 0x7F, 0x70, 0x78, 0x7F, 0x78, 0x7F, 
    0x03, 0x3F, 0x86, 0x80, 0xFD, 0xC0, 0x03, 0x83, 0x67, 0xFE, 0x83, 0x8C, 0xFE, 0x83, 0x2F, 0xFD, 
    0xC1, 0xCF, 0xC0, 0x89, 0x00, 0xFF, 0x86, 0xF2, 0xFD, 0x46, 0x00, 0xFE, 0xC1, 0x00, 0xF3, 0x04, 
    0x03, 0x03, 0x7F, 0x05, 0x60, 0x85, 0x18, 0xFF, 0x05, 0x00, 0x83, 0xEA, 0xFF, 0x85, 0x30, 0xFE, 
    0x83, 0x2C, 0xFE, 0xC1, 0x00, 0x00, 0x03, 0x80, 0xC0, 0x9F, 0x04, 0x80, 0x03, 0xF9, 0x05, 0x19, 
    0xC1, 0x9F, 0x1F, 0x03, 0x18, 0x83, 0x7C, 0xFE, 0x05, 0x80, 0x8B, 0xC0, 0xFF, 0x03, 0x1F, 0xC1, 
    0xFE, 0xFE, 0x03, 0x06, 0x83, 0xCC, 0xFD, 0xC1, 0x00, 0x00, 0x83, 0x48, 0xFF, 0xC0, 0x7F, 0x84, 
    0x98, 0xFC, 0x03, 0xE3, 0x05, 0x63, 0x89, 0xC0, 0xFF, 0xC1, 0x00, 0x00, 0x83, 0x75, 0xFF, 0x8B, 
    0x80, 0xFF, 0x05, 0xFC, 0x03, 0x0C, 0x83, 0x6C, 0xFD, 0x85, 0x68, 0xFF, 0xC7, 0xC0, 0x00, 0x00, 
    0x00, 0x0F, 0x0F, 0xCF, 0xCF, 0x03, 0xCC, 0xC5, 0xCE, 0xCE, 0xC7, 0xC7, 0xFF, 0xFF, 0x05, 0xC0, 
    0x86, 0xE2, 0xFF, 0x44, 0xC0, 0xCF, 0xC6, 0xC0, 0xC3, 0xC0, 0xC3, 0xC0, 0xF3, 0xF0, 0x47, 0xFE, 
    0x00, 0xC1, 0x7F, 0x60, 0x85, 0x17, 0xFF, 0x07, 0x7F, 0xC1, 0xE3, 0x63, 0x83, 0x77, 0xFF, 0x83, 
    0x18, 0xFF, 0x44, 0xFF, 0x80, 0x85, 0xFE, 0xFE, 0x84, 0x9D, 0xFA, 0xC2, 0x01, 0xF9, 0x19, 0x86, 
    0x17, 0xFF, 0x42, 0x19, 0xF9, 0xC0, 0xF9, 0x83, 0xAA, 0xFB, 0x86, 0x16, 0xFF, 0x84, 0xD0, 0xFF, 
    0xC2, 0xF8, 0x18, 0xF8, 0x06, 0x18, 0xC7, 0xF8, 0x18, 0xF8, 0x38, 0xF0, 0x30, 0xFF, 0xC0, 0x86, 
    0x6F, 0xFF, 0x42, 0xC0, 0xFF, 0xC0, 0xC0, 0x85, 0xA0, 0xFF, 0x83, 0x14, 0xFF, 0x42, 0xE3, 0x63, 
    0xC2, 0xFF, 0x03, 0xFF, 0x84, 0x8E, 0xFE, 0xC1, 0xFF, 0xFF, 0x42, 0xFF, 0xFC, 0xC3, 0x1F, 0x1C, 
    0x1F, 0x1C, 0x85, 0xC0, 0xFE, 0x89, 0x36, 0xFA, 0x8A, 0x80, 0xFF, 0xC2, 0x0F, 0xC7, 0xC7, 0x83, 
    0x12, 0xFE, 0x44, 0xCC, 0xC0, 0x8A, 0xA0, 0xFF, 0xC7, 0xE0, 0xFF, 0xE0, 0x7F, 0x60, 0xF3, 0xF0, 
    0xF3, 0x42, 0x30, 0x33, 0xCA, 0x30, 0xF3, 0x30, 0xF1, 0x30, 0xF1, 0x30, 0x60, 0x7F, 0x60, 0x7F, 
    0x83, 0xE6, 0xFF, 0x43, 0xC0, 0xFF, 0x85, 0xD8, 0xF9, 0x83, 0xD6, 0xF9, 0x86, 0x2F, 0xFF, 0x87, 
    0x82, 0xFD, 0x87, 0x2B, 0xFA, 0xC2, 0xF9, 0xF9, 0x81, 0x84, 0x32, 0xFE, 0x42, 0xF9, 0x19, 0xC0, 
    0xF9, 0x83, 0xCB, 0xFA, 0x84, 0x1C, 0xFF, 0x85, 0x61, 0xFF, 0xC9, 0xFF, 0x30, 0xF0, 0x30, 0xF0, 
    0xF0, 0x30, 0xFF, 0x3F, 0x3F, 0x87, 0xD1, 0xFC, 0x83, 0xF2, 0xFC, 0x83, 0x1C, 0xFF, 0x42, 0xFF, 
    0x03, 0xC0, 0xFF, 0x83, 0x29, 0xFF, 0xCB, 0xE7, 0x67, 0xE7, 0x67, 0x66, 0xE7, 0xE6, 0xE7, 0xE6, 
    0xE7, 0x06, 0x07, 0x84, 0x68, 0xF9, 0xC1, 0x07, 0xFF, 0x84, 0xF8, 0xFF, 0x84, 0x3F, 0xFF, 0xC1, 
    0xFF, 0x0C, 0x83, 0x0B, 0xFC, 0x88, 0x59, 0xF9, 0xC2, 0xCC, 0xC0, 0x0E, 0x84, 0xF8, 0xFD, 0x03, 
    0xCF, 0xC3, 0xCC, 0xCF, 0xCC, 0xCF, 0x83, 0x50, 0xFF, 0x83, 0x6C, 0xFE, 0x83, 0xA1, 0xFB, 0x83, 
    0x2C, 0xF9, 0xC3, 0x39, 0xF8, 0x19, 0xF8, 0x83, 0xAC, 0xFE, 0xC2, 0x1F, 0xFF, 0x1F, 0x84, 0x9E, 
    0xFF, 0x83, 0x17, 0xF9, 0x8B, 0x3C, 0xFC, 0x8A, 0x74, 0xFC, 0x88, 0xDE, 0xFB, 0x8F, 0xF0, 0xFF, 
    0x87, 0xE0, 0xFF, 0xC3, 0x9F, 0x60, 0xFF, 0x00, 0x83, 0x65, 0xFD, 0xC1, 0xF9, 0xF8, 0x83, 0xC4, 
    0xFA, 0x85, 0xD6, 0xF8, 0x83, 0xB5, 0xFD, 0xC4, 0xCF, 0x0F, 0xC0, 0x00, 0xC0, 0x86, 0xC8, 0xF8, 
    0x83, 0x77, 0xFE, 0x8B, 0xB0, 0xFF, 0xC8, 0x06, 0x07, 0x27, 0x07, 0x27, 0x07, 0x20, 0x00, 0x20, 
    0x86, 0xA8, 0xF8, 0xC0, 0xCC, 0x04, 0xCF, 0x85, 0xF0, 0xFD, 0xC1, 0xF9, 0x06, 0x8B, 0x74, 0xFF, 
    0x87, 0x80, 0xFF, 0x8D, 0x7F, 0xF8, 0xC7, 0x9F, 0x60, 0x9F, 0x60, 0xFF, 0x60, 0xFF, 0x60, 0x87, 
    0xF8, 0xFF, 0xC7, 0xF9, 0x06, 0xF9, 0x06, 0xFF, 0x06, 0xFF, 0x06, 0x87, 0xF8, 0xFF, 0x47, 0xFF, 
    0x60, 0x86, 0x40, 0xF8, 0xC1, 0x03, 0xFE, 0x42, 0x07, 0xFD, 0x84, 0x26, 0xFA, 0xCA, 0xFF, 0x00, 
    0xFF, 0xF0, 0x0F, 0xF8, 0xFF, 0xF8, 0x1F, 0xF8, 0xFF, 0x8A, 0xEA, 0xFD, 0xC5, 0xFF, 0x01, 0xFE, 
    0x03, 0xFE, 0x03, 0x86, 0x10, 0xF8, 0xC8, 0x3C, 0xC3, 0xFF, 0x0F, 0xFF, 0x3F, 0xFF, 0x7F, 0xFF, 
    0x44, 0xFF, 0x06, 0xC5, 0xFF, 0x86, 0xFF, 0xC6, 0xFF, 0xC6, 0x86, 0xA0, 0xFF, 0xC1, 0x63, 0xFE, 
    0x43, 0x67, 0xFD, 0x85, 0xA8, 0xFF, 0x83, 0xB6, 0xFE, 0xC4, 0xFF, 0x56, 0xFF, 0x56, 0xFF, 0x83, 
    0xAC, 0xFF, 0xCB, 0x1F, 0xF8, 0xFF, 0xFF, 0xF0, 0xFF, 0x1F, 0xFF, 0x2D, 0x3F, 0x6D, 0x7F, 0x8B, 
    0x90, 0xFF, 0xC2, 0x5F, 0xF8, 0x5F, 0x8B, 0x90, 0xFF, 0x85, 0xD3, 0xFD, 0x86, 0xC4, 0xF7, 0xCA, 
    0xE1, 0x7F, 0x87, 0xFF, 0x1F, 0xFF, 0x3F, 0xFF, 0xFC, 0x07, 0xFC, 0x85, 0x58, 0xFF, 0xC6, 0x83, 
    0xFF, 0xC3, 0xFF, 0xE1, 0xFF, 0xE0, 0x10, 0xFF, 0x43, 0xE6, 0xFF, 0x83, 0x74, 0xFF, 0xC2, 0x86, 
    0xFF, 0x06, 0x83, 0x7A, 0xFF, 0xC1, 0xFF, 0x63, 0x89, 0x0A, 0xFF, 0xC5, 0x56, 0xFF, 0xFF, 0xFF, 
    0xFD, 0xFF, 0x44, 0xFD, 0x07, 0xC2, 0xCD, 0xFF, 0x1F, 0x83, 0x2D, 0xF7, 0x84, 0x14, 0xFF, 0x83, 
    0x10, 0xFF, 0xC0, 0x5F, 0x83, 0x0C, 0xFF, 0xC0, 0xF0, 0x89, 0x2A, 0xF7, 0x43, 0xFE, 0x03, 0x87, 
    0x74, 0xFF, 0xC0, 0x7F, 0x83, 0x0C, 0xFF, 0x89, 0x8B, 0xFF, 0xC0, 0x7F, 0x43, 0xFF, 0xF0, 0x83, 
    0xF2, 0xFC, 0xC5, 0xFF, 0xC0, 0xFF, 0x80, 0xFF, 0x3C, 0x8E, 0xEE, 0xF6, 0x46, 0x06, 0xFF, 0xC0, 
    0x06, 0x84, 0x9C, 0xFE, 0x87, 0xBA, 0xFE, 0xC2, 0x00, 0xFF, 0x00, 0x84, 0x9C, 0xFE, 0x8A, 0x90, 
    0xFF, 0x85, 0xE4, 0xF7, 0x8E, 0xAA, 0xF6, 0xD8, 0x03, 0xFF, 0x0C, 0xFC, 0x33, 0xF3, 0x4F, 0xCF, 
    0x7C, 0xFF, 0x30, 0xFF, 0x30, 0xFF, 0xC8, 0xCF, 0x38, 0x3F, 0xF1, 0xFF, 0xC6, 0xFE, 0x09, 0xF9, 
    0x0F, 0x84, 0x2E, 0xFE, 0xC8, 0x19, 0xF9, 0x67, 0xE7, 0x9E, 0x9F, 0x78, 0x7F, 0xE0, 0x84, 0x90, 
    0xF7, 0x8A, 0x04, 0xFE, 0x84, 0xF4, 0xFD, 0x8A, 0x04, 0xFE, 0x84, 0xF4, 0xFD, 0x84, 0x6A, 0xFD, 
    0x83, 0x66, 0xFD, 0x87, 0x46, 0xF6, 0x83, 0xAA, 0xFD, 0x83, 0xA6, 0xFD, 0x88, 0x30, 0xFD, 0x84, 
    0x05, 0xF9, 0x85, 0x1A, 0xF6, 0xC1, 0xFF, 0xFF, 0x00
};