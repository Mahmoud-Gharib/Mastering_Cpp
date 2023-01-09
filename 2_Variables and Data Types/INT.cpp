#include <iostream>

int main(void)
{
    /************** Braced Initialization **************/

    int N1 ;             // Garbage Value
    int N2 {};           // Init Zero
    int N3 {10};
    int N4 {N2 + N3} ;
 // int N5 {2.5};        //Error
    std::cout << "N1 = " << N1 << std::endl ;
    std::cout << "N2 = " << N2 << std::endl ;
    std::cout << "N3 = " << N3 << std::endl ;
    std::cout << "N4 = " << N4 << std::endl ;
 //std::cout << "N5 = " << N5 << std::endl ;

    std::cout << "======================================" << std::endl ;
   
    /************** Functional Initialization **************/

    int N6 ();        // Warning Init 1         
    int N7 (10);
    int N8 (N4 + N7) ;
    int N9 (2.5);        
    std::cout << "N6 = " << N6 << std::endl ;
    std::cout << "N7 = " << N7 << std::endl ;
    std::cout << "N8 = " << N8 << std::endl ;
    std::cout << "N9 = " << N9 << std::endl ;

    std::cout << "======================================" << std::endl ;
    
    /************** Assignment Initialization **************/

    int N10 = 0;        // Init 0         
    int N11 = 10;
    int N12 = N4 + N7 ;
    int N13 = 2.5;        
    std::cout << "N10 = " << N10 << std::endl ;
    std::cout << "N11 = " << N11 << std::endl ;
    std::cout << "N12 = " << N12 << std::endl ;
    std::cout << "N13 = " << N13 << std::endl ;

    std::cout << "======================================" << std::endl ;

    std::cout << "Size Of  Int = " << sizeof(int) << std::endl ;
    std::cout << "Size Of  N1  = " << sizeof(N1) << std::endl ;

    std::cout << "======================================" << std::endl ;

    /************* Integer Modifiers **********************/
    /************ signed unsigned short long **************/

    int N14 = 15;            //By Default signed
    int N15 = -30; 

    signed int N16   {20};
    signed int N17   {-50};

    unsigned int N18  {50};
//  unsigned int N19  {-80} ;  // Error 
    unsigned int N20 = -80;    // Don't Make It

    std::cout << "N14 = " << N14 << std::endl ;
    std::cout << "N15 = " << N15 << std::endl ;
    std::cout << "N16 = " << N16 << std::endl ;
    std::cout << "N17 = " << N17 << std::endl ;
    std::cout << "N18 = " << N18 << std::endl ;
    std::cout << "N20 = " << N20 << std::endl ;

    std::cout << "======================================" << std::endl ;

    std::cout << "Size Of  N17 = " << sizeof(N17) << std::endl ;
    std::cout << "Size Of  N18  = " << sizeof(N18) << std::endl ;

    std::cout << "======================================" << std::endl ;

    short         N21 = 50;
    short int     N22 = 85;
    int           N23 = 75;
    long int      N24 = 500;
    long long int N25 = 8000;

    std::cout << "Size Of  N21 = " << sizeof(N21) << std::endl ;
    std::cout << "Size Of  N22 = " << sizeof(N22) << std::endl ;
    std::cout << "Size Of  N23 = " << sizeof(N23) << std::endl ;
    std::cout << "Size Of  N24 = " << sizeof(N24) << std::endl ;
    std::cout << "Size Of  N25 = " << sizeof(N25) << std::endl ;
        
    std::cout << "======================================" << std::endl ;

}