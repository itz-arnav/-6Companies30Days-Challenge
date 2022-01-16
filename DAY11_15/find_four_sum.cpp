
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        unordered_map<int,vector<pair<int,int> > > um;
        int n = arr.size();
        um.reserve(n*n);
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                um[arr[i] + arr[j]].push_back(make_pair(i,j));
            }
        }
        unordered_map<int,vector<pair<int,int> > >::iterator it = um.begin();
        int target;
        vector<vector<int> > ans;
        set<vector<int> > s;
        while(it != um.end()) {
            target = k - it->first;
            unordered_map<int,vector<pair<int,int> > >::iterator itr = um.find(target);
            if(itr != um.end()) {
                for(int i=0;i<it->second.size();i++) {
                    for(int j=0;j<itr->second.size();j++) {
                        if(it->second[i].first!=itr->second[j].first && it->second[i].first!=itr->second[j].second && it->second[i].second!=itr->second[j].first && it->second[i].second!=itr->second[j].second) {
                            vector<int> v({arr[it->second[i].first],arr[it->second[i].second],arr[itr->second[j].first],arr[itr->second[j].second]});
                            sort(v.begin(),v.end());
                            if(s.find(v) == s.end()) {
                                ans.push_back(v);
                                s.insert(v);
                            }
                        }
                    }
                }
            }
            it = next(it);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
