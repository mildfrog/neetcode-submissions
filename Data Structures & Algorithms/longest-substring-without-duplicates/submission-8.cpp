class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_set<char> window;

        for (int r = 0; r < s.size(); r++) {
            while (window.contains(s[r])) {
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
