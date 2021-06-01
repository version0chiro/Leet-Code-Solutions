class Solution {
public:
    int lengthOfLIS(vector<int>& arr1) {
        set<int> s;
        int n = arr1.size();
	    
	    for(auto a:arr1){
            s.insert(a);
	    }
	    
	    vector<int> arr2;
	    for(auto a:s){
	        arr2.push_back(a);
	       // cout<<a<<"\n";
	    }
	    
	    int m = s.size();
	    int t[n+1][m+1];
	    
	    memset(t,0,sizeof(t));
	    
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<m+1;j++){
	            if(arr1[i-1]==arr2[j-1]){
	                t[i][j]=1+t[i-1][j-1];
	            }else{
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    
	    return t[n][m];
    }
};