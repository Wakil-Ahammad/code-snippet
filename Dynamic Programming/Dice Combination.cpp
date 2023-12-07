const ll N = 1e6+5;
ll dp[N];
ll n;

ll f(ll x){
    if(x==n) return 1;
    if(x>n) return 0;

    if(dp[x]!=-1) return dp[x];

    ll res = 0;
    for(ll i=1;i<=6;i++){
        res=( res+f(x+i))%mod;
    }

    return dp[x] = res;
}
