#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int j=0;
     for(int i=m;i<(m+n);i++)
     {
         nums1[i]=nums2[j];
         j++;
     }
        sort(nums1.begin(),nums1.end());
    }
};

int main()
{
    Solution obj;
    int m,n;
    cout<<"Enter the size of vector 1"<<endl; 
    cin>>m;
    cout<<"Enter the size of vector 2"<<endl; 
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    int a,b;
    cout<<"Enter the vector 1"<<endl; 
    for(int i=0; i<(m+n); i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    cout<<"Enter the vector 2"<<endl; 
    for(int i=0; i<n; i++)
    {
        cin>>b;
        v2.push_back(b);
    }
    obj.merge(v1,m,v2,n);
    for(int i=0;i<(m+n);i++) {
        cout << v1[i] << " ";
    }
cout << endl;

}