#include<iostream>
using namespace std;

int factorial(int n)
{
    int product=1;
    for(int i=n;i>=1;i--)
    {
        product *=i;
    }
    cout<<product<<endl<<endl;
    return 0;
}

int main()
{
    int num;
    cout<<"enter number whose factorial you want : ";
    cin>>num;
    cout<<"\n factorial of "<<num<<" is : \n";
    factorial(num);
    return 0;
}