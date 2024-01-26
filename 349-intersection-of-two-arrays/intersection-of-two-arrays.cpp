class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;

        unordered_set<int> set1(nums1.begin(),nums1.end());

        for(int i = 0;i < nums2.size();i++){
            if(set1.find(nums2[i]) != set1.end()){
                answer.push_back(nums2[i]);
            }
        }

        unordered_set<int> set2(answer.begin(),answer.end());

        vector<int> result(set2.begin(),set2.end());
        


        return result;
        
    }
};