#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
    public:
    
    int sum(int a , int b)
    {
    int sum=0,carry=0;
       
       while(b!=0)
       { sum=a^b;       // this will perform the xor addition
        carry=(a&b)<<1; // and operation will give us the carry and we use left shift to shift our carry to the next bit
                        // this process will repeat till the value of b is 0
        a=sum;     
        b=carry;
       }
       
       return a;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        
        Solution ob;
        cout<< ob.sum(a,b) <<"\n";
        
    }
    return 0;
}