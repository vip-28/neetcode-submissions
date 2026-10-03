class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<long long> leftPass(nums.size());
        vector<long long> rightPass(nums.size());
        int curr=1;
        for(int i=0;i<nums.size();i++){
            leftPass[i]=curr;
            curr*=nums[i];
        }
        curr=1;
        for(int i=nums.size()-1;i>=0;i--){
            rightPass[i]=curr;
            curr*=nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                ans.push_back(rightPass[i]);
            }
            else if(i==nums.size()-1){
                ans.push_back(leftPass[i]);
            }else {
            ans.push_back(leftPass[i]*rightPass[i]);
            }
        }
        return ans;
    }
};
