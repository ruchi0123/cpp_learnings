#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
              return false;
            }
        }
        return true;
}


int main()
{
    int a,b;
    cout<<"The range : "<<endl;
    cin>>a;
    cin>>b;
    for(int j=a;j<=b;j++)
    {
        if(isPrime(j))
        {
            cout<<j<<endl;
        }
    }
    
    return 0;
}