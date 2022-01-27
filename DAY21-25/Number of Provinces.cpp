class Solution {
public:   
    void sona(vector<vector<int>>& grid, vector<int> &v,int i){
        for(int j=0;j<grid.size();j++){
            if(grid[i][j]&&!v[j]){
                v[j]=1;
                sona(grid,v,j);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& grid) {
           int l=grid.size(),i,count=0;
           vector<int>v(l,0);
           for(i=0;i<l;i++)
               if(!v[i]){
                   sona(grid,v,i);
                   count++;
               }
           return count;
    }
};
