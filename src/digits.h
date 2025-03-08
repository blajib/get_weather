#include <map>
#include <stdint.h>
#include <array>  // Inclure pour utiliser std::array
#include <string>

// Déclaration de la map avec std::array
std::map<int, std::array<uint32_t, 3>> digits;

std::map<int, std::array<uint32_t, 3>> initializeDigits() {
    // Initialisation des valeurs avec std::array
    digits[1] = {0x200e, 0x1a00200, 0x20020000};
    digits[2] = {0x200d011, 0x1200200, 0x7e040000};
    digits[3] = {0xe01a, 0x600d00, 0x80080f0};
    digits[4] = {0x3006004, 0x80881fe0, 0x8008000};
    digits[5] = {0x7c04, 0x7c0440, 0x4044038};
    digits[6] = {0x300c, 0x1803402, 0x201f0000};
    digits[7] = {0x1f800, 0x80100fc0, 0x200400c0};
    digits[8] = {0xf00d, 0x700380, 0x6404c078};
    digits[9] = {0x7808810, 0x81181f80, 0x80081f8};
    digits[10] = {0x10030c71, 0x2d121221, 0x2611c100};
    digits[12] = {0x10018028, 0xe48208c0, 0x9809f000};
    digits[13] = {0x11c30, 0x450413c1, 0x411679c};
    digits[14] = {0x20821, 0xd2413f1, 0x24104104};
    digits[15] = {0x1bc6a, 0xbc0840, 0x8c0b8000};
    digits[16] = {0x30030031, 0x8d301381, 0x2413c100};
    digits[17] = {0x20027, 0xc608a182, 0x7c220240};
    digits[18] = {0x10031e31, 0x249208c0, 0x8c09201e};
    digits[19] = {0x10038ee8, 0x908f0811, 0x910f000};
    digits[20] = {0x70090, 0xe5091091, 0xa3c4000};
    digits[21] = {0x2706d1, 0xad021022, 0x2782000};
    digits[22] = {0x70c49, 0x23921066, 0xe7d9000};
    digits[23] = {0x30051, 0xc50420e2, 0x27e200c};
    digits[24] = {0x70051, 0x85302246, 0x3e7e4000};
    digits[25] = {0x70050, 0xf50810e3, 0xc120e008};
    digits[26] = {0x30050, 0xc48811c1, 0x163de300};
    digits[27] = {0x18438, 0xe6920820, 0x82082000};
    digits[28] = {0x39, 0xe4821841, 0x1f3c8208};

    return digits;
}
