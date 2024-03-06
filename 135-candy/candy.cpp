class Solution {
public:
    int candy(vector<int>& rate) {
        int n = rate.size();
        int sum = 0;

        vector<int> candy(n,1);

        for(int i = 1;i < n;i++){
            if(rate[i-1] < rate[i] && candy[i-1] >= candy[i]){
                candy[i] = candy[i-1]+1;
            }
        }

        for(int i = n-2;i > -1;i--){
            if(rate[i+1] < rate[i] && candy[i+1] >= candy[i]){
                candy[i] = candy[i+1]+1;
            }
        }

        // cout
        for(int i = 0;i < n;i++){
            cout<<candy[i] <<" ";
            sum+=candy[i];
        }
        


        return sum;
    }
};

// 1 2 7 4 3 3 1
// 1,2,5,4,3,3,1
// 1,2,3,2,1,2,1