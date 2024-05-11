#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={-20, 10, 5, -30};
    int n= sizeof(arr)/sizeof(arr[0]);
// passing lambda exp in parameter instead of creating seperate function for sorthing according to absolute value
// [ capture list ]( parameters )  -> returntype {   function body  }
// return type is not required in such small exp where it can be recognised by compiler
    sort(arr, arr+n, [](int a, int b){return abs(a)<abs(b);});
    // now when ever sort function does comparision it invokes lambda exp
    for(auto x: arr)
        cout<<x<<" ";
    return 0;
}

// lambda expression cannot access even local variables which are present in same block of code
// lambda exp can only access parameters passed by sort func only(here)
// so to use those local variables capture list is used 