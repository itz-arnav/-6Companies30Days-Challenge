vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
   {
       // code here 
       vector<int> ans;
       int dir=0;
       int left=0,right=c-1,top=0,down=r-1;
       while(left<=right&&top<=down){
           if(dir==0){
               for(int i=left;i<=right;i++)
               ans.push_back(matrix[top][i]);
               top+=1;
           }
           else if(dir==1){
               for(int i=top;i<=down;i++)
               ans.push_back(matrix[i][right]);
               right-=1;
           }
           else if(dir==2){
               for(int i=right;i>=left;i--)
               ans.push_back(matrix[down][i]);
               down-=1;
           }
           else if(dir==3){
               for(int i=down;i>=top;i--)
                   ans.push_back(matrix[i][left]);
                   left+=1;
           }
           dir=(dir+1)%4;
       }
       return ans;
   }
