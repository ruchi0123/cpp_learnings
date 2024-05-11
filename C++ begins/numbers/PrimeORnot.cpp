#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(i<n && n%i==0)
        {
            cout<<"Non Prime Number";
            break;
        }
        else{
            cout<<"Prime Number";
            break;
        }
    }
    return 0;
}
