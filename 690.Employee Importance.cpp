/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int importance = 0;
        
        for(auto employee : employees){
            if(employee->id == id){
                importance = employee->importance;
                for(auto subordinate_id : employee->subordinates){
                    importance += getImportance(employees, subordinate_id);
                }
                break;
            }
        }  
        return importance;
    }
};