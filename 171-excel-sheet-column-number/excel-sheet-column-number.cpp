class Solution {
public:
    int titleToNumber(string s) {
        long result = 0;
        int size = s.length()-1;

        for(int i : s){
            if(size == -1) break;
            long c = i - 'A' +1;
            long power = pow(26,size);
            result += (c*power);
            size--;
        }

        
        return result;
    }
};