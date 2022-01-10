class Solution{
public:
    int isValid(vector<vector<int>> mat){
        int col[9][9]={0},row[9][9]={0},num=0;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]>0&&mat[i][j]<=9){
                    num=mat[i][j]-1;
                    if(row[i][num]!=0){
                        return 0;
                    }
                    row[i][num]++;
                    if(col[j][num]!=0){
                        return 0;
                    }
                    col[j][num]++;
                }
                
            }
        }
        for(int i=0;i<9;i+=3){

            for(int j=0;j<9;j+=3){

                unordered_set<int> s;

                for(int n=i;n<i+3;n++){
                    for(int k=j;k<j+3;k++){
                        if(mat[n][k]==0){

                            continue;

                        }

                        if(s.find(mat[n][k])==s.end()){

                            s.insert(mat[n][k]);

                        }

                        else{

                            return 0;

                        }
                    }
                }
            }
        }
        return 1;
    }
};
