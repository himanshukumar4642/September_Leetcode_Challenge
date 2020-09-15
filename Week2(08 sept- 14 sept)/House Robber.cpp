class Solution {
public:
    int rob(vector<int>& num) {
        int len = num.size();     
        	if( len == 0 )
        		return 0;
        	vector<int> Dp(len,0);
        	Dp[0] = num[0];
        	for( int i = 1; i < len; i++ )
        		Dp[i] = max(Dp[i-1], i-2 >= 0 ? Dp[i-2] + num[i]:num[i]);
        	return Dp[len-1];
    }
};
