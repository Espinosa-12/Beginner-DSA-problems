class Solution {
public:
    int maxDepth(string s) {
        //it is using the stack concept
        stack<char>st;
        int maxi=0;
        for(auto it: s){
            if(it=='(') st.push('(');
            else if(it==')') if(st.size()>0)st.pop();
            if(maxi < st.size())maxi = st.size();
        }
        return maxi;
        //using the iterative concept;
 int brack = 0, depth_bracket = 0;
        for(char bracket: s){
            if(bracket == '(')brack++;
            else if(bracket ==')') brack--;
            depth_bracket = max(depth_bracket, brack);
        }
        return depth_bracket;
    }
};