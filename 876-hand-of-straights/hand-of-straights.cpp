class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int group) {
        int n = hand.size();
        map<int,int> mp;
        for(int i = 0;i < n;i++){
            mp[hand[i]]++;
        }
        sort(hand.begin(),hand.end());

        for(int i = 0;i < n;i++){
            if(mp[hand[i]] == 0){
                continue;
            }
            for(int j = 0;j < group;j++){
                int curr = hand[i] + j;
                if(mp[curr] == 0){
                    return false;
                }
                mp[curr]--;
            }
        }

        
        return true;
    }
};