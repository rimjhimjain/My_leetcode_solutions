class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {   

        unordered_set<string> unique;
        for(int i = 0;i < emails.size();i++){

            string modified ;
            int j  = 0;
            for( j = 0 ; emails[i][j]  != '@' ; j++ ){
                printf("%c ",emails[i][j]);
                if(emails[i][j] == '.'){
                    continue;
                }
                else if ( emails[i][j] == '+' ){
                    
                    break;
                }
                modified+=emails[i][j];


            }
            for( j = j ; emails[i][j]  != '@' ; j++ ){
            }

            for (j = j ; j <  emails[i].size() ; j++){
                modified+=emails[i][j];
                //printf("%c ",emails[i][j]);
            }


















            // for(int j = 0;j < emails[i].size()-4;i++){
            //     if(emails[i][j] == '@'){
            //         break;
            //     }
            //     if(emails[i][j] == '.'){
            //         continue;
            //     }
            //     if(email[i][j] == '+'){

            //     }
            //     modified += emails[i][j];
            // }
            unique.insert(modified);
        }
        return unique.size();
    }
};


