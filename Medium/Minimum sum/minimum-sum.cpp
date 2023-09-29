//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string solve(int arr[], int n) {
        // code here
         sort(arr,arr+n);
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)a.push_back(arr[i]);
            else b.push_back(arr[i]);
        }
        if(n%2==1)
        {
            reverse(begin(b),end(b));
            while(a.size()!=b.size())b.push_back(0);
            
            reverse(begin(b),end(b));
        }
        
        string ans="";
        int c=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            int x = (c+a[i]+b[i])%10;
            c=(c+a[i]+b[i])/10;
            ans+=to_string(x);
        }
        
        if(c!=0)ans+=to_string(c);
        
        reverse(begin(ans),end(ans));
        string t="";
        int i=0;
        while(i<n and ans[i]=='0')i++;
        while(i<ans.size())
        {
            t+=ans[i];
            i++;
        }
        // return ans;
        if(t=="")return "0";
        return t;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends