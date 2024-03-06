class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> ans;
        for(int i = 0; i < nums1.size();i++){
            int check = 0;
            for(int j = 0;j < n;j++){
                if(nums1[i] == nums2[j]){
                    check =1;
                }
                if(check ==1){
                    if(nums1[i] < nums2[j]){
                        ans.push_back(nums2[j]);
                        check =0;
                    }else if(j == n-1){
                        ans.push_back(-1);
                        check =0;
                    }
                }
            }
        }
        return ans;
    }
};