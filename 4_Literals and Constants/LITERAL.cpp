#include <iostream>

int main(void)
{
            /************ Literal ************/
     /***** any Decimal Number store in size of integer *****/
        /***** any Real Number store in size of Double *****/

            /************ Suffix ************/
    /***** any Decimal Number store in size of integer *****/
    /*  
        U   ==>  Unsigned Int
        UL  ==>  Unsigned Long
        L   ==>  Long (Int , Double)
        LL  ==>  Long Long
        ULL ==>  Unsigned Long Long
        F   ==>  Float
    */

    char N1 = 25;
    signed char N2 = -35;
    unsigned char N3 = 127;

    short N4 = 280;
    short int N5 = 280;
    signed short N6 = -300;
    unsigned short N7 = 350;
    signed short int N8 = -300;
    unsigned short int N9 = 350;

    int N10 = 280;
    signed  int N13 = -300;
    unsigned  int N14 = 350;

    long int N15 = 280;
    signed long int N16 = -300;
    unsigned long int N17 = (350);

    long long int N18 = 280;
    signed long long int N19 = -300;
    unsigned long long int N20 = (350);

    float N21 = 150.55;
    double N22 = 150.55;
    long double N23 = 2005.48;

    std::string N24 = "Mahmoud Gharib";

    std::cout <<"Size of Decimal Number ==> " << sizeof(25) << " Bytes " << std::endl;      // ==> Int
    std::cout <<"Size of Real Number    ==> " << sizeof(25.0) << " Bytes " << std::endl;    // ==> Double
    std::cout <<" ========================================================= " << std::endl;

    std::cout <<"Size of Unsigned Int Number ==> " << sizeof(25U) << " Bytes " << std::endl;            // ==> 4 Bytes
    std::cout <<"Size of Long Number    ==> " << sizeof(25L) << " Bytes " << std::endl;                 // ==> 4 Bytes
    std::cout <<"Size of Unsigned Long Number    ==> " << sizeof(25UL) << " Bytes " << std::endl;       // ==> 4 Bytes
    std::cout <<"Size of Long Long Number ==> " << sizeof(25LL) << " Bytes " << std::endl;              // ==> 8 Bytes
    std::cout <<"Size of Unsigned Long Long Number    ==> " << sizeof(25ULL) << " Bytes " << std::endl; // ==> 8 Bytes   
   
    std::cout <<" ========================================================= " << std::endl;

    std::cout <<"Size of Float Number ==> " << sizeof(25.0F) << " Bytes " << std::endl;             // ==> 4 Bytes
    std::cout <<"Size of Double Number    ==> " << sizeof(25.0) << " Bytes " << std::endl;          // ==> 8 Bytes
    std::cout <<"Size of Long Double Number    ==> " << sizeof(25.0L) << " Bytes " << std::endl;    // ==> 16 Bytes

}