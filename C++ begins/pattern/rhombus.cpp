#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
}