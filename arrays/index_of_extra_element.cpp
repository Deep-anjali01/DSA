//que-Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        
   int ans=0;


for(int i=0;i<n;i++)
  {
    
      if(a[i]!=b[i])
      {
        ans=i;
        break;
      }
      
    

  }
  
  return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin >> t;
    while (t--) {
        
        int n;
        cout<<"Enter the size of 1st array-"<<endl;
        cin >> n;
        int a[n], b[n - 1];
        cout<<"Input the 1st array-"<<endl;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout<<"Input the 2nd array-"<<endl;
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } 