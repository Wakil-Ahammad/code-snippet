
const int N = 2000005;
int par[N],sz[N];

void make_set(int n) {
   for(int i=1;i<=n;i++){
     par[i] = i;
     sz[i]  = 1;
   }  
}

int find_set(int u){
   if(par[u]==u) return u;
   return par[u] = find_set(par[u]);
}

void unite(int u,int v) {
    int a = find_set(u);
    int b = find_set(v);
   
    if(sz[a]<sz[b]) swap(a,b);
    if(a!=b){
       par[b] = a;
       sz[a]+=sz[b];
    }
    
}
