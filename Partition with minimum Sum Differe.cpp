// Partition with minimum Sum Difference
class Solution {
public:
int ans=INT_MAX;
  vector<int> res1,res2;
  int help(int idx,vector<int> &nums,int val,vector<vector<int>> &dp)
  {
        if(idx==nums.size())
        {
            if(val<0)return 1e9;
            return 0;
        }
        if(dp[idx][val+3000]!=-1)return dp[idx][val+3000];
        int pos=nums[idx]+help(idx+1,nums,val+nums[idx],dp);
        int neg=-nums[idx]+help(idx+1,nums,val-nums[idx],dp);
        return dp[idx][val+3000]=min(pos,neg);    
  }
    int lastStoneWeightII(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(30000+1,-1));
	    return help(0,nums,0,dp);
	}
};