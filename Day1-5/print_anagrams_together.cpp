class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        unordered_map<string, vector<string>> mp;
        
        
        for(auto &s : str){
            string x = s;
            sort(x.begin(), x.end());
            if(mp.find(x) != mp.end()){
                mp[x].push_back(s);
            }
            else{
                mp[x] = vector<string>(); 
                mp[x].push_back(s);
            }
        }
        vector<vector<string> > result =  vector<vector<string>>(mp.size());
        int i = 0;
        for(auto &x : mp){
            result[i] =  vector<string>();
            auto p = x.second;
            for(auto &s : p){
                result[i].push_back(s);
            }
            i++;
       }
       return result;
    }
};
