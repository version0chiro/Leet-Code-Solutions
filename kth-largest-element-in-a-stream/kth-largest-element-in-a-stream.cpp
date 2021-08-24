class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int eleK;
    KthLargest(int k, vector<int>& nums) {
        eleK = k;
        for(auto a:nums){
            pq.push(a);    
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>eleK) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */