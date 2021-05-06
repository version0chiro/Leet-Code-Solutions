class Solution {
public:
    int balancedStringSplit(string s) {
        int Lcount=0;
        int Rcount=0;
        
        int ans=0;
        
        int pointer=0;
        
        while(pointer<s.size()){
            
            while(s[pointer]=='R'){
                cout<<" R "<<pointer;
                pointer++;
                Rcount++;
                if(Rcount==Lcount && Lcount!=0){
                    ans++;
                    Lcount=0;
                    Rcount=0;
                }
                cout<<"c-->"<<Rcount<<" ";
            }
            while(s[pointer]=='L'){
                cout<<" L "<<pointer;
                pointer++;
                Lcount++;
                if(Lcount==Rcount && Rcount!=0){
                    ans++;
                    Lcount=0;
                    Rcount=0;
                }
                cout<<"c-->"<<Lcount<<" ";
            }
//             if(Rcount==Lcount && Rcount!=0){
//                 ans++;
//                 Lcount=0;
//                 Rcount=0;
                
//             }
            
        }
        return ans;
    }
};