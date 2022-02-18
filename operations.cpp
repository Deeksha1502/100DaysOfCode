#include<iostream>
int main()
{
    int a,b;
    int sum,difference,product,quotient;
    std::cout<<"enter two numbers";
    std::cin>>a>>b; 
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    std::cout<<"the sum is "<<sum<<std::endl;
    std::cout<<"the difference is "<<difference<<std::endl;
    std::cout<<"the product is "<<product<<std::endl;
    std::cout<<"the quotient is "<<quotient<<std::endl;
}