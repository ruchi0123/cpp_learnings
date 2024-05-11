//Pointer is a DATATYPE
/*
It is a type of variable which holds the address of other data type 

int* b = &a;

int* is a type of variable which holds the address of int datatype this variable is named 'b'.

*/

#include<iostream>

using namespace std;

int main()
{
    int a=8;  
    int* b=&a; // & --> address of the operator   * --> dereference operator

    //  & --> address of the operator
    cout<<"the address of a is : "<<&a;
    cout<<"\nthe address of a is : "<<b;
    cout<<"\nthe address of b is : "<<&b;


    //* --> (value at) dereference operator
    cout<<"\n\nthe value at address b is: "<<*b; // tellls value at 'a'

    //pointers to pointers :-  pointer that stores the address of pointer

    int** c=&b;
    cout<<"\nthe value at address stored in c is: "<<*c;// this tells value at 'b'
    cout<<"\n\nthe address of b is : "<<c;
    cout<<"\nthe value at address stored in b is: "<<**c;

    return 0;
}