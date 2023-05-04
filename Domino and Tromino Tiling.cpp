class Solution {
public:
    int help(int n,vector<int> &dp)
    {
        int mode=1e9+7;
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=-1)return dp[n];
        int t2=0;
        int t1=help(n-1,dp);
        if(n>=3)t2=help(n-3,dp);
        t1=(2*t1)%mode;
        return dp[n]=(t1+t2)%(mode);
    }
    int numTilings(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);
    }
};