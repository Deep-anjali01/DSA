//Que-Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=1)
        return nums[0];
        
        int count=1;
    for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
            count++;
           
            if(count>n/2)
            {
                return nums[i];
            }
              
            }
            else count=1;
        }
            return -1; 
      
    }
};

int main()
{

    int n,ans;
    cout<<"Enter the size of vector"<<endl; 
    cin>>n;
    
    vector<int>v;
    int a;
    cout<<"Input the elements of vector"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
   
   Solution obj;
   ans=obj.majorityElement(v);
    cout<<ans<<endl;


    

 
}
