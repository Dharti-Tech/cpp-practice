//Assignment 1: Using call by value: Programs: 3.Leap Year

#include<iostream>

int main()
{
    int y;
    
    void year(int);//function declaration
    
    std::cout<<"\n Enter the value of a year =";
    std::cin>>y;
    
    year(y);
    
    return 0;
}

void year(int x)
{
   if(x%400==0)
   {
       std::cout<<x<<" is leap year.";
   }
   else
   {
       std::cout<<x<<" is not a leap year.";
   }
}