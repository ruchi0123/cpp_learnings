#include<iostream>
using namespace std;

// structure is a user defined data type used to combine different types of data type
typedef struct employee
{
    int eID;
    char Grade;
    float salary;
}emp;


int main()
{
    struct employee rishu;
    emp rohan;
    emp sakshi;
    rishu.eID = 2112;
    rishu.Grade = 'A';
    rishu.salary = 50000000;

    cout<<"\n\n    Ishu details \n";
    cout<<"\n1. Ishu's Employee ID is : "<<rishu.eID<<endl;
    cout<<"\n2. Ishu's job grade is : "<<rishu.Grade<<endl;
    cout<<"\n3. Ishu's salary is is : "<<rishu.salary<<endl<<endl;
    return 0;
}