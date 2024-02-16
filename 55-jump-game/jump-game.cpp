class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reach = 0;

        for(int i = 0;i < n;i++){
           if(i > reach) return false;
            cout << "n = "<< n << endl;
            cout << "reach = "<< reach << endl;
            reach = max(reach,i+nums[i]);
        }

        return true;
        
    }
};