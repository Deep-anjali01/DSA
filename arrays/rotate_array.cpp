#include <iostream>
using namespace std;

int main() {
    
    int t;
    cout<<"Enter number of test cases"<<endl;
    cin>>t;
    
    while(t--)
    {
      long long int n, d;
      cout<<"Enter the size of array and number of elements to be rotated"<<endl;
      cin>>n>>d;
      int arr[n];
      cout<<"Input the array"<<endl;
      for(int i=(n-d);i<n;i++)
      {
          cin>>arr[i];
      }
      
      for(int i=0;i<(n-d);i++)
      {
          cin>>arr[i];
      }
      
      
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    
	//code
	return 0;
}