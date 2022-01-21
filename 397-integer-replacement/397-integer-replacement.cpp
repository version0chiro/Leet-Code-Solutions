class Solution {
public:
    
    
    long long recur(long long n,int steps){
        if(n==1) return steps;
        
        if(n%2==0){
            return recur(n/2,steps+1);
        }
        else{
            return min(recur(n+1,steps+1),recur(n-1,steps+1));
        }
    }
    
    int integerReplacement(int n) {
        int steps = 0;
        long long n_temp = n;
        return recur(n_temp,steps);
        
    }
};