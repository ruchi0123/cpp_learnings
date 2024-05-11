#include<iostream>
#include<algorithm>

using namespace std;

int add(int x, int y)
{
    return x+y;
}
int multiply(int x, int y)
{
    return x*y;
}
int compute(int x, int y, int (*func_ptr)(int,int))
{
    return func_ptr(x,y);
}

int main()
{
    int a,b;
    cout<<"Enter Two integers : "<<endl;
    cin>>a>>b;

    cout<<"Sum of two integers is : "<<compute(a,b,add)<<endl;
    cout<<"Product of two integers is : "<<compute(a,b,multiply)<<endl;

   
    return 0;
}