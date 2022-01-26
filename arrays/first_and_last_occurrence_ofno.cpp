#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
       
    vector<int>::iterator it;
       vector<int>v;
       int count=0;
        sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        count++;
    }
    it= find(arr.begin(),arr.end(),x);
        if (it != arr.end())
    {
       
        v.push_back(it - arr.begin());
        v.push_back(it - arr.begin()+(count-1));
    }
        else v.push_back(-1);
    
    return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin >> t;
    while (t--) {
        int n, x;
        cout<<"Enter the number of elements in array and the number we need to find-"<<endl;
        cin >> n >> x;
        cout<<"Enter the number of elements of array-"<<endl;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}