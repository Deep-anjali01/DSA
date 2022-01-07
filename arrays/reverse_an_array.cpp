#include<iostream>
using namespace std;
class reverse_an_array
{
    
public:

void reversed_array(int arr[],int size)
{

 for(int i =0,j=size-1; i<j; i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<endl;
}

};


int main()
{

    int n;
    cout<<"Enter the size of array"<<endl; 
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 reverse_an_array obj;
 obj.reversed_array(arr,n);
 
 for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

 
}