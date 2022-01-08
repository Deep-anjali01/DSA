#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        set<int>s;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        
        for(int i=0;i<m;i++)
        s.insert(b[i]);
        
        return s.size();
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
    cout<<"Enter No.of test cases"<<endl;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
        cout<<"Enter the size of arrays 1 and 2 respectively"<<endl;
	    cin >> n >> m;
	    int a[n], b[m];
	    
        cout<<"Enter the elements of array 1"<<endl;
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	    
        cout<<"Enter the elements of array 1"<<endl;
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
} 