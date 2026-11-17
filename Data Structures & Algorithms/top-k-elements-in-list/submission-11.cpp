class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (auto num : nums) {
            mp[num]++;
        }

        vector<vector<int>> freq(nums.size()+1);

        for (auto& [num, count] : mp) {
            freq[count].push_back(num);
        }

        vector<int> res;

        for (int i = freq.size()-1; i >= 1; i--) {
            for (int num : freq[i]) {
                res.push_back(num);
            }
            if (res.size()==k) {
                return res;
            }
        }
    }
};
