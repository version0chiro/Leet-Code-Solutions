class Solution {
public:
    int trap(vector<int>& height) {
        int lPointer = 0,rPointer = height.size() -1;
        
        int lW = 0,rW=0; 
        int ans = 0;
        
        while(lPointer<=rPointer){
            if(rW<=lW){
                ans=ans+max(0,rW-height[rPointer]);
                rW = max(rW,height[rPointer]);
                rPointer--;
            }else{
                ans=ans+max(0,lW-height[lPointer]);
                lW = max(lW,height[lPointer]);
                lPointer++;
            }
        }
        
        return ans;
    }
};