class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int pointer1=0;
        int pointer2=0;
        double ans=0;
        vector<int> finalVector;
        while(pointer1<nums1.size() || pointer2<nums2.size()){
            if(pointer1>=nums1.size()){
                finalVector.push_back(nums2[pointer2]);
                pointer2++;
            }
            else if(pointer2>=nums2.size()) {
                finalVector.push_back(nums1[pointer1]);
                pointer1++;
            }
            
            else{
                            if(nums1[pointer1]>nums2[pointer2]){
                finalVector.push_back(nums2[pointer2]);
                pointer2++;
            }
            else{
                finalVector.push_back(nums1[pointer1]);
                pointer1++;
            }                
            }
            

        }
        
        int length=finalVector.size()-1;
        
        if(finalVector.size()%2==0){
            ans = finalVector[length/2]+finalVector[(length+1)/2];
            ans = ans/2.0;
        }else{
            ans= finalVector[finalVector.size()/2];
        }
        return ans;
    }
    
};