#include<iostream>
#include<conio.h>
int main()
{
    int total_seconds,minutes,hours,seconds;
    std::cout<<"Enter the total seconds";
    std::cin>>seconds;
    total_seconds=seconds;
    hours=seconds/3600;
    seconds=seconds%3600;
    minutes=seconds/60;
    seconds=seconds%60;
   
std::cout<<total_seconds<<" seconds= "<<hours<<" hour "<<minutes<<" minutes "<<seconds<<" seconds "<<std::endl;

}
