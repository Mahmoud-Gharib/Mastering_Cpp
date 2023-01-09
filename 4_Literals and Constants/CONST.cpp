#include <iostream>

int main(void)
{
            /************ CONST ************/

    int N1 ;           // Normal Variable can be not Initilize
    //const int N2;    Error ==> Constant Variable Must Initilize with Value

    const int Radius_Earth = 6371 ;   // in KM
    const float pi = 3.14F ;
    float O_Earth ;

    //pi = 3.15;       Error ==> can not modify in Value of Constant Variable
   
    O_Earth = 2 * pi * Radius_Earth ;

    std::cout << "Radius_Earth =  " << Radius_Earth << std::endl;
    std::cout << "pi           =  " << pi << std::endl;
    std::cout << "O_Earth      =  " << O_Earth << std::endl;

    std::cout << "N1 = ";
    std::cin >> N1;
    const int N2 = N1;              // Constant Variable can Inilize at RunTime
    std::cout << "N2           =  " << N2 << std::endl;


    std::cout <<" ========================================================= " << std::endl;
                
                /************ CONST Expression ************/

    //constexpr int N3 ;     Error ==> Constant Variable Must Initilize with Value
    constexpr int N3 = 5;
    //N3 = 77;               Error ==> can not modify in Value of Constant Variable
    std::cout << "N3           =  " << N3 << std::endl;

    const int N5 = 10;
    //constexpr int N4 = N5;  
    //constexpr int N4 = N1; Error ==>  Constant Variable Expression can not Inilize at Run time
    constexpr int N4 = N5;
    std::cout << "N4           =  " << N4 << std::endl;

    static_assert( N4 == 10);     // Check Value of Constant Variable Expression at Build time
     

}