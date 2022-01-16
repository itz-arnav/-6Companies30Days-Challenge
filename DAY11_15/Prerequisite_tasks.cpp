lass Solution
{
    public:
bool isPossible(int N, vector<pair<int, int="">> &prerequisites) 
{
    vector<int> adj[N];
    vector<int> degree0(N, 0);
    
    for(auto edge: prerequisites)
    {
        int u = edge.first;
        int v = edge.second;
        
        adj[u].push_back(v);
        
        degree0[v]++;
    }
    
    queue<int> q;
    for(int i = 0; i < N; i++)
    {
        if(degree0[i] == 0)
        {
            q.push(i);
        }
    }
    
    int count = 0;
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(auto v: adj[u])
        {
            degree0[v]--;
            
            if(degree0[v] == 0)
            {
                q.push(v);
            }
        }
        
        count++;
    }
    
    return count == N;
}
};
