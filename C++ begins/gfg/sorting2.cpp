#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int x,int y)
{
    return abs(x)<abs(y);
}

int main()
{
    int n;
    cout<<"\nEnter size of interger array : ";
    cin>>n;

    int arr[n];
    cout<<"\n\nEnter "<<n<<" integers for array : " <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\n Display Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    int a=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+a);
    cout<<"\n\n Display Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    sort(arr,arr+a,compare);
    cout<<"\n\n Display Sorted Array after absolute of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}