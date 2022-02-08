class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        for(int i=0;i<6;i++){
            ans+=n/pow(5,i+1);
        }
        
        
        return ans;
    }
};