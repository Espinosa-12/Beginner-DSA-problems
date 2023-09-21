class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        int ans=0,a1=0;
        for(int i=0;i<=len;i++)  {
                 ans= ans+i;
        }      
        for(int i=0;i<len;i++){
            a1 = a1+nums[i];
        }
        return abs(ans-a1);
    }
};