class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            vector<int> curr(26,0);
            for(auto ch : strs[i]){
                curr[ch-'a']++;
            }
            mp[curr].push_back(i);
        }
        vector<vector<string>> ans;
       for (auto ch : mp) {
            vector<string> group;

            for (auto s : ch.second) {
                group.push_back(strs[s]);
            }

            ans.push_back(group);
        }
        return ans;
    }
};
