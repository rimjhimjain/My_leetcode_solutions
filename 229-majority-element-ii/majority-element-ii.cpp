class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int c1 = 0;
        int c2 = 0;
        int num1 = INT_MIN;
        int num2 = INT_MIN;

        for(auto& i: nums){
            if(i == num1){
                c1++;
            }else if(i == num2){
                c2++;
            }else if(c1 == 0){
                num1 = i;
                c1++;
            }else if(c2 == 0){
                num2 = i;
                c2++;
            }else{
                c1--;
                c2--;
            }
        }

        c1 = 0;
        c2 = 0;
        for(auto& i : nums){
            if(num1 == i){
                c1++;
            }
            if(num2 == i){
                c2++;
            }
        }
        if(c1 > n/3) ans.push_back(num1);
        if(c2 > n/3) ans.push_back(num2);
        return ans;
    }
};