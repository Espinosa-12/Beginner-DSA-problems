class Solution {
public:
    void sortColors(vector<int>& nums) {
      /*int count[3]={0,0,0};
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<3;i++){
        while(count[i]--){
            nums[k++]=i;
        }
    }*/
    int st=0,mid=0,high=nums.size()-1;
    while(mid<=high){
    switch(nums[mid]){
        case 0:  swap(nums[mid],nums[st]);
                 st++;
                 mid++;
                 break;
        case 1: mid++;
                break;
        case 2: swap(nums[mid],nums[high]);
                high --;

    }
    }
    }
};