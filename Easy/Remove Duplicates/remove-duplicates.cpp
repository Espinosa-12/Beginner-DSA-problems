//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    // Your code goes here
	     int freq[256]={0};
       string ans="";
       
       for(int i=0; i<s.length(); i++)
       {
           if(freq[s[i]]==0)
           freq[s[i]]++;
       }
       
       for(int i=0; i<s.length(); i++)
       {
           if(freq[s[i]]!=0)
           {
               ans.push_back(s[i]);
               freq[s[i]]--;
           }
       }
       
       return ans;
	}
};
/*zvvo
0th index->z
ans= ans+z
1st index->v
ans= zv
2nd index->v
i=2,2<=1
ans=zv

ans=zvo*/





//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends