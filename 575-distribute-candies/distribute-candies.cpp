class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = candyType.size();

        unordered_set<int> candy(candyType.begin(),candyType.end());

        int canBeEaten = n/2;
        if(canBeEaten > candy.size()){
            return candy.size();
        }
        return canBeEaten;
    }
};