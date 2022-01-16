int solve(Node* root,int x,int &ans){
if(!root)
return 0;

int left = solve(root->left,x,ans);
int right = solve(root->right,x,ans);

if(left+right+root->data==x)
ans++;

return left+right+root->data;
}

int countSubtreesWithSumX(Node* root, int X)
{
int ans = 0;
int temp = solve(root,X,ans);
return ans;
}
