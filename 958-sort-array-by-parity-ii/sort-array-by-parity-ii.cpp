class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();

        priority_queue<int> even;
        priority_queue<int> odd;

        for(int i = 0; i < n ;i++){
            if(nums[i]%2 == 0){
                even.push(nums[i]);
            }else{
                odd.push(nums[i]);
            }
        }
        
        vector<int> result;
        for(int i = 0;i < n/2;i++){
            result.push_back(even.top());
            even.pop();
            result.push_back(odd.top());
            odd.pop();
        }
        return result;
    }
};