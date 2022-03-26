// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
queue<int> q1,q2;
bool flag=true;
void QueueStack :: push(int x)
{
    if(flag){
        q1.push(x);
    }else{
        q2.push(x);
    }
        // Your Code
}
// [3,2] [] ... [] [2,3] ... [] [4, 

// [2,3] [] ... [3,2] []
//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code  
        if(q1.size()==0 && q2.size()==0) return -1;
        
        if(flag){
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            auto ans = q1.front();
            q1.pop();
            flag=!flag;
            return ans;
            
        }else{
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            auto ans = q2.front();
            q2.pop();
            flag=!flag;
            return ans;
        }
}

