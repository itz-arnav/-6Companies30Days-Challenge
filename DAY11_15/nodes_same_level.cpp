class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*> q;
       q.push(root);
       while(!q.empty())
       {
           int sz=q.size();
          while(sz>0)
          {
              Node* curr=q.front();
              q.pop();
              sz--;
              if(sz==0)
              {
                  curr->nextRight=NULL;
              }
              else
              {
                  curr->nextRight=q.front();
              }
              if(curr->left) q.push(curr->left);
              if(curr->right) q.push(curr->right);
          }
       }
    }     
      
};
