class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int size = bed.size();
        if(n==0) return true;
        
        for(int i = 0;i < size;i++){
            if( (i == 0 || bed[i-1] == 0) && (bed[i] == 0) && (i == size-1 || bed[i+1] == 0 )){
                bed[i] = 1;
                n--;
            }
            
            if(n == 0) return true;
        }

        return false;
    }
};


