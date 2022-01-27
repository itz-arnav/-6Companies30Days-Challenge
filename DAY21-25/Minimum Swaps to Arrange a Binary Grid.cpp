class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int ans=0;
        vector<pair<int,int>>vec;
        for(int i=0;i<grid.size();i++){
            int total=0;
            for(int j=grid.size()-1;j>=0;j--){
                if(grid[i][j]==0)
                    total++;
                else
                    break;
            }
            vec.push_back({i,total});
        }
        for(int t=grid.size()-1;t>0;t--){
            bool u=false;
            for(int j=0;j<vec.size();j++){
                if(vec[j].second >= t){
                    u=true;
                    ans+=(vec[j].first - vec[0].first);
                    for(int k=0;k<j;k++)
                        vec[k].first+=1;
                    vec.erase(vec.begin()+j);
                    break;
                }
            }
            if(u==false)
                return -1;
        }
        return ans;
        
    }
};
