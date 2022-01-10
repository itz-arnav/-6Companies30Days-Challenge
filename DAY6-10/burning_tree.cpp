class Solution {
  public:
    int minTime(Node* root, int target) 
{
    map<Node*, Node*> m;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node *curr = q.front();
        q.pop();
        if(curr->left) {
            m[curr->left] = curr;
            q.push(curr->left);
        }
        if(curr->right) {
            m[curr->right] = curr;
            q.push(curr->right);
        }
    }
    Node *tar = NULL;
    q.push(root);
    while(!q.empty()) {
        tar = q.front();
        q.pop();
        if(tar->data == target) {
            break;
        }
        if(tar->left) q.push(tar->left);
        if(tar->right) q.push(tar->right);
    }
        
    queue<pair<Node*, int>> time;
    int ans = 0;
    map<Node*, int> vis;
    time.push({tar, 0});
    vis[tar] = 1;
        
    while(!time.empty()) {
        ans = time.front().second;
        Node *curr = time.front().first;
        time.pop();
        if(m.find(curr)!=m.end() && vis.find(m[curr])==vis.end()) {
            time.push({m[curr], ans+1});
            vis[m[curr]] = 1;
        }
        if(curr->left && vis.find(curr->left)==vis.end()) {
            time.push({curr->left, ans+1});
            vis[curr->left] = 1;
        }
        if(curr->right && vis.find(curr->right)==vis.end()) {
            time.push({curr->right, ans+1});
            vis[curr->right] = 1;
        }
    }
    return ans;
}
};
