//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        string count="";
        for(int i=0;i<n;i++){
            if(names[i].length()>count.length()){
                count=names[i];
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends