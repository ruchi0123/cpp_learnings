/*
    In cp we can throw exception of :
    primitive datatype and also non primitive datatype that is user defined
*/

  #include<iostream>
  
  using namespace std;

    class ArraySizeZeroException{};
    class ArraySizeNegativeException{};


int avg(int arr[], int n)
{
    if (n==0) throw ArraySizeZeroException{};
    if (n<0) throw ArraySizeNegativeException{};
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=arr[i];
    }
    cout << "sum is : ";
    return sum/n;
}
  
  int main()
  {
    int n;
    cout<<"\n\n n? ";
    cin >> n;
    int *arr= new int[n];
    for (int i=0; i<n; i++)
    {
        cout<<"\nenter array elements for index "<<i<<" : ";
        cin>>arr[i];
    }
    try
    {
        int res=avg(arr,n);
        cout<<res;
    }
    catch(ArraySizeZeroException& e1)
    {
        cout<<"\n\nArray size is zero";
    }
    catch(ArraySizeNegativeException& e2)
    {
        cout<<"\n\nArray size is nagative";
    }
    
    return 0;
  }
