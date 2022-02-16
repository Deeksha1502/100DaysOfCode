#include<iostream>
int main()
{
    int breadth, height;
    std::cout<<"Enter the values of breadth and height:";
    std::cin>>breadth>>height;
    if(breadth==height)
    std::cout<<"It is a square";
    else
    std::cout<<"it is a rectangle";
}