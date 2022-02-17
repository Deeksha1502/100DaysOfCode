#include<iostream>
int main()
{
    float principal_amount,net_amount,rate,ci;
    int time,year;
    std::cout<<"Enter principal amount time and rate"<<std::endl;
    std::cin>>principal_amount>>rate>>time;
    net_amount=principal_amount;
    year=1;
    while (year<=time)
    {
      net_amount=net_amount*(1+rate/100);
      year++;
    }
    ci=net_amount-principal_amount;
    std::cout<<"compound intrest ="<<ci<<std::endl;
    std::cout<<"net amount ="<<net_amount<<std::endl;


}