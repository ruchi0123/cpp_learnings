#include<iostream>
using namespace std;

int prime(int num)
{
    bool sum=0;
    if(num==0)
    {
        sum=1;
    }
   else if(num==1)
    {
        cout<<num<<" is a co-prime number"<<endl;
        sum=1;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                sum=1;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if(sum==0)
    {
        cout<<num<<endl;
    }
    return num; 
}



int main()
{
    int a,b;
    cout<<"The range : "<<endl;
    cin>>a;
    cin>>b;
    for(int j=a;j<=b;j++)
    {
        prime(j);
    }
}