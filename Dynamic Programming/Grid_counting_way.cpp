const ll N = 1005;
ll dp[N][N];
char a[N][N];
ll n,m;

ll f(ll row, ll col) {
    if(row == n and col == m) return 1;
    if(row>n or col>m or a[row][col] == '#') return 0;
    if(dp[row][col] !=-1) return dp[row][col];
    ll res = 0;
    res = (res +f(row,col+1))%mod;
    res = (res +f(row+1,col))%mod;

    return dp[row][col] = res;
}
