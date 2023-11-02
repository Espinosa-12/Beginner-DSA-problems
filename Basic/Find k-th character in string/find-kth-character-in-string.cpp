//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
	    // Your code goes here
	       string str="";
       string add="";


       if(m==0)
       str+='0';
       
       while(m>0)
       {
         (m&1)?str+='1':str+='0';
         m=m>>1;
       }
       reverse(str.begin(), str.end());
       
       while(n>0)
       {
       add="";
       for(int i=0;i<str.length();i++)
       {
           if(str[i]=='1') add+="10";
           else add+="01";
       }
       str=add;
       n--;
       }
       
      return str[k-1];
	}
};

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
   		int m, n, k;
   		cin >> m >> n >> k;

   	
        Solution ob;
   		cout << ob.kthCharacter(m, n, k) << "\n";
   	}

    return 0;
}
// } Driver Code Ends