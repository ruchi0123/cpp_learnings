#include<iostream>

using namespace std;


class SP
{
    int *ptr;
public:
// constructor
explicit SP(int* p = NULL)
{
    ptr=p;
}
// destructor
~SP()
{
    delete ptr;
}
// overloading dereferencing operator
int &operator *()
{
    return *ptr;
}
};

int main()
{
    SP sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;    
}