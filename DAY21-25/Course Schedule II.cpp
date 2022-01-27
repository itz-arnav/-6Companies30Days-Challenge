class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int>q;
        vector<int>v;
        vector<int>ind(numCourses,0);
        vector<int>graph[numCourses];
        int i;
        for(i=0;i<prerequisites.size();i++)
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        for(i=0;i<numCourses;i++)
            for(auto it: graph[i])
                ind[it]++;
        for(i=0;i<numCourses;i++)
            if(!ind[i]) q.push(i);
        int p=0,k;
        while(!q.empty()){
            k=q.front();
            v.push_back(k);
            q.pop();p++;
            for(auto h: graph[k]){
                ind[h]--;
                if(!ind[h])
                    q.push(h);
            }   
        }
        if(p==numCourses) return v;
        return {};
    }
};
