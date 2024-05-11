#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
   int n;
    cout<<" n : ";
    cin>>n;
    double  sum=0; 
    
    int no=n;
    int  num=n;

    int  dig=0;


    while(no>0)
    {
        dig++;
        no=no/10;   
    }

    while(num>0)
    {
        int lastd=num%10;
        cout<<"power: "<< pow(lastd,dig)<<endl;
        sum+=pow(lastd,dig);
        num=num/10;
        cout<<"num "<<num<<endl;
        cout<<"sum "<<sum<<endl;
        cout<<"lastd "<<lastd<<endl;
    }
     
     if(sum==n)
     {
        cout<<"....Armstrong Number...."<<endl;
     }
     else{
        cout<<"Not An Armstrong Number"<<endl;
     }
   
     return 0;
}