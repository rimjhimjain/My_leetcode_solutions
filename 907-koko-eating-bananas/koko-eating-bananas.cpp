class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());

        int n = piles.size();

        if(n == h) return piles[n-1];

        int left = 1;
        int right = piles[n-1];

        long hourneed = 0;
        long count = 0;

        while(left <= right){
            hourneed = left + (right-left)/2;

            count = 0;
            for(int i = 0;i < n;i++ ){
                if(hourneed > piles[i]){
                    count += 1;
                }else{
                    int d = piles[i]/hourneed;
                    count += d;
                    if(piles[i]%hourneed != 0){
                        count+=1;
                    }
                }
            }
                // cout << hourneed << " " << count << endl;
            if(count > h){
                left = hourneed+1;
            }else{
                right = hourneed-1;
            }
            // cout << "left = "<<left <<endl;
            // cout << "right = "<<right <<endl;
            
        }
        return left;

    }
};

//4,11,20,23,30