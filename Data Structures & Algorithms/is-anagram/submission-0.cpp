class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> schar(26,0);
        vector<int> tchar(26,0);
        for(int i=0;i<s.size();i++){
            schar[s[i]-'a']++;
            tchar[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(schar[i]!=tchar[i]){
                return false;
            }
        }
        return true;
        
    }
};
