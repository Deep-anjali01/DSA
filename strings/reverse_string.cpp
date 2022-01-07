#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        
       
        for(int i=0,j=s.size()-1;i<j;i++)
        {
            
            char temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            j--;
            
        }   
        
    }
};
int main()
{
    Solution obj;
    int n;
    cout<<"Enter the size of vector"<<endl; 
    cin>>n;
    vector<char>v;
    char a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
   obj.reverseString(v);
   for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
cout << endl;

}