class MedianFinder {
public:
    priority_queue<double> maxH;
    priority_queue<double,vector<double>,greater<double>> minH;
    bool even = true;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxH.size()==0 || maxH.top()>num) maxH.push(num);
        else minH.push(num);
        
        if(maxH.size()> minH.size() +1){
            minH.push(maxH.top());
            maxH.pop();
        }else if(maxH.size() +1 < minH.size()){
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    double findMedian() {
        // cout<<maxH.size()<<" "<<minH.size()<<"\n";
        if(maxH.size()==minH.size()){
            // cout<<minH.top()<<" "<<maxH.top()<<"\n";
            return ((minH.top()+maxH.top())/2);
        }else if(maxH.size()>minH.size()){
            return maxH.top();
        }else if(maxH.size()<minH.size()){
            return minH.top();
        }
        else{
            return -1;
        }
        // return 1;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */