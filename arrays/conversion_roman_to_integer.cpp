#include<iostream>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    
    int romanToInt(string s) 
    {
      map<char,int>m;
       m.insert({'I',1});
       m.insert({'V',5});
       m.insert({'X',10});
       m.insert({'L',50});
       m.insert({'C',100});
       m.insert({'D',500});   
       m.insert({'M',1000});
      int a=0;
       
        for(int i=0;i<s.length();i++)
      {
            
          if(m[s[i]]<m[s[i+1]])
          {a += (m[s[i+1]]-m[s[i]]); i++;}
            
        else if(m[s[i]]>=m[s[i+1]])
        {a += m[s[i]];}
          
            
      }
        return a;
    }
};
int main()
{
    string s;
    int a;
    cout<<"Input string"<<endl;
    cin>>s;

    Solution obj;
    a=obj.romanToInt(s);
    cout<<a<<endl;
}