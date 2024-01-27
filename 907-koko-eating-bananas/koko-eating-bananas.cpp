class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        
        if(piles.size() == h){
            return piles[h-1];
        }

        int n = piles.size()-1;

        int left = 1;
        int right = piles[n];
        int hourneed = (left+right)/2;

        int count = 0;

            while(left < right){
                count  = 0;
                for(int i = 0;i < piles.size();i++){
                    count += (piles[i] + hourneed - 1) / hourneed;
                }
                
                if(count > h){
                    left = hourneed+1;
                }else{
                    right = hourneed;
                }
                    hourneed = left + (right - left)/2;
            }

        return left;
    }
};