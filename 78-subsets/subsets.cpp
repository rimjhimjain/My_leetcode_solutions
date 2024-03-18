class Solution {
public:

    void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &res){

        if(index >= nums.size()){
            res.push_back(output);
            return;
        }
        solve(nums,output,index+1,res);

        output.push_back(nums[index]);
        solve(nums,output,index+1,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> output;
        int index =0 ;

        solve(nums,output,index,res);
        return res;
    }
};