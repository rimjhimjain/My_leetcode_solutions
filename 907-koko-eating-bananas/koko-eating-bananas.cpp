class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size()-1;

        if(piles.size() == h){
            return piles[n];
        }

        int left = 1;
        int right = piles[n];
        int hourneed = 0;
        int count = 0;

        while(left < right){
            hourneed = left + (right - left)/2;
                count = 0;
            for(int i = 0;i < piles.size();i++){
                count += (piles[i] + hourneed -1)/hourneed;
            }

            if(count > h){
                left = hourneed+1;
            }else{
                right = hourneed;
            }
        }
        return left;
    }
};