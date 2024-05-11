#include<iostream>
#include<memory>
using namespace std;

class Test
{
    int x;
public:
    Test(int a=0)
    {
        x=a;
        cout<<"Constructor\n";
    }
    ~Test()
    {
        cout<<"Destructor\n";
    }
    
    func()
    {
        cout<<x<<endl;
    }
};

int main()
{
    cout<<"Main Function Begins\n";
    {
        unique_ptr<Test> x= make_unique<Test>(20);
        x -> func();
    }
    cout<<"Main Ends\n";
    return 0;
}