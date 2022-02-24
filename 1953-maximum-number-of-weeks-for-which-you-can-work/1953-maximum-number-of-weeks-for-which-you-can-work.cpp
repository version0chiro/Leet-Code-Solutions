class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum = 0;
        long long max = *max_element(begin(milestones),end(milestones));
        for(auto a:milestones) sum+=a;
        
        
        
        return min(sum,2*(sum-max)+1);
        
    }
};