class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int a= 0, b=0, count_a = 0, count_b = 0 , res=0,curr=0;
        for(auto c:fruits){
            curr = c==a||b==c? curr+1:count_b+1;
            count_b = c ==b? count_b+1:1;
            if(b!=c) a=b,b=c;
            res = max(res,curr);
        }
        
        
        return res;
    }
};