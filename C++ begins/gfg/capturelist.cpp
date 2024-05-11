#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int x=10, y=20, m=100, n=150 ;
    static int p=15, q=25;
    auto lambda1 = [&](int a)
    {
        x+=a;
        y+=a;
    };
    
    auto lambda2= [=]()
    {
        cout<<"\nlambda 2 : "<<m<<" "<<n<<" " <<x<<" "<<y<<endl;
    };

    // call by value copies are created no change in original value
    auto lambda3 = [=](int a)
    mutable{
        m=m+a;
        n=n+a;
        cout<<"\nlambda 3 : "<<m<<" "<<n<<endl;
    };
    auto lambda4 = [](int a)
    {
        p=p+a;
        q=q+a;
    };

    lambda1(30); cout<<"\nlambda 1 : "<<x<<" "<<y<<endl;
    lambda2();  
    lambda3(5); cout<<"\nlambda 3 : "<<m<<" "<<n<<endl; 
    lambda4(15); cout<<"\nlambda 4 : "<<p<<" "<<q<<endl;
}