//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int count=1;
  
  void fun(vector<long long>&v,int N){
      if(count>=N){
           return ;
       }
       count++;
       v[count]=v[count-1]+v[count-2];
       fun(v,N);
  }
    vector<long long> Series(int N) {
        // COde here
          vector<long long> v(N+1);
    v[0]=0;
    v[1]=1;
    fun (v,N);
    return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends