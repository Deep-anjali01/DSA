//que-Given a binary array A[] of size N. The task is to arrange the array in increasing order.

//Note: The binary array contains only 0  and 1.

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
    vector<int> v,v1,v2;
    
    for(int i=0;i<(binArray.size());i++)
    {
        if(binArray[i]==0)
        {v.push_back(binArray[i]);}
        else if(binArray[i]==1)
        {v1.push_back(binArray[i]); }
    }
     for(int i=0;i<(v.size());i++)
    {
       
        v2.push_back(v[i]);
    }
    
     for(int i=0;i<(v1.size());i++)
    {
        
        v2.push_back(v1[i]);
    }
    
    return v2;
    
    }
};
int main() {
	int t;
    cout<<"Enter the number of test cases-"<<endl;
	cin>>t;
	
	while(t--)
	{
	    int n;
        cout<<"Enter the number of elements in vector-"<<endl;
	    cin>>n;
	    vector<int> binArray(n);
	     cout<<"Input the vector"<<endl;
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	    Solution ob;  
	  	vector<int> result = ob.SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  