class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<=high){
            if(nums[mid]==target)return true;
            //with duplicates we can have this condition ,just update left and right
            if((nums[low]==nums[mid]) && (nums[high]==nums[mid])){
                low++;
                high--;
            }
           else if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{//checking in right sorted array
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
            mid= low+(high-low)/2;


        }
        return false;
    }
};