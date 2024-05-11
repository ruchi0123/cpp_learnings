#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int p=1;
        for(int j=n-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<" "<<p<<"";
            p++;
        }
        cout<<endl;
        
    }
}