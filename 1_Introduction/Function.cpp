#include <iostream>

int Add( int x , int y);

int main(void)                                                  
{
    int F_Num = 25;
    int S_Num = 45;
    int Sum = Add(F_Num, S_Num);
    std::cout << "Sum = "<< Sum << std::endl;
    return 0;    
}

int Add( int x , int y)
{
    return x + y;
}