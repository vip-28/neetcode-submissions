class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> mp;
        int res = 0;

        for (int num : nums) {

            if (mp.count(num))
                continue;

            int left = mp.count(num - 1) ? mp[num - 1] : 0;
            int right = mp.count(num + 1) ? mp[num + 1] : 0;

            int length = left + right + 1;

            mp[num] = length;

            mp[num - left] = length;

            mp[num + right] = length;

            res = max(res, length);
        }

        return res;
    }
};