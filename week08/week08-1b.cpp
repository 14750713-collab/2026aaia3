// week08-1b.cpp 學習計畫 Matrix 第1題 最有錢的錢
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        int ans = 0; //最有錢的人,有多少錢? (先設成0)
        for (int i=0; i<M; i++) { // 大資料結構(矩陣),取出中資料結構(陣列)
            int now = 0; //迴圈前面now 是0
            for (int j=0; j<N; j++){
                now += accounts[i][j];
            }
            if(now > ans) ans = now;
        }
        return ans;
    }
};
