
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
  
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(arr1[i]);
        }
        
         for(int i=0;i<m;i++)
        {
            v.push_back(arr2[i]);
        }
    
    sort(v.begin(),v.end());
      v.erase(unique(v.begin(),v.end()),v.end());
        
        return v;
    }
};


int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  