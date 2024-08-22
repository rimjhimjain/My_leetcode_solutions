class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> stack;
        vector<int> ans;
        for (int i = 0; i < ast.size(); i++) {
            if (stack.empty()) {
                stack.push(ast[i]);
                
            } else {
                if(stack.top() < 0 && ast[i] > 0){
                    stack.push(ast[i]);
                    continue;
                }
                if(stack.top()+ast[i] == 0){
                    stack.pop();
                    continue;
                }
                if (stack.top() > 0 && ast[i] > 0 || stack.top() < 0 && ast[i] < 0) {
                    stack.push(ast[i]);
                    cout << stack.top()<<endl;
                    continue;
                }
                if (stack.top() > 0 && ast[i] < 0) {
                    int num = ast[i]*-1;
                    if(stack.top() < num){
                        stack.pop();
                        i--;
                    }
                }
            }
        }
        for (int i = stack.size() - 1; i > -1; i--) {
            ans.insert(ans.begin(),stack.top());
            stack.pop();
        }

        return ans;
    }
};