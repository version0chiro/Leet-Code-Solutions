// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    set<string> ans;
    set<string> s;
    bool dfs(vector<vector<char>>&board ,int i,int j,string word,int n ,int m)
    {
        if(word.size()==0) return true;
        if(i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[0]) return false;
        char temp=board[i][j];
        string check=word.substr(1);
        board[i][j]='#';
        bool ans = dfs(board,i-1,j-1,check,n,m);
        ans|= dfs(board,i-1,j,check,n,m);
        ans|= dfs(board,i-1,j+1,check,n,m);
        ans|= dfs(board,i,j-1,check,n,m);
        ans|= dfs(board,i,j+1,check,n,m);
        ans|= dfs(board,i+1,j-1,check,n,m);
        ans|= dfs(board,i+1,j,check,n,m);
        ans|= dfs(board,i+1,j+1,check,n,m);
        board[i][j]=temp;
        return ans;
    }
    
    bool find(vector<vector<char>> &board,string word){
        int n= board.size();
        int m = board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,i,j,word,n,m)) return true;
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