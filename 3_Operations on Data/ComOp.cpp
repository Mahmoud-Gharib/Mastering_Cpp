#include <iostream>

int main(void)
{
    /************* Compound Assignment Operators  ***************/
    /***********  Value += 5   ==   Value = Value + 5 ***********/
            /***********  (+= -= /= *= %=) ***********/

    int N1 {25};
  
    int Sum,Sub,Div,Mul,Modulus;

    N1      += 5;        //30
    std::cout << "Sum = " << N1 << std::endl;
    N1      -= 5;        //25
    std::cout << "Sub = " << N1 << std::endl;
    N1      /= 5;        //5
    std::cout << "Div = " << N1 << std::endl;
    N1      *= 5;        //25
    std::cout << "Mul = " << N1 << std::endl;
    N1      %= 5;    //0
    std::cout << "Modulus = " << N1 << std::endl;
}