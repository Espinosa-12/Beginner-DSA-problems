class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force approach
     /*   sort(nums.begin(),nums.end());
        int count=0;
           int i=0;
            while(i<nums.size()&&(nums[i+1]=nums[i]+1)){
                count++;
                i++;
            }
        return count;*/



        unordered_map<int, bool> map;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]] = true;
        }
        for(int i=0; i<nums.size(); i++){
            if(map.count(nums[i]-1) > 0){
                map[nums[i]] = false;
            }
        }
        int maxlen = 0;
        for(int i=0; i<nums.size(); i++){
            if(map[nums[i]] == true){
                int j=0; int count=0;
                while(map.count(nums[i]+j) > 0){
                    j++;
                    count++;
                }
                if(count>maxlen){
                    maxlen = count;
                }
            }
        }
        return maxlen;

    }
};