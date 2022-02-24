#include<iostream>
using namespace std;
int main()
{
    int n,i,element,pos=0;
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
    pos=-1;
    for ( i = 0; i < n; i++)
    {
        if(element==a[i])
        {
            pos=i;
            break;
        }
        if(pos>=0)
        cout<<"The element"<<element<<"is present at position"<<pos<<endl;
        else
        cout<<"The search element"<<element<<"is not present"<<endl;
    }
    

   return 0;
       
}