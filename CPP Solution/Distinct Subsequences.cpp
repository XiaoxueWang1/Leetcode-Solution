class Solution {
public:
    int numDistinct(string s, string t) {
        int sLen=s.length(),tLen=t.length();
        vector<vector<unsigned int>> dp(sLen+1,vector<unsigned int>(tLen+1,0));
        for(int i=0;i<=sLen;i++)
            dp[i][0]=1;
        for(int i=1;i<=sLen;i++)
            for(int j=1;j<=tLen;j++)
                dp[i][j]=(s[i-1]==t[j-1]?dp[i-1][j-1]:0)+dp[i-1][j];
        return dp[sLen][tLen]; 
    }
};
