class Solution {
public:
    string largestOddNumber(string num) {
        string result="";
        int ind=-1;
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                ind=i;
                break;
            }

        }
        if(ind!=-1){
            for(int i=0;i<=ind;i++){
                result += num[i];
            }
        }
        return result;
        
    }
};