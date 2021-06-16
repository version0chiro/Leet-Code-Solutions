class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minDist =INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            
            for(int j=left;j<nums.size()-1;j++){
                
                for(int k=j+1;k<nums.size();k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    
                    if(abs(target-sum)<minDist){
                        minDist=abs(target-sum);
                        ans=sum;
                    }
                    // cout<<sum<<"\n";
                }
            }
            // cout<<nums[i]<<" "<<nums[left]<<" "<<nums[right]<<"\n";
            
        }
        
        return ans;
    }
};