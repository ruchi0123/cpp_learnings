#include<iostream>

using namespace std;
int average(int arr[], int n) throw(string) 
// throw key word can be used in func declaration that indicates that this function might throw string exception
// miultiple datatype throw can be written as throw(int), throw(float), throw(...)
// (...)  : used for all data types
{
    if(n==0)
    {
        throw string("\n\nArray size is zero");
    }
    else{
        int sum=0;
        for (int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        return sum/n;
    }
}
int main()
{
    int arr[]={4,5,9};
    int n=0;
    try
    {
        int res=average(arr,n);
        cout << res;
    }
    catch(string &e)
    {
        cout<<e;
    }
    cout<<"\n\nBye\n\n";
    return 0;
}