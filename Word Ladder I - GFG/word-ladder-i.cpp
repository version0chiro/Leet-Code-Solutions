// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string beginWord, string endWord, vector<string>& wordList) {
        // Code here
        unordered_set<string>st(wordList.begin(),wordList.end());
        int level=1;
        queue<string> q;
        q.push(beginWord);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                            auto temp = q.front();
            q.pop();
            if(temp==endWord){
                return level;
            }
            st.erase(temp);
            for(int i=0;i<temp.size();i++){
                char ch = temp[i];
                for(int k=0;k<26;k++){
                    temp[i] = k+'a';
                    if(st.count(temp)){
                        q.push(temp);
                    }

                }
                temp[i]=ch;
            }

                
            }
            level++;
        }
        
        return 0;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends