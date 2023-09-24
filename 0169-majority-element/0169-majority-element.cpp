class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  int counter = 0, majority;
        for (int num : nums) {
            if (!counter) {
                majority = num;
             counter += num == majority ? 1 : -1;
        }
        return majority;*/
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};