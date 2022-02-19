#include<iostream>
int main()
{
    int position,element,n,i;
    int a[20];
    std::cout<<"enter the number of elements in the array";
    std::cin>>n;
    std::cout<<"enter the array elements";
    for ( i = 0; i < n; i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"the array elements are ";
    for(i = 0; i < n; i++)
    {
    std::cout<<a[i]<<std::endl;
    }
    std::cout<<"Enter the position where the element has to inserted ";
    std::cin>>position;
    if(position<0 && position>n)
    std::cout<<"cannot enter element";
    else
    std::cout<<"Enter the element";
    std::cin>>element;
    {
        for(i=n-1;i>=position;i--)
        a[i+1]=a[i];
    }
    a[position]=element;
    n++;
     std::cout<<"the array elements are ";
    for(i = 0; i < n; i++)
    {
    std::cout<<a[i]<<std::endl;
    }
     
}