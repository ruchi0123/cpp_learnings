#include<iostream>
using namespace std;

int fib(int n)
{
    int a=0,b=1;
    int sum=a+b;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<"  ";
        a=b;
        b=sum;
        sum=a+b;     
    }
    return 0;
}

int main()
{
    int term;
    cout<<"How many terms of fibenacci sequence do you want to print? \n"<<endl;
    cin>>term;
    cout<<"\n\n";
    cout<<"fibonacci Series upto "<<term<<" terms : \n \n";
    fib(term);
    cout<<"\n\n\n";
    return 0;
}