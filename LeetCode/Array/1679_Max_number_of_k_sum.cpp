class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int X:nums){
            if(mp[k-X]>0){
                ans++;
                mp[k-X]--;
            }else{
                mp[X]++;
            }
        }
        return ans;

        
    }
};