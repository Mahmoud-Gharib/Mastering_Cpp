#include <iostream>
#include <iomanip>
int main(void)
{
    /************* Output Formating  ***************/
    /*(1) std::endl   New Line       \n       ==> Header #include <iostream> */
    std::cout << "Mahmoud ";
    std::cout << "Gharib" ;
    std::cout << std::endl;
    std::cout << "Mahmoud\n";
    std::cout << "Gharib\n";
    std::cout << "Mahmoud " << std::endl;
    std::cout << "Gharib " << std::endl;

    std::cout << "===========================================" << std::endl;

    /*(2) std::flush      ==> Header #include <iostream> */
    std::cout << "Mahmoud Gharib" << std::endl << std::flush;

    std::cout << "===========================================" << std::endl;

    /*(3) std::setw()  ==> set width  std::right  std::left  ==> Header #include <iomanip> */
    int width {15};

    std::cout << std::right;
    std::cout << std::setw(width) <<"Name :" << std::setw(width)<<"Age :"<< std::endl ;
    std::cout << std::setw(width) <<"Mahmoud" << std::setw(width)<< 25 << std::endl ;
    std::cout << std::setw(width) <<"Mustafa" << std::setw(width)<< 55 << std::endl ;
    std::cout << std::setw(width) <<"Gharib" << std::setw(width)<< 75 << std::endl ;
      
    std::cout << std::endl;

    std::cout << std::left;
    std::cout << std::setw(width) <<"Name :" << std::setw(width)<<"Age :"<< std::endl ;
    std::cout << std::setw(width) <<"Mahmoud" << std::setw(width)<< 25 << std::endl ;
    std::cout << std::setw(width) <<"Mustafa" << std::setw(width)<< 55 << std::endl ;
    std::cout << std::setw(width) <<"Gharib" << std::setw(width)<< 75 << std::endl ;

    std::cout << "===========================================" << std::endl;

    /*(4) std::setfill()  ==> set fill   ==> Header #include <iomanip> */

    std::cout << std::endl;

    std::cout << std::left;
    std::cout << std::setfill('*');
    std::cout << std::setw(width) <<"Name :" << std::setw(width)<<"Age :"<< std::endl ;
    std::cout << std::setw(width) <<"Mahmoud" << std::setw(width)<< 25 << std::endl ;
    std::cout << std::setw(width) <<"Mustafa" << std::setw(width)<< 55 << std::endl ;
    std::cout << std::setw(width) <<"Gharib" << std::setw(width)<< 75 << std::endl ;

    std::cout << "===========================================" << std::endl;

    /*(5) std::boolalpha std::noboolalpha  ==> set   ==> Header #include <iostream> */

    bool N1 = true;
    bool N2 = false;

    std::cout << std::boolalpha;
    std::cout << "N1 = " << N1 << std::endl;
    std::cout << "N2 = " << N2 << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "N1 = " << N1 << std::endl;
    std::cout << "N2 = " << N2 << std::endl;

    std::cout << "===========================================" << std::endl;

    /*(6) std::showpos std::noshowpos  ==>   ==> Header #include <iostream> */

    int N3 = 25;
    int N4 = -25;

    std::cout << std::showpos;
    std::cout << "N3 = " << N3 << std::endl;
    std::cout << "N4 = " << N4 << std::endl;

    std::cout << std::noshowpos;
    std::cout << "N3 = " << N3 << std::endl;
    std::cout << "N4 = " << N4 << std::endl;

    std::cout << "===========================================" << std::endl;

     /*(7) std::showbase std::noshowbase  ==> std::dec  std::oct  std::hex   ==> Header #include <iostream> */

    int N5 = 15;
    std::string S1 = "Mahmoud Gharib";

    std::cout << std::showbase;
    std::cout << std::uppercase;
    std::cout << "S1 = " <<  S1 << std::endl;       // has no affect

    std::cout << "N5 = " << std::dec << N5 << std::endl;
    std::cout << "N5 = " << std::oct << N5 << std::endl;
    std::cout << "N5 = " << std::hex << N5 << std::endl;

    std::cout << std::noshowbase;
    std::cout << "N5 = " << std::dec << N5 << std::endl;
    std::cout << "N5 = " << std::oct << N5 << std::endl;
    std::cout << "N5 = " << std::hex << N5 << std::endl;

    std::cout << "===========================================" << std::endl;

     /*(8) std::setprecision()   ==> Header #include <iomanip> */

    double D1 = 25.52;
    std::cout << std::setprecision(20) << "D1 = " << D1 << std::endl;

    std::cout << "===========================================" << std::endl;
}