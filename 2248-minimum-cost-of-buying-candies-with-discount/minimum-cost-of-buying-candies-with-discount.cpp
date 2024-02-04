class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1) return cost[0];
        sort(cost.begin(),cost.end());
        int n = cost.size();

        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += cost[i];
            cout << cost[i] << " ";
        }
        cout <<"sum = "<< sum<< endl;

        for(int i = n-3;i > -1;i-=3){
            cout << cost[i] << endl;
            sum -= cost[i];

        }
        return sum;
    }
};