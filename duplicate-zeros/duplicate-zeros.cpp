class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> newArr(n,-1);
        int fI=0,sI=0;
        
        while(fI<n && sI<n){
            if(arr[fI]==0){
                newArr[sI++]=0;
                if(sI<n)
                    newArr[sI++]=0;
                
                fI++;
            }else{
                // cout<<arr[fI]
                newArr[sI++] = arr[fI++];
            }
        }
        
        
        arr=newArr;
        
    }
};