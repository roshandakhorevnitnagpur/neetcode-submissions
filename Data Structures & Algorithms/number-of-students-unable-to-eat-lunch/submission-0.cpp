class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int>q;
        for(int student: students){
            q.push(student);
        }
        int ans = n;
        for(int sandwich : sandwiches){
            int i=0;
            while(i<n && q.front()!= sandwich){
                int frontElement = q.front();
                q.push(frontElement);
                q.pop();
                i++;
            }
            if(q.front() == sandwich){
                q.pop();
                ans--;
            }
            else{
                break;
            }
        }
        
        return ans;
    }
};