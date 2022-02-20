// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/

bool cmp(struct val a,struct val b){
    return a.first<b.first;
}

int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,cmp);
    
    int lis[n],ans=0;
    lis[0]=1;
    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<i;j++){
            if(p[j].second<p[i].first)
            lis[i]=max(lis[i],lis[j]+1);
        }
    }
    
    for(int i=0;i<n;i++){
        ans=max(ans,lis[i]);
    }
    
    
    return ans;
//Your code here
}