const int N = 1e5+9;
vector<ll>prime;
ll pr[N];
void seive() {
   pr[0]=0,pr[1]=0;
   for(int i=2;i<N;i++)pr[i]=1;

   for(ll i=4;i<=N;i+=2)pr[i]=0;
 
   for(int i=3;i*i<=N;i+=2)
   {
      if(pr[i]) {
          for(int j=i*i;j<N;j+=i)pr[j]=0;
      }
   }

   for(ll i=0;i<=N;i++) {

      if(pr[i])prime.pb(i);
   }
}

map<ll,ll> Seivefactor(ll n) {
   map<ll,ll>mp;
   if(n==1)return;
   ll i=0,pf =prime[i];
   while(pf*pf<=n) {        // prime factor using seive;
      while(n%pf==0) {
         n/=pf;
         mp[pf]++;
      }
      pf =prime[++i];
   }

   if(n!=1)mp[n]++;
   return mp;
}
