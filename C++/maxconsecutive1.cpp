#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int x)
{
 
    // Your code here
    int count = 0; 
  
   while (x!=0) 
    { 
        x = (x & (x << 1)); 
  
        count++; 
    } 
  
    return count; 
    
    
}

int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		
		//calling maxConsecutiveOnes() function
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends