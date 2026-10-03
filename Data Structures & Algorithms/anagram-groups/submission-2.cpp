class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            vector<int> curr(26,0);
            for(auto ch : strs[i]){
                curr[ch-'a']++;
            }
            string form;
            for(int j=0;j<26;j++){
                form+= to_string(curr[j]);
                form+=',';
            }
            mp[form].push_back(i);
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
