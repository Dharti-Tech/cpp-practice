//Assignment : Using static member function: 4. Armstrong number
#include<iostream>
using namespace std;

class Swap 
{
    public:
    static int n,k,num,digit,sum,power;
    
    static void main();
};

int Swap::n;
int Swap::k;
int Swap::num;
int Swap::digit;
int Swap::sum;
int Swap::power;

void Swap::main()
{
    sum=0;
    
  cout<<" Enter a number to find if it's armstong number or not and number of digits in the number entered=\n";
  cin>>n>>k;
  
  num=n;
  while(n>0)
  {
      digit=n%10;
  int power=1;
  for(int i=1;i<=k;i++)
  {
      power=power*digit;
  }
  sum=sum+power;
  n=n/10;
  }
  if(num==sum)
  {
      cout<<" It's an armstrong number.\n";
  }
  else
  {
      cout<<" It's not an armstrong number.\n";
  }
}

int main()
{
    Swap::main();
    
    return 0;
}