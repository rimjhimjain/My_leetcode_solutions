class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;
        for(int i : nums){
            if(i > 9 && i < 100) count++;
            if(i > 999 && i < 10000) count++;
            if(i == 100000) count++; // because constraint is till 10^5;
        }
        return count;
    }
};