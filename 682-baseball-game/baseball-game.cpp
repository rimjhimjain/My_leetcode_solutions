class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> ans;
        int n;

        for(int i = 0;i < operations.size();i++){
            // cout << "g";
            if(operations[i] == "D"){
                // if (!ans.empty()) {
                    int insert = ans.back() * 2;
                    ans.push_back(insert);
                // }
            }else if (operations[i] == "+") {
                    int sum = ans[ans.size() - 1] + ans[ans.size() - 2];
                    cout << " sum = " << sum << endl;
                    ans.push_back(sum);
            }else if(operations[i] == "C"){
                ans.pop_back();
            }else{
                ans.push_back(stoi(operations[i]));
            }
            
        }
        cout << ans.size();
        int sum =0;
        for(int i = 0;i < ans.size();i++){
            cout << ans[i]<< " ";
            sum += ans[i];
        }
        return sum;
    }
};