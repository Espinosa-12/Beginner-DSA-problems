class Solution {
public:
    int findMin(vector<int>& nums) {
       /* int previous=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        int mid = low+(high-low)/2;
        while(low<=high){
            if(nums[mid]<previous)previous=nums[mid];
            else if (nums[low]<nums[mid]){
                if(nums[low]<=previous && previous <nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(nums[mid]<=previous && previous <nums[high]){
                   high=mid-1;
                }else{
                   low=mid+1;
                }
            }
            mid = low+(high-low)/2;
        }
        return previous;*/
        int start = 0, end = nums.size() - 1, ans = start;
        while(nums[start] > nums[end]) {
            int mid = (start + end) >> 1;
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
                end = mid;
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
                start = mid + 1;          
            else return nums[mid];
            ans = start;
        }
        return nums[ans];

    }
};