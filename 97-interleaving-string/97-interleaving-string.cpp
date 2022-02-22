class Solution {
public:
    unordered_map<string,bool> m;
    bool solve (string A,string B,string D,string C,int i,int j){
        if(C.size()==D.size() && D!=C) return false;
        
        // cout<<D<<"\n";
        
        string key = D+" "+to_string(i)+" "+to_string(j);
        
        if(m.find(key)!=m.end()) return m[key];
        
        if(D==C) {
            m[key]=true;
            return true;
        }
        
        if(D.size()<C.size()){
            D+=A[i];
            bool f,s;
            if(D[i+j]!=C[i+j]) 
                f=false;
            else
                f = solve(A,B,D,C,i+1,j);
                
                
            D.pop_back();
            
            
            D+=B[j];
            
            if(D[i+j]!=C[i+j])
                s=false;
            else s = solve(A,B,D,C,i,j+1);
            
            m[key]=f||s;
            
            return m[key];
        }
        else{
            m[key]=false;
            return false;
        }
        
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        if(s1.size()+s2.size()!=s3.size()) return false;
        
        return solve(s1,s2,"",s3,0,0);
    }
};