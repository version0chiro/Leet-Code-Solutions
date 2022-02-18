// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       if(s1=="0"||s2=="0") return "0";
       bool negFlag = false;
       
       if(s1[0]=='-' && s2[0]=='-'){
           s1.erase(0,1);
           s2.erase(0,1);
       }
       
       if(s1[0]=='-'){
           s1.erase(0,1);
           negFlag=true;
       }
       
       if(s2[0]=='-'){
           s2.erase(0,1);
           negFlag=true;
       }
       
       int n1 = s1.size();
       int n2= s2.size();
       
       vector<int> ans(n1+n2,0);
    //   int ans = 0;
       
       
       
       for(int i=s1.size()-1;i>=0;i--){
           int temp = 0;
           int carry=0;
           for(int j=s2.size()-1;j>=0;j--){
               ans[i+j+1]+= (s1[i]-'0')*(s2[j]-'0');
               carry=ans[i+j+1];
               ans[i+j]+=carry/10;
               ans[i+j+1]=carry%10;
           }
       }
       int i=0;
       while(ans[i]==0){
           i++;
       }
       string s3="";
       if(negFlag==true){
           s3+='-';
       }
       
       while(i<ans.size()){
           s3+=to_string(ans[i++]);}
           
       
       return s3;
       
    //   return ans;
    }

};

// { Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}  // } Driver Code Ends