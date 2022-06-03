// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here..
    int firstBuy = INT_MAX;
    int firstSell = 0;
    int secondBuy = INT_MAX;
    int secondSell = 0;
    
    for(int i=0;i<price.size();i++){
        firstBuy=min(firstBuy,price[i]);
        firstSell = max(firstSell,price[i]-firstBuy);
        
        secondBuy=min(secondBuy,price[i]-firstSell);
        secondSell = max(secondSell,price[i]-secondBuy);
    }
    
    return secondSell;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}
  // } Driver Code Ends