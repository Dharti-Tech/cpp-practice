//Assignment 3: Using inline function: 2. Square Root Program
 
 #include<iostream>
 #include<math.h>
 
 inline float root(int n)
 {
     float root;
     root=sqrt(n);
     
     return root;
 }
 
 int main()
 {
     int n;
     std::cout<<"Enter the value of a number to find it's square root =\n";
     std::cin>>n;
     
     std::cout<<" Root = \n"<<root(n);
     return 0;
 }