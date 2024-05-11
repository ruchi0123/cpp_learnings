#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
         int p=1;
        for(int j=1;j<=i;j++)
        {
           
            cout<<p<<" ";
            p++;
        }
        cout<<endl;
    }
}