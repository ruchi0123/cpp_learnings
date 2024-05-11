// Sum of n natural numbers

#include<iostream>
using namespace std;
int sum(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    
    return sum;
}
int main()
{
    int n;
    
    cout<<"enter a natural number for sum of numbers upto there\n";
    cin>>n;
    cout<<"\nsum of numbers upto "<<n<<" is : \n"<<sum(n)<<"\n\n";
    return 0;
}