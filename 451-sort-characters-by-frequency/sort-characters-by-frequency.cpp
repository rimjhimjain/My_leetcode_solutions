class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(int i = 0;i < s.length();i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = 1;
            }else{
                mp[s[i]] += 1;
            }
        }

        multimap<int , char> mp2;

        for (const auto &i : mp) {
            mp2.insert({i.second, i.first});
        }
        
        string str = "";
        for(const auto i : mp2){
            int n = i.first;
            for(int j = 0;j < n;j++){
            str+=i.second;
            }
        }
        string rs = "";
        for(int i = str.length()-1;i > -1;i--){
            rs += str[i];
        }
        return rs;
    }
};