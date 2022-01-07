#include <iostream>
#include <string>
#include <map>
using namespace std;

string s="Deepanjali_you_are_great!";
int main()
{
map<char,int>m;
 for(int i=0;i<s.size();i++)
{
  m[s[i]]++;
}

for(auto i:m)
{
  if(i.second>1)
  cout<<i.first<<" "<<"count="<<i.second<<endl;
}

return 0;
}

