class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int i = 0;
        int s = n-1;
        int res =0 ,check = 0;

        while(i != n){
            if(colors[i] != colors[s]){
                res = abs(s-i);
                check = max(check,res);
            }
            i++;
        }
        i =0;

        while(i != n){
            if(colors[s] != colors[i]){
                res = abs(s-i);
                check = max(check,res);
                break;
            }else{
                s--;
            }
        }
        return check;
    }
};