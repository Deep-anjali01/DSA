
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    
   int j;
   
  for(int i=0,j=(S.length()-1);i<=j;i++,j--)
  {
 
    if(S[i]!=S[j])
    return 0; 
    
  }
    
     return 1;
    }
  
    
};
	   
int main() 
{
   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
} 
 
 

	

