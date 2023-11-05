const int mod = 1e9+7;
int BinExp(int a,int n){
    int res = 1;
    while(n){
        if(n%2) res = (res*a)%mod;
        a = (a*a)%mod;
        n /= 2;
       
    }
    return res%mod;
}


