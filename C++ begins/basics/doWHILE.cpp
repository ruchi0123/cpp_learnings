//DO WHILE LOOP: body executes first then condition is checked.. itn this loop executes atleast once


#include<iostream>
using namespace std;
 int main()
    {
        int n;
        cout<<"Enter number:";
        cin>>n;

        cout<<"Numbers:\n";
        do{
            cout<<n<<endl;
          }while(n>0);
        return 0;
    }