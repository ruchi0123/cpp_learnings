#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int marks[4]={19,27,39,48};
    int mathMarks[4];
    mathMarks[0]=89;
    mathMarks[1]=56;
    mathMarks[2]=67;
    mathMarks[3]=77;
    
    cout<<"Maths Marks :"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"\nMarks :"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // printing above statements using for loop

     cout<<"\n\nMaths Marks :"<<endl;
     for(int i=0;i<=3;i++)
        {
        cout<<mathMarks[i]<<endl;
        }

     cout<<" \nMarks :"<<endl;
     for(int i=0;i<=3;i++)
     {
        cout<<marks[i]<<endl;
     }

    //********POINTERS***********
cout<<"\n\nPOINTERS\n\n"<<endl;
    int* p= marks;

    cout<<p<<endl<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"*(p+1) : "<<*(p+1)<<endl;
    cout<<"*(p+2) : "<<*(p+2)<<endl;
    cout<<"*(p+3) : "<<*(p+3)<<endl;

    //basic increament and decreament of indexes and printing value at that index
    cout<<*(p++)<<endl;
    cout<<*(p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p--)<<endl;
    cout<<*(p)<<endl;

    return 0;
}