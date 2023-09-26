class Solution {
public:
 /*   int findmin(vector<int>&arr){
        int min=0;
        int i;
        for(i=0;i<arr.size();i++){
            if(arr[i]<min)min=arr[i];
        }
        return min,i+1; 
    }
    int findmax(vector<int>&arr,int ans){
        int max=0;
        for(int i=ans;i<arr.size();i++){
            if(arr[i]>max)max=arr[i];
        }
        return max; 
    }
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int sp=0;
        int cp,an=findmin(prices);
        if(an==prices.size()-1)return 0;
        else{
        sp= findmax(prices,an);
        }
        maxprofit=cp-sp;
        return maxprofit;
     int maxProfit(vector<int>& prices) {
      if(prices.length==1) return 0;
        int maxProfit=0,start=0,end=1;
        while(end<prices.length){
            if(prices[start]<prices[end])
                maxProfit = Math.max(maxProfit, prices[end]-prices[start]);
            else start=end;
            end++;
        }
        return maxProfit;*/
    int maxProfit(vector<int>& prices) {
      int n= prices.size();
        int mn= INT_MAX;
        int ans=0;
        
        for(int i=0; i<n; i++){
            mn = min(mn, prices[i]);
            ans = max(ans, prices[i]-mn);
        }
        
        return ans;
        
    }
};