string s,t;
ll dp[3005][3005];
ll mark[3005][3005];

ll f(int i,int j){
    if(i==s.size() || j == t.size()) return 0;
   
    if(dp[i][j] !=-1) return dp[i][j];

    ll res = 0;
    if(s[i]==t[j]){
        res = 1+f(i+1,j+1);
        mark[i][j]=1;
    }

    else{
       ll tmp1 = f(i,j+1);
       ll tmp2 = f(i+1,j);
       if(tmp1>tmp2) mark[i][j]=2;
       else mark[i][j] = 3;
       res = max(tmp1,tmp2);
    }

    return dp[i][j] = res;

}

void print_way(int i,int j){
    if(i==s.size() || j == t.size()) return;

    if(mark[i][j]==1){
        cout<<s[i];
        print_way(i+1,j+1);
    }

    else if(mark[i][j]==2){
        print_way(i,j+1);
    }

    else{
       print_way(i+1,j);
    }
}
