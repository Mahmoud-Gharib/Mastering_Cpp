#include <iostream>
#include <cmath>

int main(void)
{
    /******     Absolute Value      *******/
    int N1 = -255;
    std::cout << "Absolute N1 = " << std::abs(N1) << std::endl;

    /******     sqrt Value      *******/
    int N2 = 25;
    std::cout << "sqrt N2 = " << std::sqrt(N2) << std::endl;

    /******     Angle Value      *******/
    int A1 = 45;
    std::cout << "sine A1 = " << std::sin(A1) << std::endl;
    std::cout << "cosine A1 = " << std::cos(A1) << std::endl;
    std::cout << "tan A1 = " << std::tan(((A1*3.14)/180)) << std::endl;

    /******     Log Value      *******/
    std::cout << "Log  1000 = " << std::log10(1000) << std::endl;

    /******     Round Value  ,ceil ,floor    *******/
    std::cout << "Round  2.5 = " << std::round(2.5) << std::endl;
    std::cout << "Round  2.4 = " << std::round(2.45) << std::endl;

    std::cout << "ceil  2.5459 = " << std::ceil(2.5459) << std::endl;
    std::cout << "floor 2.5459 = " << std::floor(2.5459) << std::endl;




}