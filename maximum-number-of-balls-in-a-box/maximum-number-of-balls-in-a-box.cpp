class Solution {
public:
    int findDigSum(int num){
        int sum =0;
        while(num>0){
            sum+=num%10;
            num=num/10;
        }
        
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> m;
        int ans = INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++){
            int temp = findDigSum(i);
            m[temp]++;
            ans=max(m[temp],ans);
        }
        
        return ans;
    }
};