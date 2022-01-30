//Que-Given an unsorted array arr[] of size N.Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
    int temp=0,a[n];
    for(int i=0;i<n;i++)
    { a[i]=arr[i];}
    
    for(int i=0;i<(n-d);i++)
    {
        
        arr[i]=a[i+d];
        
    }
    for(int i=(n-d);i<(n);i++)
    {
        
        arr[i]=a[i-(n-d)];
    
    }
    
   
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends