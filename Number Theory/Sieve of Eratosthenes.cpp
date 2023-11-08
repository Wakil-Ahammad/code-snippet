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
