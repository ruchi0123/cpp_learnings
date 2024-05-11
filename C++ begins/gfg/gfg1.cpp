#include<iostream>

using namespace std;

/*   try :: the code that may throw exception, used before a block

     throw :: used to throw an exception
             after throw keyword we can write any variable of any data type 
             and this variable stores the informatiob about an exception

     catch :: one or more catch blocks are used to handle exception, used before a block 
             and used after the try, there can be multple catch block aftre a try block 
             that might throw different kind of exceptions
 */


// Example code :

int main()
{
    int x,y;
    cout<<"x?   y?";
    cin>>x>>y;
    try{
        if(y==0)
        {
            throw 0;
        }
        else
        {
            cout<<"Result is "<<x/y;
        } 
    }
    catch(int x)
    {
        cout<<"Divide is zero";
    }
    return 0;
}