#include <iostream>
#include <string>

int main(void)                                                  
{
    int F_Num = 25;
    int S_Num = 45;
    std::cout << "First_Num = "<< F_Num << "   Second_Num = " << S_Num << std::endl;

    std::cin >> F_Num >> S_Num;
    std::cout << "First_Num = "<< F_Num << "   Second_Num = " << S_Num << std::endl;

    int Age ;
    std::string Full_Name;

    //std::cin >> Full_Name >> Age;

    std::cin >> Age;
    std::getline(std::cin,Full_Name);
 
    std::cout << "Your Name is " << Full_Name << "Your Age is " << Age << std::endl;

    return 0;    
}

