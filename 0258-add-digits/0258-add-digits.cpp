class Solution {
public:
    int addDigits(int num) {
        int sum=0; 
      int  rem=0;
        while(num!=0 ){
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        if(sum>=0 && sum<=9)
             return sum;
        else {
         sum =  addDigits(sum);
             }
        
        return sum;
    }
};