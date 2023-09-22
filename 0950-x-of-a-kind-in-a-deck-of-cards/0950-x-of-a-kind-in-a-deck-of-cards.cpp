class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
       /* int ans=0;
        for(int i=0;i<deck.size();i++){
            ans =ans^deck[i];
        }
        if(ans==0){
            return true;
        }
        return false;* //this bitwise xor condition has a problem because say what if the array element start with 0 like 0,0,0,1,1,1,2,2,2 and also if the input is 1111 222222 then also ans=0 but it's wrong for our question so we should think for another appproach like Hash */
if(deck.size()==0) return false;
        map<int,int> m;
        for(auto v:deck)
        {
            ++m[v];
        }
        int ret = INT_MAX;
        for(auto [k,v] : m)
        {
            ret = min(ret, v);
        }
        
        if(ret < 2) return false;
        
        vector<int> gcds;
        for(auto [k,v] : m)
        {
            int a = gcd(v, ret);
            if(a == 1)
                return false;
            else
            {
                for(int i=0; i<gcds.size(); ++i)
                {
                    if(gcd(a, gcds[i]) == 1)
                        return false;
                }
                gcds.push_back(a);
            }
        }
        return true;




    }
};