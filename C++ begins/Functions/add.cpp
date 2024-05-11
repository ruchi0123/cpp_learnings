// Write a FUNCTION to add two numbers

#include<iostream>
using namespace std;

void print(int num)
{
    cout<<num<<endl;
}

int add(int n1, int n2)
{
    cout<<"the two number received for addition are :"<<endl;
    print(n1);
    print(n2);
    int sum=n1+n2;
    cout<<"The sum od two number is : ";
    print(sum);
    return sum;
}

int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;

    cin>>a;
    cin>>b;
    add(a,b);
}


