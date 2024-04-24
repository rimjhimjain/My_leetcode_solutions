class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        map<int,int> map;

        for(int i = 0;i < trust.size();i++){
            map[trust[i][0]] = 0;
        }
        int judge = -1;

        int s = 1;
        for(int i = 0;i < n+1;i++){
            if(map.find(s) == map.end()){
                judge = s;
                break;
            }else{
                s++;
                if(s == n+1){
                    break;
                }
            }
        }

        vector<int> arr;
        for(int i = 0;i < trust.size();i++){
            if(trust[i][1] == judge){
                arr.push_back(trust[i][0]);
            }
        }
        for(int i = 0;i < arr.size();i++){
            cout << arr[i] << endl;
        }
        if(arr.size() == n-1){
            return judge;
        }

        
        return -1;
    }
};