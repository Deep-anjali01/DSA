//Que-Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;
        for(auto i:nums)
        {
            a ^= i;
        }
        return a;
    }
};

int main()
{
   Solution obj;
    int n;
    cout<<"Enter the size of vector"<<endl; 
    cin>>n;
    vector<int>v;
    int a;
    cout<<"Input the vector"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    n=obj.singleNumber(v);
   for (int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
 
    cout<<endl;

 
}