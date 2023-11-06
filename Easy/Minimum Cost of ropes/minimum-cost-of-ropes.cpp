//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here     vector<long long>v;
       
             vector<long long>v;
        priority_queue<long long, vector<long long>, greater<long long>>minh(arr, arr+n);
        long long temp=0;
        long long ans=0;
        while(minh.size()>1){
            for(int j=0; j<2; j++){
                temp = temp + minh.top();
                minh.pop();
            }
            v.push_back(temp);
            minh.push(temp);
            temp=0;
        }
        for(int i=0; i<v.size(); i++){
            ans+=v[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends