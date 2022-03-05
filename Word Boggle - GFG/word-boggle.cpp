// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:

    
    bool dfs(vector<vector<char>>  &board,int i,int j,string temp,string check){
        if(check.size()==0) return true;
        if(i<0 ||j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='0' || board[i][j]!=check[0]) return false;
        
        check = check.substr(1);
        
        auto tempC = board[i][j];
        
        board[i][j]='0';
        
        
        bool ans = false;
        ans |= dfs(board,i+1,j,temp,check);
        ans |=dfs(board,i,j+1,temp,check);
        ans |=dfs(board,i-1,j,temp,check);
        ans |=dfs(board,i,j-1,temp,check);
        
        ans |=dfs(board,i+1,j+1,temp,check);
        ans |=dfs(board,i+1,j-1,temp,check);
        ans |=dfs(board,i-1,j+1,temp,check);
        ans |=dfs(board,i-1,j-1,temp,check);
        
        board[i][j]=tempC;
        
        return ans;
        
        
        
    }
    
    bool find(vector<vector<char>> &board,string word){
        int n= board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,i,j,"",word)) return true;
            }
        }
        
        return false;
    }
    
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    
	    vector<string> finalAns;
	   for(auto a:dictionary){
	       if(find(board,a)) finalAns.push_back(a);
	   }
	    
	    
	    return finalAns;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}
  // } Driver Code Ends