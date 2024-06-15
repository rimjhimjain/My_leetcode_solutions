class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        vector<pair<int,int>> projects;
        int n = capital.size();
        for(int i = 0;i < n;i++){
            projects.emplace_back(capital[i],profits[i]);
        }
        
        sort(projects.begin(),projects.end());

        priority_queue<int> maxheap;

        int i = 0;

        for(int j = 0;j < k;j++){
            while(i < n && projects[i].first <= w){
                maxheap.push(projects[i].second);
                i++;
            }

            if(maxheap.empty()){
                break;
            }

            w += maxheap.top();
            maxheap.pop();
        }
        return w;
    }
};