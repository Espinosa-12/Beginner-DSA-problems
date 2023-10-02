class Solution {
    private:
    int lower_bound(vector<int>& nums, int low, int high, int target){
        while(low <= high){
            int mid = (low + high) >> 1;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    /*basic bruteforce approach
        vector<int>result={-1,-1};
        int s=0;
        int end=nums.size()-1;
        int mid=s+(end-s)/2;
        while(s<=end){
            if(nums[mid]==target){
                result[0]=mid-1;
                while(nums[mid]==target){
                    mid++;
                }
                result[1]=mid-1;
                return result;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }else{
                end=mid-1;
            }
            mid = s+(end-s)/2;

        }

        return result;*It is brute force there are to while loops embedded already in the function so it is giving run time error.*/
         int low = 0, high = nums.size()-1;
        int startingPosition = lower_bound(nums, low, high, target);
        int endingPosition = lower_bound(nums, low, high, target + 1) - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }

                  return {-1, -1};

        
    }
};