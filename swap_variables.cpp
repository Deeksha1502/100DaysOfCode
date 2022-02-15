#include<iostream>
#include<conio.h>

int main()
{
    int a,b,temp;
    std::cout<<"Enter two numbers";
    std::cin>>a>>b;
    std::cout<<"before interchanging: a="<<a<<"and b="<<b<<std::endl;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"After interchanging: a="<<a<<"and b="<<b<<std::endl;

}