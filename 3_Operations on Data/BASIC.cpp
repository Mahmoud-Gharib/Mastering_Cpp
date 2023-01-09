#include <iostream>

int main(void)
{
    /********** (+ - * / %)  ***********/
    int N1 {2};
    int N2 {7};
    int Sum,Sub,Div,Mul,Modulus;

    Sum = N1 + N2;        //9
    Sub = N1 - N2;        //-5
    Div = N2 / N1;        //3
    Mul = N1 * N2;        //14
    Modulus = N2 % N1;    //1

    std::cout << "Sum = " << Sum << std::endl;
    std::cout << "Sub = " << Sub << std::endl;
    std::cout << "Div = " << Div << std::endl;
    std::cout << "Mul = " << Mul << std::endl;
    std::cout << "Modulus = " << Modulus << std::endl;


}