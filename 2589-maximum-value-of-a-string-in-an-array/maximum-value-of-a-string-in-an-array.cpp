class Solution {
public:
    int maximumValue(vector<string>& nums) {
        int count = 0;
        int maximum = 0;

        for(int i = 0;i < nums.size(); i++){
            if(std::all_of(nums[i].begin(),nums[i].end(),::isdigit)){
                count = stoi(nums[i]); 
            }else{
                count = nums[i].length();
            }
            maximum = max(count,maximum);
        }
        return maximum;
    }
};