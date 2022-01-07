#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()<2)
            return nums.size();
        
            int i=0; 
            for(int j=i+1;j<nums.size();j++)
            { if(nums[j]!=nums[i])
            { i++;
             nums[i]=nums[j];
            }
            }
             
             
            return i+1;
        
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
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    n=obj.removeDuplicates(v);
   for (int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
cout << endl;

}
