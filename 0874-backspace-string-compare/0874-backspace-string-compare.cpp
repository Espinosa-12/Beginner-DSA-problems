class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>l1;
        vector<char>l2;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                l1.push_back(s[i]);
            }else if(s[i]=='#' && l1.size()>0){
                l1.pop_back();
            }
        }
       for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                l2.push_back(t[i]);
            }else if(t[i]=='#' && l2.size()>0){
                l2.pop_back();
            }
        }
        if(l1==l2){
            return true;
        }
        return false;
    }
};