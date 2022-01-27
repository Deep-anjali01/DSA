#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin >> t;
    while (t--) {
        int n;
        cout<<"Enter the size of array-"<<endl;
        cin >> n;

        int a[n];
     cout<<"Enter the elements of array-"<<endl;
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    
    vector<int>v;
    sort(a,a+n);
  for(int i=0;i<n;i++)
    {
        
        if(a[i]==a[i+1])
        continue;
       v.push_back(a[i]); 
        

    }
    
    if(a[0]==a[n-1]) 
  {
       v.clear();
       v.push_back(-1);
        
  }
   return v;
}