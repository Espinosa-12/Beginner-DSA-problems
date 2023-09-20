class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=0,cur_count=0;
       int i=0;
            while( i<nums.size()){
                if(nums[i]==1)cur_count++;
                if(nums[i]==0){
                    cur_count=0;
                
                }
                if(max_count<cur_count)max_count=cur_count;
                i++;
            }
        
        return max_count;
    }
};