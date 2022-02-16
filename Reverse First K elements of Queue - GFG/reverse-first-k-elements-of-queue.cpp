// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> st;
    
    while(k){
        st.push(q.front());
        q.pop();
        k--;
    }
    
    queue<int> q2;
    
    while(q.size()){
        q2.push(q.front());
        q.pop();
        
    }
    
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    
    while(q2.size()){
        q.push(q2.front());
        q2.pop();
    }
    
    return q;
    // add code here.
}