class Solution {
public:
    int largestInteger(int num) {

        priority_queue<int> even;
        priority_queue<int> odd;

        vector<int> digit;
        while(num != 0){
            int temp = num%10;
            num = num/10;
            digit.insert(digit.begin(),temp);
        }

        int n = digit.size();
        for(int i = 0;i < n;i++){
            if(digit[i]%2 == 0){
                even.push(digit[i]);
            }else{
                odd.push(digit[i]);
            }
        }

        vector<int> sorted;
        int value = 0;
        for(int i =0;i < n;i++){
            if(digit[i]%2 == 0){
                value = even.top();
                even.pop();
            }else{
                value = odd.top();
                odd.pop();
            }
            sorted.push_back(value);  
        }
        string str;

        for(int i = 0;i < n;i++){
            str += to_string(sorted[i]);
        }

        int ans = stoi(str);
        return ans;
    }
};