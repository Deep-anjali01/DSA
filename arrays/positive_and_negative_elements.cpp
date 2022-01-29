#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
    vector<int>v,v1,v2;
    for(int i=0;i<(n);i++)
    {
        if(a[i]>0)
        v.push_back(a[i]);
        
        if(a[i]<0)
        v1.push_back(a[i]);
         
        
         
         
    }
    
    for(int i=0;i<(n);i++)
    {
        v2.push_back(v[i]);
        v2.push_back(v1[i]);
    }
    
  
    return v2;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cout<<"Enter the number of elements in array-"<<endl;
    cin>>n;
    int a[n];
    cout<<"Input the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
  