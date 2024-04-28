class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> count;
        for(int i = 0;i < n;i++){
            count[nums[i]]++;
        }

        int index = 0;
        
        for(int i = 0; i < count[0]; i++) {
            nums[index++] = 0;
        }
        
        for(int i = 0; i < count[1]; i++) {
            nums[index++] = 1;
        }
        
        for(int i = 0; i < count[2]; i++) {
            nums[index++] = 2;
        }
        
    }
};