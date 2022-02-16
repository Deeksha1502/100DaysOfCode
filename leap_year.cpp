#include<iostream>
int main()
{
    int year;
    std::cout<<"Enter the year";
    std::cin>>year;
    if(year%4==0 && year%100!=0)
    std::cout<<"it is a leap year"<<std::endl;
    else
    std::cout<<"it is not a leap year"<<std::endl;
}