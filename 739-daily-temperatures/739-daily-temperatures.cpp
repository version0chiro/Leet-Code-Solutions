class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        
        vector<int> ans(temperatures.size(),0);
        
        for(int i=temperatures.size()-1;i>=0;i--){
            
            int c = 0;
            
            while(s.size() && temperatures[s.top()]<=temperatures[i]){
                // cout<<temperatures[s.top()]<<" "<<temperatures[i]<< " \n";
                s.pop();
                c++;
            }
            
            
            
            if(s.size()==0){
                // cout<<temperatures[i]<<"\n";
                ans[i]=0;        
            }else{
                ans[i]=s.top()-i;
            }
            
            s.push(i);
            
        }
        
        return ans;
    }
};