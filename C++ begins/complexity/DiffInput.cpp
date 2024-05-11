#include<iostream>
using namespace std;
void linear(int a, int b)
{
    for(int i=0; i<a; i++)
    {
        cout << i <<endl;
    }
    for(int j=0; j<b; j++)
    {
        cout << j <<endl;
    }
}

void polynomial(int a, int b)
{
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
        cout << i <<"   "<< j <<endl;
        }
    }
}

int main()
{
    cout<<"linear time with different input : \n";
    linear(5,10);
    cout<<"polynomial time with different input : \n";
    polynomial(5,10);
}