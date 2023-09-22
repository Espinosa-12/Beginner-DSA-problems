//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        ll modulo=1e9+7;
        if(n==1)
        {
            vector<ll>temp;
            temp.push_back(1ll);
            return temp;
        }
        vector<ll>prev=nthRowOfPascalTriangle(n-1);
        vector<ll>ans;
        ans.push_back(1);
        for(int i=1;i<prev.size();i++)
        {
            ans.push_back((prev[i]+prev[i-1])%modulo);
        }
        ans.push_back(1);
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends