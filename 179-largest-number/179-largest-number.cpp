class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(auto i:nums){
            arr.push_back(to_string(i));
        }
        
        sort(arr.begin(),arr.end(),[](string s1,string s2){return s1+s2>s2+s1;});
        
        string res;
        
        for(auto s:arr)
            res+=s;
        
        while(res[0]=='0' && res.length()>1)
            res.erase(0,1);
        
        
        return res;
    }
};