#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cout<<"Enter the number of test cases-"<<endl;
    cin >> t;
    while (t--) {
        int n;
        cout<<"Enter the number of elements in array-"<<endl;
        cin >> n;
        int a[n], i;
         cout<<"Input the array"<<endl;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int index=0;
    if(n==1 && arr[0]==1)
    index=0;
    if(n==1 && arr[0]==0)
    index=-1;
    
    
    else if(n>1 )
  {  for(int i=0;i<(n-1);i++)
    {
        if(arr[i]!=arr[i+1])
        index=(i+1);
        
       
    }
    
    if((arr[0]==arr[n-1]) && arr[0]==0)
      index= -1;
      if((arr[0]==arr[n-1]) && arr[0]==1)
      index= 0;
  }
    return index;
}