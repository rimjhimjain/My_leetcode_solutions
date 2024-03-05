class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {   

        unordered_set<string> unique;
        for(string email : emails){
            string modified ;
            int j  = 0;
            for(char c : email){
                if(c == '.'){
                    continue;
                }
                if(c == '+'){
                    break;
                }
                if(c == '@') break;
                modified+=c;
            }
            int index = email.find('@');
            for (j = index ; j <  email.size() ; j++){
                modified+=email[j];
            }
            cout << modified;
            unique.insert(modified);
        }
        return unique.size();
    }
};


