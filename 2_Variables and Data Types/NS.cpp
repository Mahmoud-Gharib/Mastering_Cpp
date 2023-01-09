#include <iostream>

int main(void)
{
    int N1 = 15;            // Decimal
    int N2 = 017;           // Octal
    int N3 = 0x0F;          // HexaDecimal
    int N4 = 0b00001111;    // Binary

    std::cout << "N1 = " << N1 << std::endl ;
    std::cout << "N2 = " << N2 << std::endl ;
    std::cout << "N3 = " << N3 << std::endl ;
    std::cout << "N4 = " << N4 << std::endl ;
}