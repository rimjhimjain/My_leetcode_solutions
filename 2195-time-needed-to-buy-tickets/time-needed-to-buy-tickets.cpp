class Solution {
public:
    int timeRequiredToBuy(vector<int>& ticket, int k) {
        
        int i = 0;
        int time = 0;
        while(ticket[k] != 0){
            if(i == ticket.size()){
                i = 0;
            }
            time++;
            if(ticket[i] < 1) time--;
            ticket[i]--;
            i++;
        }
        return time;
    }
};