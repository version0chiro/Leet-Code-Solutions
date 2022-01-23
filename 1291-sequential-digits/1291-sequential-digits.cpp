class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        
        vector<int> seq = {};
        
        int temp = 0;
        
        for(int i=1;i<9;i++){
            cout<<i<<":";
            temp=i;
            for(int j=i+1;j<=9;j++){
                temp=temp*10+j;
                if(temp>=low && temp<=high) seq.push_back(temp);
                cout<<temp<<"\n";
                cout<<j<<",";
            }
            
            cout<<"\n";
        }
        
        sort(seq.begin(),seq.end());
        
        return seq;
        
        
    }
};