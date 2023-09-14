//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // User function Template for C++


    int isDigitSumPalindrome(int N) {
        
        // code here
        int m=N;
        int sum=0;
        while(m!=0){
            sum=sum+(m%10);
            m=m/10;
        }
        int rev,tot;
        tot=sum;
        while(tot!=0){
           int sim=tot%10;
           rev=rev*10+sim;
            tot=tot/10;
        }
        
        if(sum==rev)return 1;
        else
          return 0;
   
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends