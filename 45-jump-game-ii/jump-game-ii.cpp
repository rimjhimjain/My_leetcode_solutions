class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;
        int cur = 0;
        int curfar = 0; 
        
        for (int i = 0; i < n - 1; i++) {
            curfar = max(curfar, i + nums[i]);
            cout << "cur = " << cur <<endl;
            cout << "curfur = " <<curfar <<endl;
            if (i == cur) {
                jumps++;
                cur = curfar;
            }
            cout << "jumps = " <<jumps <<endl;
        }

        return jumps;
    }
};