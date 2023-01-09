#include <iostream>

int main(void)
{    
    auto N1 = 'A';       //CHAR   ==> 1 Byte
    auto N2 = 15 ;       //INT    ==> 4 Byte
    auto N3 = 15.1f;     //FLOAT  ==> 4 Byte
    auto N4 = 15.1;      //DOUBLE ==> 8 Byte
    auto N5 = 155L;      //LONG   ==> 4 Byte
    auto N6 = 155LL;     //LONG DOUBLE ==> 8 Byte

    std::cout << "N1 is : " << N1 << std::endl ;
    std::cout << "N2 is : " << N2 << std::endl ;
    std::cout << "N3 is : " << N3 << std::endl ;
    std::cout << "N4 is : " << N4 << std::endl ;
    std::cout << "N5 is : " << N5 << std::endl ;
    std::cout << "N6 is : " << N6 << std::endl ;


    std::cout << "Size Of  N1 = " << sizeof(N1) << std::endl ;
    std::cout << "Size Of  N2 = " << sizeof(N2) << std::endl ;
    std::cout << "Size Of  N3 = " << sizeof(N3) << std::endl ;
    std::cout << "Size Of  N4 = " << sizeof(N4) << std::endl ;
    std::cout << "Size Of  N5 = " << sizeof(N5) << std::endl ;
    std::cout << "Size Of  N6 = " << sizeof(N6) << std::endl ;
}