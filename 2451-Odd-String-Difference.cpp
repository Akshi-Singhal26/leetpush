class Solution {
public:
    string oddString(vector<string>& words) {
        int n= words[0].size() ;
        int m = words.size();

        map< vector<int> , vector<string> > mp;

        for( auto& it : words){
            vector<int>a;
            for ( int j=0 ; j<n-1; j++){
                a.push_back(it[j+1] -it[j]);
                }
                mp[a].push_back(it);
            
        }

        string ans ="";

        for ( auto &it2 : mp){
            if ( it2.second.size() ==1){
                ans = it2.second[0];
                break;
            }
        }

        return ans;
    }
};