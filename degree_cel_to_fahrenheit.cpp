#include<iostream>
#include<iomanip>
int main()
{
    float cel,fahrenheit;
    std::cout<<"Enter the values in celsius";
    std::cin>>cel;
    fahrenheit=(cel*(5/9)+32);
    std::cout<<fahrenheit<<"F = "<<cel<<"C"<<std::endl;

}