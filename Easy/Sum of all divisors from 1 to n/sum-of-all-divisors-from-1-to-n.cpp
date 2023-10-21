//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    // long long sumofdivsor(int a ){
    //     long long add=1;
    //      add= add+a;
    //     for(int i=2;i*i<=a;i++){
    //         if(a%i==0){
    //             add =add+i;
    //             if((a/i)!=i){
    //                 add= add+(a/i);
    //             }
    //         }
            
    //     }
       
    //     return add;
    // }
   
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        //it's a brute force approach written here
        // long long sum=1;
        // if(N==1){
        //     return 1;
        // }
        // for(int i=2;i<=N;i++){
        //     sum = sum + sumofdivsor(i);
        // }
        // return sum;
        //now i will write optimised approach
        if(N<=0)return 0;
        long sum=0;
        for(int i=1;i<=N;i++){
            sum =sum + i*(N/i);
        }
        return sum;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends