// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board,string word){
        
        if(word.size()==0) return true;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || word.front()!=board[i][j] || board[i][j]=='#') return false;
        
        word=word.substr(1,word.size()-1);
        bool ans = false;
        char prev = board[i][j];
        board[i][j]='#';
        ans = ans || solve(i+1,j,board,word);
        ans = ans || solve(i,j+1,board,word);
        ans = ans || solve(i-1,j,board,word);
        ans = ans || solve(i,j-1,board,word);
        board[i][j]=prev;
        
        return ans;
        
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word.front()){
                    if(solve(i,j,board,word)) return true;
                }
            }
        }
        
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends