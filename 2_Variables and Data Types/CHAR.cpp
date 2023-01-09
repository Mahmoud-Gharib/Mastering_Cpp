#include <iostream>

int main(void)
{    
    char C1 = 'A';          //CHAR ==> 1 Byte
    char C2 = C1 + 1;

    std::cout << "C1 is : " << C1 << std::endl ;
    std::cout << "C2 is : " << C2 << std::endl ;

    std::cout << "Value of C1 is = " << static_cast <int> (C1) << std::endl ;   // ASCII ==> 65
    std::cout << "Value of C2 is = " << static_cast <int> (C2) << std::endl ;   // ASCII ==> 66

    std::cout << "Size Of  C1 = " << sizeof(C1) << std::endl ;
    std::cout << "Size Of  C2 = " << sizeof(C2) << std::endl ;
}