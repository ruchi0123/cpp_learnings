#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={-1,2,-9,7,4};
   
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"\n Unsorted Array\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    cout<<"\n\n\n Sorted Array\n";
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}