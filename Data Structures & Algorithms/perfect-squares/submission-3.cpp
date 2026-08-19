class Solution {
   public:
    int numSquareHelper(int n,vector<int>&dp) {
        // base case
        if (n == 0) {
            return 0;
        }
        
        if(n<0) return 1e9;

        if(dp[n]!=-1){
            return dp[n];
        }

        int ans = 1e9;
        int i = 1;
        int end = sqrt(n);
        // this step is what i was not able to think , how to generate it , next time when i will revise it , i will have to draw a recursive tree for it  
        while (i <= end) {
            int perfectSquare = i * i;
            int numberOfPerfectSquares = 1 + numSquareHelper(n - perfectSquare,dp);
            if (numberOfPerfectSquares < ans) {
                ans = numberOfPerfectSquares;
            }
            i++;
        }

        return dp[n] = ans;
    }
    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        return numSquareHelper(n,dp);
    }
};