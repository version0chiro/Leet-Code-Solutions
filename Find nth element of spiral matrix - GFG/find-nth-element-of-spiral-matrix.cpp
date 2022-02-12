// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}// } Driver Code Ends


/*You are required to complete this method*/
 int findK(int mat[MAX][MAX], int n, int m, int k)
    {
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        int steps=0;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                steps++;
                if(steps==k)
                    return(mat[top][i]);
            }
            for(int i=top+1;i<=bottom;i++){
                steps++;
                if(steps==k)
                    return(mat[i][right]);
            }
            for(int i=right-1;i>=left;i--){
                steps++;
                if(steps==k)
                    return(mat[bottom][i]);
            }
            for(int i=bottom-1;i>top;i--){
                steps++;
                if(steps==k)
                    return(mat[i][left]);
            }
            top++;
            bottom--;
            left++;
            right--;
        }
        return(-1);
    }//findK

