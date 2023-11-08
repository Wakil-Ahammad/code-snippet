const int N =1e5+10;
vector<int>lp(N,0);  //Lp means lowest Prime
void calculateLp() {    
   for(int i =2;i<N;i++) lp[i] = i;

   for(int i=2;i<N;i++){
      if(lp[i] == i){
         for(int j =i;j<N;j+=i){
            lp[j] = min(lp[j],i);
         }
      }
   }
}

void primeFact(int n){
   map<int,int>mp;
   while(n>1) {
      int pf = lp[n];
      while(n%pf==0) {
        n/=pf;
        mp[pf]++;
      }
   }
   
   for(auto it : mp)cout<<it.first <<" "<<it.second<<endl;
}
