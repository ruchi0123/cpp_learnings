#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    /*   **************  1. CONSTANTS  **************

    value of variables declared with cont will never change through out the program
    */
   
   char a='a';
   cout<<"The value of a is : "<<a<<endl;
   a='4';
   cout<<"\n value of a is : "<<a<<endl;

   //using constant
   const int b=78;
   cout<<"The value of b is : "<<b<<endl;

    //    b=45;
    //    cout<<"\n value of a is : "<<a<<endl;
    // this will show error : assignment of read-only variable 'b'
    
    
    /*   **************  2. Mainipulators  **************
    endl, setw(iomanip),
     */
       
    //      using setw
    
    int x=5, y=38, z=675;
    cout<<"The value of x without using setw is : "<<x<<endl;
    cout<<"The value of y without using setw is : "<<y<<endl;
    cout<<"The value of z without using setw is : "<<z<<endl;
    
    
    // setw() justifies the right allignment.
    cout<<"The value of x using setw is : "<<setw(8)<<x<<endl;
    cout<<"The value of y using setw is : "<<setw(8)<<y<<endl;
    cout<<"The value of z using setw is : "<<setw(8)<<z<<endl;
    

    //left right manipulator
    cout <<setw(20) <<left << "left" <<right <<"Right" <<endl;

    //setprecision()
    double value = 99.8918;
    std::cout << std::setprecision(4) << value << std::endl;

    //setfill()

    cout<<setfill('*')<<setw(20)<<"HELLO"<<endl;

    //setiosflags and resetiosflags
    

    /*   **************  3. Operator Precedence  **************
       when multiple operators are used without using brackets

       chart on site:  cppreference operator precedence 

       for equal precedence :
       where left to right is given start evaluating from left and moving towards right
       and vice versa

     */
    
    return 0;
}