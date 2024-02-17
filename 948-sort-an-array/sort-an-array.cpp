class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> pq;

        int n = nums.size();
        for(int i= 0; i < n;i++){
            pq.push(nums[i]);
        }
        vector<int> ans;
        for(int i = 0;i < n;i++){
            ans.insert(ans.begin(),pq.top());
            pq.pop();
        }
        return ans;
    }
};