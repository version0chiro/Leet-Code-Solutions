class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2) return false;
        
        int maxe = arr[0];
        
        bool switched = 0;
        
        int c = 0;
        
        for(
            int p = 1;p<arr.size();p++
            
        ){
            
            int i = arr[p];
            
            cout<<i<<" ";
            
            if(i<maxe){

                maxe = min(i,maxe);
                    
                if(c==0) return false;
                switched = 1;
            }
            else if(i>maxe){
                if(switched){
                    return false;
                }
                maxe=max(maxe,i);
            }
            else if(i==maxe) return false;
            
            c++;
        }
        
        return switched;
    }
};