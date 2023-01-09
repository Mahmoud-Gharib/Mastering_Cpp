#include <iostream>

int main(void)
{
    /************* Relational Operators  ***************/
            /***********  (> >= < <= == !=) ***********/

    int N1 {25} , N2 {35};
  

    std::cout << "N1 > N2  = " << (N1 > N2)  << std::endl;
    std::cout << "N1 >= N2 = " << (N1 >= N2) << std::endl;
    std::cout << "N1 < N2  = " << (N1 < N2)  << std::endl;
    std::cout << "N1 <= N2 = " << (N1 <= N2) << std::endl;
    std::cout << "N1 == N2 = " << (N1 == N2) << std::endl;
    std::cout << "N1 != N2 = " << (N1 != N2) << std::endl;

}