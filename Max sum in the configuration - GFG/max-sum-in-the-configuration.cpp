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
    int cur_sum = 0;
    int cur_val = 0;
    for(int i=0;i<N;i++){
        cur_sum+=A[i];
        cur_val+=i*A[i];
    }
    
    int res = cur_val;
    
    for(int i=1;i<N;i++){
        int next_val = cur_val - (cur_sum - A[i-1]) + A[i-1]*(N-1);
        
        cur_val = next_val;
        
        res = max(cur_val,res);
    }
    
    return res;
    
    
    
}