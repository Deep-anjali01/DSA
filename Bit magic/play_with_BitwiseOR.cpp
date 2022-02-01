//que-You are given an array arr[], you have to re-construct an array arr[].The values in arr[] are obtained by doing OR(bitwise or) of consecutive elements in the array.

#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int main()
{
    
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin>> t;
    while(t--)
    {
        int n;
        cout<<"Enter the number of elements-"<<endl;
        cin >> n;
        int arr[n];
        
        cout<<"Input the array-"<<endl;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    }

}
// } Driver Code Ends


int* game_with_number(int arr[], int n)
{
    
    
    
    
        for(int i=0;i<(n-1);i++)
        {
            arr[i] |= arr[i+1];
            
        }
    
    
    return arr;
    
}
