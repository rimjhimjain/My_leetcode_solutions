class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int> nmap;
            int n = text.size();
        for(int i = 0;i < n;i++){
            if(nmap.find(text[i]) == nmap.end()){
                nmap[text[i]] = 1;
            }else{
                nmap[text[i]] += 1;
            }
        }
        int ans = 0;
        for(const auto& i : nmap){
            ans = min(nmap['b'],min(nmap['a'],min(nmap['l']/2,min(nmap['o']/2,nmap['n']))));
        }
        return ans;
    }
};