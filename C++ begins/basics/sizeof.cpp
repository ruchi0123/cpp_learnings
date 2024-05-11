#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"value:";
    cin>>a;
    cout<<"size of int is: "<<sizeof(a)<<endl;

    float f;
    cout<<"size of float is: "<<sizeof(f)<<endl;

    char p;
    p='c';
    cout<<"size of char is: "<<sizeof(p)<<endl;

    bool t;
    t=0;
    cout<<"size of boolean is: "<<sizeof(t)<<endl;

    short int x;
    long int y;

    cout<<"size of short int is: "<<sizeof(x)<<endl;
    cout<<"size of long int is: "<<sizeof(y)<<endl;
    cout<<a-6;
    return 0;
}