#include <iostream>

int main(void)
{
    /************* Logical Operators  ***************/
    /***********  (And && Or || Not !) ***********/

    int N1 {1} , N2 {0} , N3 {1};
  
    /** And **/
    std::cout << "N1 && N2  = " << (N1 && N2)  << std::endl;
    std::cout << "N1 && N3 = " << (N1 && N3) << std::endl;
    std::cout << "N1 && N2 && N3 = " << (N1 && N2 && N3)  << std::endl;
   
    /** oR **/
    std::cout << "N1 || N2  = " << (N1 || N2)  << std::endl;
    std::cout << "N1 || N3 = " << (N1 || N3) << std::endl;
    std::cout << "N1 || N2 || N3 = " << (N1 || N2 || N3)  << std::endl;

    /** Not **/
    std::cout << "! N1 = " << (! N1)  << std::endl;
    std::cout << "! N2 = " << (! N2) << std::endl;
    std::cout << "! N3 = " << (! N3)  << std::endl;

}