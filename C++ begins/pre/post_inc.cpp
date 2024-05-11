//pre-increment and post-increment operator

#include<iostream>
using namespace std;

int main()
{
    int a=9;
    int b=7;
    
    a=a++  +  ++a;
// a=1 (a=a(1)+1=2) + (a(2)+1=3)
    b=b-- - --b;
    cout<<"a = "<<a << endl; 
    cout<<"b = "<<b; 
}