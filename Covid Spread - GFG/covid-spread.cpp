// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here'
        queue<pair<int,int>> q;
        
        int uninfected_count  = 0;
        
        for(int i=0;i<hospital.size();i++){
            for(int j=0;j<hospital[0].size();j++){
                if(hospital[i][j]==2)
                    q.push({i,j});
                    
                if(hospital[i][j]==1)
                    uninfected_count++;
            }
        }
        
        int timeC =0;
        
        while(q.size()){
            if(uninfected_count==0) return timeC;
            int s = q.size();
            timeC++;
            
            for(int i=0;i<s;i++){
                auto curr = q.front();
                q.pop();
                
                int tI = curr.first;
                int tJ = curr.second;
                
                // cout<<tI<<" "<<tJ<<" \n";
                
                if((tI>0) && (hospital[tI-1][tJ]==1)){
                    hospital[tI-1][tJ]=2;
                    q.push({tI-1,tJ});
                    uninfected_count--;
                }
                
                if((tJ>0) && (hospital[tI][tJ-1]==1)){
                    hospital[tI][tJ-1]=2;
                    q.push({tI,tJ-1});
                    uninfected_count--;
                }
                
                if((tI<hospital.size()-1) && (hospital[tI+1][tJ]==1)){
                    hospital[tI+1][tJ]=2;
                    q.push({tI+1,tJ});
                    uninfected_count--;
                }
                
                if((tJ<hospital[0].size()-1) && (hospital[tI][tJ+1]==1)){
                    hospital[tI][tJ+1]=2;
                    q.push({tI,tJ+1});
                    uninfected_count--;
                }
            }
        }
        
        return uninfected_count == 0?timeC:-1; 
        
        
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends