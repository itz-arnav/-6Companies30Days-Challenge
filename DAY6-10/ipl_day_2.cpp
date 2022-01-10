class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k){
        vector<int> ans;
        deque<int> q;
        for(int i = 0 ; i < k ; i++){
            int v = arr[i];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
        }
        ans.push_back(q.front());
        for(int i = 0 , j = k ; j < n ; i++ , j++){
            if(arr[i] == q[0]) q.pop_front();
            int v = arr[j];
            while(!q.empty() && q.back() < v) q.pop_back();
            q.push_back(v);
            ans.push_back(q[0]);
        }
        return ans;
    }
};
