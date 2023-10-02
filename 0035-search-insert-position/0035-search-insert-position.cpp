class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int end=nums.size()-1;
        int mid = s+(end-s)/2;
        while(s<=end){
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target){
                s=mid+1;
            }else{
                end=mid-1;
            }
            mid= s+(end-s)/2;
        }
        return mid ;
        
    }
};