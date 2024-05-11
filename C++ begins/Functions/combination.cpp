/* 

nCr = {n!/[(n-r)!*r!]} 

n represents the total number of objects that are present in a set.
And r represents the number of selected objects arranged in a certain order.


*/

#include<iostream>
using namespace std;

 long long int factorial(int num)
{
   long  long int product=1;
     for (int i = num; i >= 1; i--)
     {
        product *=i;
     }
    return product;
}

 int combination(int n, int r)
   {
    
    long int nCr =  factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"\n n : "<<factorial(n)<<"\n n-r : "<<factorial(n-r)<<"\n n : "<<factorial(r);
    cout<<"\n \n Combination for the given values of n and r is : "<<nCr;
    return nCr;
   }

    int main()
    {
        int total_obj, slctd_obj;

        cout<<"To find combination\n";
        
        cout<<"Total number of objects : ";
        cin>>total_obj;

        cout<<"\n Selected number of objects : ";
        cin>>slctd_obj;

        cout<<endl<<endl;

        combination(total_obj, slctd_obj);
        return 0;
    }