class Solution {
public:
    double findMedianSortedArrays(vector<int>& small, vector<int>& large) {
        
       
        
        if(small.size() > large.size()){
            return findMedianSortedArrays(large,small);
        }
        
        int total = small.size()+large.size();
        int half = total/2;
        
        
        int l = 0;
        int r = small.size();
        
        while(l<=r){
            int partitionX = (l+r)/2;
            int partitionY = (small.size()+large.size()+1)/2-partitionX;
            
           int maxLeftX = INT_MIN;
            int maxLeftY = INT_MIN;
            int minRightX = INT_MAX;
            int minRightY = INT_MAX;
            
            if(partitionX > 0) maxLeftX = small[partitionX-1];
            if(partitionY > 0) maxLeftY = large[partitionY-1];            
            if(partitionX < small.size()) minRightX = small[partitionX];            
            if(partitionY < large.size()) minRightY = large[partitionY];
            
            // leftX + leftY | rightX + rightY -> length wise already correct.
            // check if this partition is correct:
            if(maxLeftY <= minRightX and maxLeftX <= minRightY){
                if((total) % 2 == 0){
                    double avg = (max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2.0;
                    return avg;
                }
                else{
                    // since odd and +1 taken so inclusion of median/extra element:
                    return (double)max(maxLeftX, maxLeftY);
                }
            }
            else if(maxLeftX > minRightY){
                // ahead of partiton
                r = partitionX - 1;
            }
            else{
                // y is way far, increase x so that y decreases
                l = partitionX + 1;
            }
        }
        
        return 0.0;
        
    }
};