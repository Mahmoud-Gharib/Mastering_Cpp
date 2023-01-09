

#include <iostream>

int main(void)                                                  
{
    // Comiler Time Error
    std::cout << "Mahmoud Gharib"<< std::endl;

    // Run Time Error
    int Value = 5 / 0 ;
    std::cout << "Value = " << Value << std::endl;

    return 0;    
}