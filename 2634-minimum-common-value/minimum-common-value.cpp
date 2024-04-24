class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> set2(nums2.begin(),nums2.end());

        int i = 0;
        for(int j = 0;j < nums1.size();j++){
            if(set2.find(nums1[i]) != set2.end()){
                return nums1[i];
            }else{
                i++;
            }
        }
        
        return -1;
    }
};