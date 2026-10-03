class Solution {
public:
char m='\xa0';
    string encode(vector<string>& strs) {
        string masked;
        for(int i=0;i<strs.size();i++){
            masked+=strs[i];
            masked+=m;
        }
        return masked;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string curr;
        for(int i=0;i<s.size();i++){
            if(s[i]==m){
                ans.push_back(curr);
                curr="";
                continue;
            }
            curr+=s[i];
            
        
        }
        return ans;
    }
};
