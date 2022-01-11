#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return nums.size();
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

    int b;
    cout<<"Enter the number to be removed"<<endl; 
    cin>>b;
    n=obj.removeElement(v,b);
   for (int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
cout << endl;

}