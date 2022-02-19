class Solution {
public:
    
    static bool cmp(pair<string,string> a,pair<string,string>  b){
        if(a.first==b.first){
            if(lexicographical_compare(a.second.begin(), a.second.begin()+a.second.size(), b.second.begin(), b.second.begin()+b.second.size())){
                return true;
            }    
        }
        if(lexicographical_compare(a.first.begin(), a.first.begin()+a.first.size(), b.first.begin(), b.first.begin()+b.first.size())){
            return true;
        }
        
        
        
        return false;
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> digiVec;
        
        vector<pair<string,string>> stringVec;
        
        for(auto a:logs){
            bool digit = false;
            int count = 0;
            string index="";
            string content="";
            for(auto p:a){
                
                
                
                if(p==' ') count++;
                
                if(count<=0 && p!=' ') index+=p;
                else if(count>0) content+=p;
                
                if(isdigit(p) && count>0){
                    digiVec.push_back(a);
                    digit=true;
                    break;
                }
            }
            if(!digit){
                content.erase(0,1);
                stringVec.push_back({content,index});
            }
            
        }
        
        sort(stringVec.begin(),stringVec.end(),cmp);
        
        int j=0;
        
        while(j<stringVec.size()){
            logs[j]=stringVec[j].second+' '+stringVec[j].first;
            j++;
        }
        
        int i=0;
        
        while(i<digiVec.size()){
            logs[j]=digiVec[i];
            i++;
            j++;
        }
        
        
        return logs;
    }
};