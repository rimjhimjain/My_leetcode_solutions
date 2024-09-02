class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i = 0;
        long long totalchalks = accumulate(chalk.begin(),chalk.end(),0LL);
        k %= totalchalks;
        for( i = 0;i < chalk.size();i++){
            if(k < chalk[i]) return i;
            k -= chalk[i];
        }
        return -1;
    }
};