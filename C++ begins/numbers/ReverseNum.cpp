#include<iostream>
using namespace std;
int main()
{
    int n;
    int rev=0; //reverse
    cout<<"n : ";
    cin>>n;
    while(n>0)
    {
        int LD;  //LD- last digit
        LD=n%10;
        rev=rev*10+LD;
        n=n/10;
    }
    cout<<rev;
}