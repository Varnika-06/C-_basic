//NAME: Varnika Maurya
//PRN: 24070123160
//EXP-1
//Program-1
#include <iostream>  
using namespace std;
int main()
{
    int n1,n2, sum=0, sub=0,mul=0,div=0,mod=0;
    cout<<"Enter the first number \n";
    cin>>n1;
    cout<<"Enter the second number \n";
    cin>>n2;
    sum=n1+n2;
    cout<<"Sum of the two numbers= "<<sum<<"\n";
    sub=n1-n2;
    cout<<"Subtraction of the two numbers= "<<sub<<"\n";
    mul=n1*n2;
    cout<<"Multiplication of the two numbers= "<<mul<<"\n";
    div=n1/n2;
    cout<<"Division of the two numbers= "<<div<<"\n";
    mod=n1%n2;
    cout<<"Modulus of the two numbers= "<<mod<<"\n";
    return 0;
}
/*
PS C:\Users\DELL\Desktop> g++ L2.cpp -o L2
PS C:\Users\DELL\Desktop> .\L2.exe        
Enter the first number 
5
Enter the second number 
7
Sum of the two numbers= 12
Subtraction of the two numbers= -2
Multiplication of the two numbers= 35
Division of the two numbers= 0
Modulus of the two numbers= 5
*/
