#include <iostream>

int main(void)
{
    /************* Precedence and Associativity  ***************/
    int N1 {6};
    int N2 {3};
    int N3 {8};
    int N4 {9};
    int N5 {3};
    int N6 {2};
    int N7 {5};

    int Result = N1 + N2 * N3 - N4  / N5 - N6 + N7;     // 6 + 24 - 3 - 2 + 5 = 30
    std::cout << "Result = " << Result << std::endl;

    Result = ( N1 + N2 ) * N3 - N4  / ( N5 - N6 ) + N7;     // 9 * 8 - 9 / 1 + 5 = 72 - 9 + 5 = 68
    std::cout << "Result = " << Result << std::endl;

}