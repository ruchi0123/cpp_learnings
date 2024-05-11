// vectors with user input

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout<<"\nnumber of elements you want to enter in vector of integer : ";
    cin>>n;
    cout<<"\n\nEnter "<< n <<" elements of vector\n\n";
    for(int i=0; i<n; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"\n entered elements :  ";
    for(auto x: v)
        cout<<x<<"  ";
}