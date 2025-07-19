class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mpp;
        for (auto i : arr) {
            mpp[i]++;
        }
        int prev = -1;
        for (auto& [k, v] : mpp) {
            if (k == v) {
                prev = max(prev, k);
            }
        }
        return prev;
    }
};