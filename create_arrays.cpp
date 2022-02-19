#include<iostream>
int main()
{
    int a[20];int n,i;
    std::cout<<"Enter the number of elements";
    std::cin>>n;
    std::cout<<"enter the array elements";
    for (i = 0; i < n; i++)
    {
       std::cin>>a[i];
    }
    std::cout<<"the array elements are ";
    for(i = 0; i < n; i++)
    {
    std::cout<<a[i]<<std::endl;
    }
}
    

  
