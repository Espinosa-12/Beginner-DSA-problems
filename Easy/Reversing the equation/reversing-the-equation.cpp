//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
               string temp="";
        string ans="";
            for(int i=s.size()-1;i>=0;i--){
                if((s[i]>='0' && s[i]<='9')){
                    temp=temp+s[i];
                }
                else{
                    reverse(temp.begin(),temp.end());
                    ans=ans+temp;
                    ans+=s[i];
                    temp="";
                }
            }
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
            return ans;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends