//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	/*  int sec_large=INT_MIN;
	  int large=INT_MIN;
	  for(int i=0;i<n;i++){
	      if(arr[i]>large){
	          sec_large=large;
	          large=arr[i];
	          
	      }else{
	          if(arr[i]>sec_large && arr[i]!=large){
	              sec_large = arr[i];
	          }
	      }
	  }
	  return sec_large;*/
	  int sec_large =-1;
	  sort(arr,arr+n);
	  for(int i=0;i<n;i++){
	      if(arr[i]<arr[n-1] && arr[i]>sec_large)sec_large=arr[i];
	  }
	  return sec_large;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends