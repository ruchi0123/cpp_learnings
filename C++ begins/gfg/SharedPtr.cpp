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
    
    shared_ptr<Test> x= make_shared<Test>(20);
    shared_ptr<Test> y=x;
    x -> func();
    y -> func();
    
    // use_count() is used to count number of pointers pointing on the same object
    // use_count() can be used only with shared and weak pointers
    cout<<x.use_count()<<endl;
    cout<<y.use_count()<<endl;
    return 0;
}