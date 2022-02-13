class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        unordered_map<char,int> m;
	    for(auto a:pat){
	        m[a]++;
	    }
	    
	    int count = m.size();
	    
	    int i=0,j=0;
	    
	    vector<int> ans;
	    
	    while(j<pat.size()){
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0) count--;
	        }
	        if(count==0){
	            ans.push_back(i);
	        }
	        j++;
	    }
	    
	    while(j<txt.size()){
	        if(m.find(txt[i])!=m.end()){
	            if(m[txt[i]]==0) count++;
	            m[txt[i]]++;
	            
	        }
	        i++;
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0) count--;
	        }
	        if(count==0){
                ans.push_back(i);
            }
	        j++;
	        
	    }
	    
	    return ans;
    }
};