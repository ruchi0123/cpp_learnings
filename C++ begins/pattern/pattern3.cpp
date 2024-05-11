//Half Pyramid

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"entetr number of rows";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}