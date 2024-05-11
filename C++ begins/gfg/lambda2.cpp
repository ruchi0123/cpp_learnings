// use of lambda exp after assigning it a variable
// usin captuure listy
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={-20, 10, 5, -30};
   
    int n= sizeof(arr)/sizeof(arr[0]);
    auto myexp=   [](int a, int b){
        
        return abs(a)<abs(b);
    };
    sort(arr, arr+n, myexp);
    for(auto x: arr)
        cout<<x<<" ";
    return 0;
}