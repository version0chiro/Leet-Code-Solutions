// { Driver Code Starts

// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int ind=0;
   vector<pair<int,int>> ans;
   
   for(int i=1; i<n; i++){
       if(price[i] < price[i-1]){
           while(ind+1 < n && price[ind+1] == price[ind]) ind++;
           if(ind != i-1) ans.push_back({ind,i-1});
           ind = i;
       }
       
   }
   while(ind+1 < n && price[ind+1] == price[ind]) ind++;
   if(ind < n-1) ans.push_back({ind,n-1});
   
   if(ans.size()){
       for(int i=0; i<ans.size(); i++){
           auto p = ans[i];
           cout<<"("<<p.first<<" "<<p.second<<") ";
       }
   }
   else cout<<"No Profit";
   cout<<endl;
        
        
}