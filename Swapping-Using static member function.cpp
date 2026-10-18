//Assignment : Using static member funcyion: 1. Swapping
#include<iostream>
using namespace std;

class Swap 
{
    public:
    static int a,b,c;
    
    static void main();
};

int Swap::a;
int Swap::b;
int Swap::c;

void Swap::main()
{
    cout<<" Enter the values of a and b respectively=\n";
    cin>>a>>b;
    
    c=a;
    a=b;
    b=c;
    
    cout<<" values of a and b after the swapping =\n"<<a<<" "<<b;
}

int main()
{
    Swap::main();
    
    return 0;
}