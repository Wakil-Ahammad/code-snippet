#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void Divisors(int n){
 vector<int>v;
 for(int i = 1;i *i <= n;i++){
    if(n%i == 0){
      v.pb(i);
      if(n/i != i) v.pb(n/i);
    }
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
  cout<<endl;

}


int main(){
  int n;
  cin>>n;
  Divisors(n);

}

