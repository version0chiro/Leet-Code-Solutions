// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
    int sum = 0;
    int product = 0;
    
    for(int i=0;i<N;i++){
        sum+=A[i];
        product+=A[i]*i;
        
    }
    
    int ans = product;
    
    for(int i=1;i<N;i++){
        product=product-(sum-A[i-1])+A[i-1]*(N-1);
        ans=max(product,ans);
    }
    
    return ans;
}