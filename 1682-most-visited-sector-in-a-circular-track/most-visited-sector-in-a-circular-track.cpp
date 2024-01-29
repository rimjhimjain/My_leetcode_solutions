class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& nums) {
        vector<int> count;
        int num = nums[0];
        count.push_back(nums[0]);

        for(int i = 0;i < nums.size()-1;i++){
            num = nums[i];
            while(num != nums[i+1]){
                if(num >= n) num = 0;
                num++;
                count.push_back(num);
            }
        }
        
        vector<int> occur;

        for(int i = 0;i < n;i++){
            occur.push_back(0);
        }

        for(int j = 0;j < n;j++){
            for(int i = 0;i < count.size();i++){
                if(j+1 == count[i]){
                    occur[j] += 1;
                }
            }
        }
        count.clear();
        int max = *max_element(occur.begin(),occur.end());

        for(int i = 0; i < occur.size();i++){
            if(occur[i] == max){
                count.push_back(i+1);
            }
        }
        return count;
    }
};