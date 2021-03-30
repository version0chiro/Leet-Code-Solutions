class Solution {
public:
    int maxArea(vector<int>& height) {
        int r = height.size()-1;
        int l = 0;

        int area =0;
        int maxVal = INT_MIN;
        
        while(l!=r){
            area = (r-l)*min(height[r],height[l]);
            maxVal = max(maxVal,area);
            
            if(height[l]>=height[r]){
                r--;
            }else{
                l++;
            }
        }
        
        return maxVal;
    }
};