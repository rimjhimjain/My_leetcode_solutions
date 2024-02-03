class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> count;
        int sum =0;

        for(int i = 0;i < nums.size();i++){
            if(count.find(nums[i]) == count.end()){
                count[nums[i]] = 1;
            }else{
                count[nums[i]] += 1;
            }
        }

        for(const auto& i : count){
            if(i.second == 1){
                sum += i.first;
            }
        }
        return sum;
    }
};