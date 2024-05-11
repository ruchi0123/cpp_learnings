#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sum(int n)
{
    bool check (int x, int y,int z)
    {
        int a = max(x, max(y,z));
        int b, c;
        if(a==x)
        {
            b=y;
            c=z;
        }
        else{
            
        }

    }


    int32_t main()
    {
        int x,y,z;
        cin>>x>>y>z;

        if(check(x,y,z))
        {
            cout<<"Pythagorian triplet";
        }
        else{
            cout<<"Not a pythagorian triplet";
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++)
    ans +=i;
    return ans;
}

int32_t main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
}
































}