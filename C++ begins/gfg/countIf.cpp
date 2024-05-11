#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //constructing vector

    vector<int> vect{14, 3, 45, 6, 87, 10};

    int r=count_if(vect.begin(), vect.end(), [](int x){return x<=10;});
    cout << r;
    return 0;
}