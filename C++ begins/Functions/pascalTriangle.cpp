/*
1
1   1
1   2    1
1   3    3    1
1   4    6    4   1
1   5   10   10   5   1
             
_ _ _    PASCAL TREE   _ _ _

here,
  j   1     2     3
i|__________________________
1|    0C0
2|    1C0   1C1
3|    2C0   2C1   2C2
4|    3C0   3C1   3C3
*/

#include<iostream>
using namespace std;


// Function for factorial
 int factorial(int n)
{
   int p=1;

  for(int i=2;i<=n;i++)
  {
    p*=i;
  }
  return p;
}

//combination function
long long int combination(int t,int s)
{
  long long int c=factorial(t)/(factorial(s)*factorial(t-s));
  return c;
} 


// main() prog for pascal tree
int main()
{
  int num;
  cout<<"How many rows of pascal tree do yu want to print?\n";
  cin>>num;
  cout<<"\n\n";

  for(int i=0;i<num;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<combination(i,j)<<"   ";
    }
    cout<<endl;
  }
  return 0;
}
