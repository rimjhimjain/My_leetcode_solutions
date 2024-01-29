class Solution {
public:
    char slowestKey(vector<int>& keysPressed, string alpha) {
        vector <int> duration;
        int diff = 0;
        duration.push_back(keysPressed[0]);
        for(int i =0;i < keysPressed.size()-1;i++){
            diff = keysPressed[i+1]-keysPressed[i];
            duration.push_back(diff);
        }
        for(int i =0;i < duration.size();i++){
            cout << duration[i] << endl;
        }

        int max = *max_element(duration.begin(),duration.end());
        cout << "max = "<< max<< endl;
        vector<char> candidates;

        for(int i = 0;i < duration.size();i++){
            if(duration[i] == max){
                candidates.push_back(alpha[i]);
            }
        }

        for(int i =0;i < candidates.size();i++){
            cout<<candidates[i]<<endl;
        }
       

        if (candidates.size() > 0) {
            char result = *std::max_element(candidates.begin(), candidates.end());
            return result;
        } else {
           return alpha[keysPressed.size() - 1];
        }
 
    }
};