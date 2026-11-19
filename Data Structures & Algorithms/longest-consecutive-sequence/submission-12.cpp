class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int ans = 0;

        for (int num : numSet) {
            if (!numSet.contains(num-1)) {
                int len = 1;
                while (numSet.contains(num+len)) {
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
