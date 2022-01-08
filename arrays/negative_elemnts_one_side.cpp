#include <iostream>
using namespace std;

class solution
{
    public:
    void negative_elements(int a[],int n)
    { for(int i=0;i<n;i++)
	{
	    if(a[i]<0)
	    i--;
    }
    
}

int main() {
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	solution obj;
	obj.negative_elements(a,n);
	
}