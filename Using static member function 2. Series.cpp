// Using static member function: 2. Series
#include<iostream>
using namespace std;

class Swap 
{
    public:
    static int i,j,l;
    
    static void main();
};

int Swap::i;
int Swap::j;
int Swap::l;

void Swap::main()
{
   cout<<" Enter the limit for the series=\n";
   cin>>l;
   
   for(i=0;i<=l;i++)
   {
       for(j=0;j<i;j++)
       {
           cout<<j<<" ";
       }
       cout<<"\n";
   }
   
   cout<<" Series 2=\n";
   
   for(i=0;i<=l;i++)
   {
       for(j=0;j<i;j++)
       {
           cout<<i<<" ";
       }
       cout<<"\n";
   }
}

int main()
{
    Swap::main();
    
    return 0;
}