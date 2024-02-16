class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        int left = 0;
        int right = 0;
        vector<int> ans;
       
            while(right < n){
                while(!dq.empty() && dq.back() < left)
                    dq.pop_back();
                
                while(!dq.empty() && nums[right] > nums[dq.front()])
                    dq.pop_front();
                    dq.push_front(right);
                
                if(right - left + 1 == k) {
                ans.push_back(nums[dq.back()]);
                if(dq.back() == left)
                    dq.pop_back();
                left++;
            }
            right++;
            }
        return ans;
    }
};