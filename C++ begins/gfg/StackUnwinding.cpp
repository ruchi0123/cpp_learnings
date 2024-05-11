/*
    Stack Unwinding says that if a function throws an exception
    and it does not handle the exception then the control goes to the caller
    and if caller does not handels excetion then control goes to the caller of the caller
    and we keep on searching the handler for the exception in the function call stack 
    untill we find the handler.. once handler is found our control goesto handler
    and program continues after the handler
*/

#include<iostream>

using namespace std;

void f1() throw(int){
    cout<<"F1 begins\n\n";
    throw 100;
    cout<<"F1 ends here\n\n";
}
void f2() throw(int){
    cout<<"F2 begins\n\n";
    f1();
    cout<<"F2 ends here\n\n";
}
void f3() throw(int){
    cout<<"F3 begins\n\n";
    try
    {
        f2();
    }
    catch (int x)
    {
        cout<<"Caught Exception\n\n";
    }
    cout<<"F3 ends here\n\n";
}

int main()
{
    cout<<"\n\n";
    f3();
    cout<<"...BYE...\n";
    return 0;
}