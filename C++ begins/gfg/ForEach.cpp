#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //constructing vector

    vector<int> vect{10,20,30,40,50};

    // using for each function from beginning to the end to double elements of vector
    for_each(vect.begin(), vect.end(),[](int &x)
    {
        x*=2;
    } );

    // using for each function from beginning to the end to print elements of vector
    for_each(vect.begin(), vect.end(),[](int &x)
    {
        cout<< x <<"  ";
    } );
    return 0;
}