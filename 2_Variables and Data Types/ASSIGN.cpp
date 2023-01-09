#include <iostream>

int main(void)
{    
    auto N1 = 'A';       //CHAR   ==> 1 Byte
    N1 = 66;
   // N1 {99};           // Error ==> Compiler think is it a Defination Function
   // N1 (55);          // Error ==> Compiler think is it a Call Function
    std::cout << "N1 is : " << N1 << std::endl ;
    
    auto N2 = 25U;
    N2 = -25;                        // Assign sign Value to Data is Unsign  (Not Allow)
    std::cout << "N2 is : " << N2 << std::endl ;

}