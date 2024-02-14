class Solution {
public:
    int countHillValley(vector<int>& nums) {

        int count = 0;

        for(int i = 1;i < nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i);
                i--;
            }else{
                if((nums[i-1] > nums[i] && nums[i] < nums[i+1]) || (nums[i-1] < nums[i] && nums[i] > nums[i+1])){
                    count++;
                }
            }
                // cout << "count = " << count << endl;
                // cout << nums[i] <<endl;
        }

        return count;
        
    }
};