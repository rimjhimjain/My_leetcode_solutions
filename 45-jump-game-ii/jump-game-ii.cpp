class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            nums[i] = max(nums[i] + i, nums[i - 1]);
            cout << nums[i]<<" ";
        }
        cout << "next " << endl;
        for(int i = 0; i < n;i++){
            cout << nums[i] << " ";
        }
        cout << "---" << endl;
        int count = 0;
        int in = 0;
        while(in < n-1){
            count++;
            in = nums[in];
            cout << "ans = "<< count <<endl;
            cout << "in = "<<in<<endl;
        }
        return count;
    }
};