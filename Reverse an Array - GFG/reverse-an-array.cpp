#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        arr[i]=temp;
	    }
	    
	    for(int i=0;i<n/2;i++){
	        int temp = arr[i];
	        arr[i]=arr[n-i-1];
	        arr[n-i-1]=temp;
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}