// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int zC=0,oC=0,tC=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) zC++;
            if(a[i]==1) oC++;
            if(a[i]==2) tC++;
            
        }
        
        int i =0;
        while(zC){
            a[i]=0;
            i++;
            zC--;
        }
        while(oC){
            a[i]=1;
            i++;
            oC--;
        }
        while(tC){
            a[i]=2;
            i++;
            tC--;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends