// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string removeComments (string s);
int main()
{
    int t; cin >> t;
    cin.ignore ();
    while (t--)
	{
		string s;
		getline (cin, s);
		cout << removeComments (s) << endl;
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


string removeComments (string code)
{
    // Your Code Here
    string ans="";
    string temp = "";
    int i=0;
    
    while(i<code.size()){
        if(i<code.size()-1 && code[i]=='/' && code[i+1]=='/'){
            ans+=temp;
            temp="";
            
            while(i<code.size()-1){
                if(code[i+1]=='n' && code[i]==92) 
                {
                    i=i+2;
                    break;
                }
                i++;
            }
                // cout<<"ending "<<i<<" "<<code[i]<<" "<<code[i+1]<<" "<<code[i+2]<<" "<<" \n";
        }
        
        else if(i<code.size()-1 && code[i+1]=='*' && code[i]=='/'){
            ans+=temp;
            temp="";
            while(i<code.size()-1 ){
                if(code[i+1]=='/' && code[i]=='*') {
                    i=i+2;
                    break;
                }
                i++;
            }
        }
        
        else{
            temp+=code[i++];
        }
    }
    
    ans+=temp;
    
    return ans;
}