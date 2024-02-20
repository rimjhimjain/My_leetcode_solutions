class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int i = 0;
        int count = 0;
        int n = fruits.size();

        unordered_map<int,int> nmap;

        for(int j = 0;j < n;j++){
            if(nmap.find(fruits[j]) == nmap.end()){
                nmap[fruits[j]] = 1;
            }else{
                nmap[fruits[j]] += 1;
            }

            while(nmap.size() > 2){
                nmap[fruits[i]] -= 1;
                if(nmap[fruits[i]] == 0){
                    nmap.erase(fruits[i]);
                }
                i++;
            }
            count = max(count,j-i+1);
        }
        return count;
    }
};