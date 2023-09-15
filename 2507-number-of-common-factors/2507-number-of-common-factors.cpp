class Solution {
public:
    int gcd(int a , int b){
        if(a==0)return b;
        return gcd(b%a,a);
    }
    int commonFactors(int a, int b) {
        int count=0;
        int num = gcd(a,b);
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                if(i*i==num){
                    count +=1;
                }else{
                    count +=2;
                }
            }
        }
        return count;
        
    }
};