#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<std::setiosflags(ios::left);
    for(int i=0;i<6;i++)          // this will print 6 rows of (HW      HW       HW       HW)
    {
        for(int j=0;j<4;j++)      //fill hello world in 4 column  (HW      HW       HW       HW)
        {
            cout<<setw(30)<<"Hello World";
        }     
        cout<<endl;  // this will end line after printing hw 4 times in a row
    }
    return 0;
}