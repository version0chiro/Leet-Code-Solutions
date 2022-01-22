#define mod 1000000007

class Solution {
public:
    
    string getBin(int num){
        string bin = "";
        while(num>0){
            
            bin=bin+to_string(num%2?0:1);
            num=num/2;
        }
        
        return bin;
    }
    
     int binaryToDecimal(string n){
        long long ans=0,powe=1;
        for(int j=0;j<n.size();++j){
                long long now=(n[j]-'0')*(powe);
                powe*=2;
                // powe%=mod;
                ans+=now;
        }
        return ans;
    }
    
    int findComplement(int num) {
        
        
        string binStr = getBin(num);
        
        cout<<binStr;
        
        
        
        return binaryToDecimal(binStr);
    }
};