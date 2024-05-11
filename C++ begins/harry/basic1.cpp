//system headerer file
#include<iostream>

/*    1  _______USER DEFINED HEADER FILE_____


#include"this.h"
this will produce error if "this.h"  is not present in the current directory
*/
using namespace std;


//   2  _____ Scope resolution operator use_____

int c=60;
int main(){
    int a,b,c;
    cout<<"Enter value for a : ";
    cin>>a;
    cout<<"\nEnter value for b : ";
    cin>>b;
    c=a+b;
    cout<<"\nSum of a and b is : "<<c;
    cout<<"\nValue of Global variable c is : "<<::c<<endl;

    /*  3     ________float and long double and double Literals_______

    by default any decimal in c++ prog is concidered double 
    example : 98.77 is of type double by default (size=8)

    if we want to specify it as
    floating number then we use suffix "F/f" (98.77f/98.77F instead of 98.77) size=4
    and similarly for long double we use suffix "L/l" (98.77l/98.77L) size=12

    */ 
   cout<<"The size of 34.5 is : "<<sizeof(34.5)<<endl;
   cout<<"The size of 34.5f is : "<<sizeof(34.5f)<<endl;
   cout<<"The size of 34.5F is : "<<sizeof(34.5F)<<endl;
   cout<<"The size of 34.5l is : "<<sizeof(34.5l)<<endl;
   cout<<"The size of 34.5L is : "<<sizeof(34.5L)<<endl; 


   /*    4    ************** Reference Variables *************

   different names used for same thing diff names pointing towards original variable
   */

  float x=56;
  float &y=x;
  cout<<"x : "<<x<<endl;  // original variable --> x
  cout<<"y : "<<y<<endl; // reference variable --> y
  cout<<"&x : "<<&x<<endl;
  cout<<"&y : "<<&y<<endl;


/*     5     ************** Typecasting *************

   changing one type of variable to another type is known as typecasting

   int(x)=(int)x
*/

int p=8;
float q=56.723;
int k=int(q);

cout<<"The value of p is: "<<p<<endl;
cout<<"The value of p (as float) is: "<<(float)p<<endl;

cout<<"The value of q is: "<<q<<endl;
cout<<"The value of q (as int) is: "<<int(q)<<endl;

cout<<endl<<"<<k;
    return 0;
}

