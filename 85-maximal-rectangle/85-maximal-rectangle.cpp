class Solution {
public:
    int histo(vector<int> hisVec){
        stack<int> st;
        
        vector<int> left,right;
        
        for(int i=0;i<hisVec.size();i++){
            while(st.size() && hisVec[st.top()]>=hisVec[i]) st.pop();
            
            if(st.size()==0) left.push_back(-1);
            
            else left.push_back(st.top());
            
            st.push(i);
            
            
        }
        while(st.size()) st.pop();

        for(int i=hisVec.size()-1;i>=0;i--){
            while(st.size() && hisVec[st.top()]>=hisVec[i]) st.pop();
            
            if(st.size()==0) right.push_back(hisVec.size());
            
            else right.push_back(st.top());
            
            st.push(i);
        }
        
        int ans = INT_MIN;
        int n = hisVec.size();
        
        for(int i=0;i<n;i++){
            ans=max(ans,hisVec[i]*(right[n-i-1]-left[i]-1));
        }
        
        return ans;
    }
    
    
    int maximalRectangle(vector<vector<char>>& M) {
        // Your code here
        int n = M.size();
        int m = M[0].size();
        int ans = INT_MIN;
        vector<int> temp;
        
        for(int i=0;i<m;i++){
            temp.push_back(M[0][i]=='0'?0:1);
        }
        
        ans=max(ans,histo(temp));
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]=='0'){
                    temp[j]=0;
                }else{
                    temp[j]+=1;
                }
                // cout<<M[i][j]<<" ";
            }
            // cout<<endl;
            ans=max(ans,histo(temp));
        }
        
        return ans;
        
        
    }
};
    