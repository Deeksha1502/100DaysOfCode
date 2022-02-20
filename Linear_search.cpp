#include<iostream>
using namespace std;
int main()
{
    int n,i,element,flag=0;
    int a[20];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nThe elements are"<<endl;
    for (i = 0; i < n; i++)
    {
      cout<<a[i];
    }
    cout<<"\nEnter the element to search"<<endl;
    cin>>element;
 for(i=0;i<n;i++)
{
    if(a[i]==element)
    {
    flag=element;
    cout<<"\nElement found";
    break;
    }
    else
     cout<<"Element not found";
} 
 
  
 
    return 0;
       
}