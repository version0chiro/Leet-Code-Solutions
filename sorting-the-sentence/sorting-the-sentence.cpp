class Solution {
public:
    string sortSentence(string s) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> pq;
        string temp = "";
        for(auto a:s){
            if(a==' ') continue;
            if(isdigit(a)){
                
                pq.push({(int)a,temp});
                temp="";
            }else{
                temp+=a;
            }
        }
        
        string ans = "";
        while(pq.size()){
            ans+=pq.top().second+" ";
            pq.pop();
        }
        ans.pop_back();
        return ans;
    }
};