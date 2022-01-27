class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int result = 0;
        for (int i=0; i<points.size(); ++i) {
            const auto& p = points[i];
            unordered_map<long long, int> um;
            for (int j=0; j<points.size(); ++j) {
                if (i == j) {
                    continue;
                }
                long long dx = points[i][0]-points[j][0];
                long long dy = points[i][1]-points[j][1];
                long long dist = dx*dx + dy*dy;
                result += um[dist]*2;
                um[dist]++;
            }
        }
        return result;
    }
};
