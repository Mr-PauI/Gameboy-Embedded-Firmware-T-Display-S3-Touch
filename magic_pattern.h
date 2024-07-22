// this is the beginning of the pattern that comprises the 2megabyte random data segment
// it wasn't required to compare the entire 2megabyte structure with this bit pattern
const uint8_t magic_pattern[27] = { 0x94,0x6C,0xAA,0xA0,0xDF,0x62,0xC4,0x02,0x5F,0x8B,0x02,0xF4,0xA6,0x5E,0xEF,0x82,0x37,0xE1,0xD5,0xAE,0x0A,0xA8,0x9C,0xF4,0x7A,0xBB,0x90 };
// by including these 27 bytes at the start of a random structure (if not random, it will likely get compressed during compiler optimization)
// the existing merge tool can be used to replace a section of data and revalidate the .bin from your own projects.
