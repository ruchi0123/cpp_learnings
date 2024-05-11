#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    int fact=1;
    int fact2=1;
    cout<<"n1 : ";
    cin>>n1;
    cout<<"n2 : ";
    cin>>n2;
    for(int i=n1; i>=1; i--)
    {
        fact *= i;
        
    }
    for(int j=n2; j>=1; j--)
    {
        fact2 *= j;
        
    }
    cout<<fact<<endl;
    cout<<fact2<<endl;
    return 0;
}