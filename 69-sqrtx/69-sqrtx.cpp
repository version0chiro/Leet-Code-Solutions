class Solution {
public:
    int mySqrt(int x) {
        if(x<1) return x;
        int l=1;
        int h=x;
        int ans = 1;
        while(l<=h){
            int mid = l+(h-l)/2;
            unsigned long long int curr = mid;
            
            if(curr==x/mid) return mid;
            else if(curr>x/mid) h=mid-1;
            else{
                ans=mid;
                l=mid+1;
            }
        }
        
        return ans;
    }
};