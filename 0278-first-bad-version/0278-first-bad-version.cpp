// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int s=1;
       long long int end=n;
     long long   int mid = s+(end-s)/2;
        while(s<=end){
            if(!isBadVersion(mid)){
                s=mid+1;
            }else if(isBadVersion(mid)){//because we have to return the first bad version so we are checking whether mid -1 was >=0 and it was good only at that point our mid can be first bad version otherwise it will be any bad version i.e there might exist a bad version before mid position also.
                if((mid-1>=0) && (!isBadVersion(mid-1) )){
                    return mid;
                }
            end=mid-1;
            }
            mid = s+(end-s)/2;
        }
        return mid;
        
    }
};