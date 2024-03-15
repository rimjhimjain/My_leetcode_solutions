class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& a, vector<int>& b, vector<int>& c) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        unordered_map<int, int> mp3;

        for(int i = 0;i <a.size();i++){
            if(mp1.find(a[i]) == mp1.end()){
                mp1[a[i]] = 1;
            }else{
                mp1[a[i]] += 1;
            }
        }

        for(int i = 0;i <b.size();i++){
            if(mp2.find(b[i]) == mp2.end()){
                mp2[b[i]] = 1;
            }else{
                mp2[b[i]] += 1;
            }
        }

        for(int i = 0;i <c.size();i++){
            if(mp3.find(c[i]) == mp3.end()){
                mp3[c[i]] = 1;
            }else{
                mp3[c[i]] += 1;
            }
        }

        vector<int> res;
        for(int i = 0;i <a.size();i++){
            if(mp2.find(a[i]) != mp2.end() || mp3.find(a[i]) != mp3.end()){
                res.push_back(a[i]);
            }
        }

        for(int i = 0;i <b.size();i++){
            if(mp1.find(b[i]) != mp1.end() || mp3.find(b[i]) != mp3.end()){
                res.push_back(b[i]);
            }
        }

        for(int i = 0;i <c.size();i++){
            if(mp2.find(c[i]) != mp2.end() || mp1.find(c[i]) != mp1.end()){
                res.push_back(c[i]);
            }
        }
        if(res.size() == 0) return res;
        unordered_set<int> ans(res.begin(),res.end());
        
        vector<int> an(ans.begin(),ans.end());
        return an;
    }
};