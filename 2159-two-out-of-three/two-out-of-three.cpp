class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& a, vector<int>& b, vector<int>& c) {
        unordered_set<int> mp1(a.begin(),a.end());
        unordered_set<int> mp2(b.begin(),b.end());
        unordered_set<int> mp3(c.begin(),c.end());
        unordered_set<int> res;
        
        for(int i = 0;i <a.size();i++){
            if(mp2.find(a[i]) != mp2.end() || mp3.find(a[i]) != mp3.end()){
                res.insert(a[i]);
            }
        }

        for(int i = 0;i <b.size();i++){
            if(mp1.find(b[i]) != mp1.end() || mp3.find(b[i]) != mp3.end()){
                res.insert(b[i]);
            }
        }

        for(int i = 0;i <c.size();i++){
            if(mp2.find(c[i]) != mp2.end() || mp1.find(c[i]) != mp1.end()){
                res.insert(c[i]);
            }
        }
        vector<int> ans(res.begin(),res.end());

        
        return ans;
    }
};