class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        char ans;

        for(int i = 0;i < s.length();i++){
            if(smap.find(s[i]) == smap.end()){
                smap[s[i]] = 1;
            }else{
                smap[s[i]] += 1;
            }
        }

        for(int i = 0;i < t.length();i++){
            if(tmap.find(t[i]) == tmap.end()){
                tmap[t[i]] = 1;
            }else{
                tmap[t[i]] += 1;
            }
        }

        for(int i = 0;i < t.size();i++){
            if(tmap.find(s[i]) == tmap.end()){
                ans = t[i];
            }
        }

        for(const auto& i : smap){
            for(const auto& j : tmap){
                if(i.first == j.first){
                    if(i.second != j.second){
                        ans = j.first;
                    }
                }
            }
        }
        return ans;
        
    }
};