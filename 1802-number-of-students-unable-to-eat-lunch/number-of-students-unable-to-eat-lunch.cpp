class Solution {
public:
  int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;

    for (int student : students) {
        q.push(student);
    }

    int sandwichIndex = 0;
    int rotations = 0;

    while (!q.empty() && sandwichIndex < sandwiches.size()) {

        if (q.front() == sandwiches[sandwichIndex]) {
            
            q.pop();
            sandwichIndex++;

            
            rotations = 0;
        }
        else {
            
            q.push(q.front());
            q.pop();

            rotations++;
        }

        
        if (rotations == q.size()) {
            break;
        }
    }

    return q.size();
}
    
};