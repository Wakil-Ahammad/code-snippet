const ll N = 100005;
ll dp[105][N];
ll weight[N],val[N];
ll n;
ll f(ll i,ll rem) {
    if(i==n) return 0;
    if(dp[i][rem] !=-1) return dp[i][rem];
    ll res = -INF;
    res = max(res,f(i+1,rem));
    if(rem>=weight[i]) res = max(res,val[i]+f(i+1,rem-weight[i]));

    return dp[i][rem] = res;
}
