#include <iostream>

int main(void)
{    
    bool Red_Light   = false;      //bool  ==> 1 Byte
    bool Green_Light = true;

    if(Green_Light == true)
    {
        std::cout << "Go !" << std::endl;
    }
    else
    {
        std::cout << "Stop !" << std::endl;
    }

    std::cout << "Size Of  Green_Light = " << sizeof(Green_Light) << std::endl ;
    std::cout << "Size Of  Red_Light   = " << sizeof(Red_Light) << std::endl ;


    std::cout << "Green_Light = " << Green_Light << std::endl;   // one
    std::cout << "Red_Light = "   << Red_Light << std::endl;     // zero
}