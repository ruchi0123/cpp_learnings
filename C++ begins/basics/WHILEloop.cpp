//WHILE LOOP : take input from user untill it provides negative number
/*
Only a condition is given and loop runs till condition is true, 
As condition turns false the loop terminates
*/

// Condition is checked 1st then body is executed

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a numbers: ";
    cin>>n;

    while(n>0)
    {
        cout<<n<<"\n";
        cin>>n;
    }
    return 0;
}