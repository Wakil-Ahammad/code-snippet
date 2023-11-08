void PrimeFact(int n){
map<int,int>mp;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
       while(n%i==0) {
          mp[i]++;
          n=n/i;
       }
    }
}
  if(n>1) mp[n]++;
  
  for(auto it:mp){
     cout<<it.first<<" "<<it.second<<endl;
  }
}
