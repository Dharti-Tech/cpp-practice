//Assignment : Using static member function: 3. Factorail
#include<iostream>
using namespace std;

class Swap 
{
    public:
    static int fact,n;
    
    static void main();
};

int Swap::n;
int Swap::fact;

void Swap::main()
{
  cout<<" Enter a value of number to find it's factorial=\n";
  cin>>n;
  
  fact=1;
  while(n>0)
  {
  fact=fact*n;
  n--;
  }
  
  cout<<" factorail=\n"<<fact;
}

int main()
{
    Swap::main();
    
    return 0;
}