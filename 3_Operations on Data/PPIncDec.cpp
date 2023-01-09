#include <iostream>

int main(void)
{
    /************* Increment and Decremnt  ***************/
      /************* Postfix and Prefix  ***************/


    int N1 {6} , N2;
    /* Increment Postfix */
    std::cout << " Increment Postfix N1 = " << N1++ << std::endl;    //    N1 ==> 6  Assign then Inc after Line N1 ==> 7
    N2 = N1++;                                                       //    N2 ==> 7
    std::cout << "                   N1 = " << N1 << std::endl;      //    N1 ==> 8
    std::cout << "                   N2 = " << N2 << std::endl;      //    N2 ==> 7

    /* Decrement Postfix */
    std::cout << " Decrement Postfix N1 = " << N1-- << std::endl;    //    N1 ==> 8  Assign then Dec after Line N1 ==> 7
    N2 = N1--;                                                       //    N2 ==> 7
    std::cout << "                   N1 = " << N1 << std::endl;      //    N1 ==> 6
    std::cout << "                   N2 = " << N2 << std::endl;      //    N2 ==> 7

            /* N1 = 6    N2 = 7  */
    
    /* Increment Prefix */
    std::cout << " Increment Pretfix N1 = " << ++N1 << std::endl;    //    N1 ==> 6   Inc then Assign During Line N1 ==> 7
    N2 = ++N1;                                                       //    N2 ==> 8
    std::cout << "                   N1 = " << N1 << std::endl;      //    N1 ==> 8
    std::cout << "                   N2 = " << N2 << std::endl;      //    N2 ==> 8

    /* Decrement Pretfix */
    std::cout << " Decrement Prefix  N1 = " << N1-- << std::endl;    //    N1 ==> 8   Dec then Assign During Line N1 ==> 7
    N2 = --N1;                                                       //    N2 ==> 6
    std::cout << "                   N1 = " << N1 << std::endl;      //    N1 ==> 6
    std::cout << "                   N2 = " << N2 << std::endl;      //    N2 ==> 6







}