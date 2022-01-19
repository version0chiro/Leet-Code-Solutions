/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    
    unordered_map<int,Employee*> m;
    
    int recur(int id){
        int importance = m[id]->importance;
        
        for(auto a:m[id]->subordinates){
            importance += recur(a);
        }
        
        return importance;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
            
        
        
        for(auto a:employees){
            m[a->id] = a;
        }
        
        
        int ans = recur(id);
        
        
        
        return ans;
    }
};