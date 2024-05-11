#include<iostream>
using namespace std;


void linear_1(int n)  //n  --> O(n)
{
    
        for(int j=0; j<n; j++)
    {
        cout << j << endl;
    }
    
}

void linear_2(int n)  //2n  --> O(n)
{
    for(int i=0; i<n; i++)
    {
       cout << i << endl;
    }
    for(int j=0; j<n; j++)
    {
       cout << j << endl;
    }

}


void polynomial(int n) //n^2  --> O(n^2)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
    {
        cout <<i<<"  " << j << endl;
    }
    }
}


void drop_non_dominant(int n) //n^2 + n  --> O(n^2)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
    {
        cout <<i<<"  " << j << endl;
    }
    }

    for(int k=0; k<n; k++)
    {
        cout<<k<<endl;
    }
}

int constant(int n)
{
    cout<<n+n;
    return n+n;
}


int main()
{
    int n;
    cout<<"Enter value for n : ";
    cin>>n;

    cout<<"\n\n Linear time with n outputs, and complexity is O(n)\n";
    linear_1(n);
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _\n\n"<<" Linear time with 2n outputs, but complexity is O(n) due to drop constants\n";
    linear_2(n);
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _\n\n"<<" Polynomial with n^2 outputs, and complexity is O(n^2)\n";
    polynomial(n);
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _\n\n"<<"Polynomial time with n^2+n outputs, but complexity is O(n^2) due to drop dominant term\n";
    drop_non_dominant(n);
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _\n\n"<<" Constant time with 1 outputs, and complexity is O(1), returns only one output for any value of n\n \n";
    constant(n);
}