class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int l) {

        int n  = h.size();
        priority_queue<int> p;
        int i = 0;

        for(i = 0; i < n-1;i++){

            int need = h[i+1] - h[i];

            if(need <= 0) continue;

            bricks -= need;
            p.push(need);

            if(bricks < 0){
                bricks += p.top();
                p.pop();
                l--;
            }

            if(l < 0) break;

        }

        return i;
    }
};
