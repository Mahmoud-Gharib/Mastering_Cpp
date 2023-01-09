#include <iostream>
#include <iomanip>

int main(void)
{
    float       N1 = 12.3456789101112131415f;           // float          ==> 4 Byte
    double      N2 = 12.3456789101112131415;           // double          ==> 8 Byte
    long double N3 = 12.3456789101112131415L;          // long double     ==> > 12 Byte    == 16 Byte

    std::cout << "Size Of  N1 = " << sizeof(N1) << std::endl ;
    std::cout << "Size Of  N2 = " << sizeof(N2) << std::endl ;
    std::cout << "Size Of  N3 = " << sizeof(N3) << std::endl ;

    std::cout << "N1 = " << N1 << std::endl ;   // 7     
    std::cout << "N2 = " << N2 << std::endl ;   // 15    
    std::cout << "N3 = " << N3 << std::endl ;   // 15 +  

    std::cout << std::setprecision(20);
    std::cout << "N1 = " << N1 << std::endl ;   // 7     ==> after that Garbage
    std::cout << "N2 = " << N2 << std::endl ;   // 15    ==> after that Garbage
    std::cout << "N3 = " << N3 << std::endl ;   // 15 +  

    float  N4 = 123456789.0f;
    double N5 = 123456789.0;

    std::cout << "N4 = " << N4 << std::endl ;   // 7     
    std::cout << "N5 = " << N5 << std::endl ;   // 15 

    float  N6 = 12.34567891011e8f;
    double N7 = 12.34567891011e10;

    std::cout << "N6 = " << N6 << std::endl ;   // 7     
    std::cout << "N7 = " << N7 << std::endl ;   // 15 


}