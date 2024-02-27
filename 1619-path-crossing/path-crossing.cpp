class Solution {
public:
    bool isPathCrossing(string path) {
        int x =0 , y = 0;
        set<pair<int,int>> str;
        str.insert({0,0});
        for(char dir : path){
            if(dir == 'N'){
                x++;
            }else if(dir == 'S'){
                x--;
            }else if(dir == 'W'){
                y--;
            }else{
                y++;
            }
            if(str.find({x,y}) != str.end()){
                return true;
            }
            str.insert({x,y});
        }
        return false;
    }
};

// N = (1,0) , S = (-1,0) , E = (0,1) , W = (0,-1)