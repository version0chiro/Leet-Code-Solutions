class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 ) return false;
        while(n>1){
            cout<<n<<" ";
            if(n%3!=0) return false;
            n=n/3;
        }
        
        return n==1;
    }
};