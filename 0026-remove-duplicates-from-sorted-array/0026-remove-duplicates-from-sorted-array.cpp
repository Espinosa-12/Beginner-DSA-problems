class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int prev = INT_MAX;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=prev){
                prev = nums[i];
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};