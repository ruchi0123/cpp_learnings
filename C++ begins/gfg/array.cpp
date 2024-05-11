#include<iostream>

using namespace std;

void fun(int arr[]) //array in parameter is always a pointer.
{
    int n =sizeof(arr)/sizeof(arr[0]); 
     // size of pointer /size of 1st element=8/4
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={10,20,30,40};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
       { cout<<arr[i]<<" ";}
    cout<<"\n";
    fun(arr);
    return 0;
}