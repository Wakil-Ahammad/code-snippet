const int N = 1e5+9;
ll a[N];
struct node {
    ll prop,val;
};
node t[N*4];

void build(int node,int b, int e) {
   if(b==e) {
      t[node].val = a[b];
      //t[node].prop = 0;
      return;
   }
   int l = 2*node;
   int r = 2*node+1;
   int mid = (b+e)/2;
   build(l,b,mid);
   build(r,mid+1,e);
   
   t[node].val = t[l].val + t[r].val;
   //t[node].prop = 0;
}


void update(ll node,ll b,ll e,ll i,ll j,ll x){
    if(b>j or e<i) return;
    if(b>=i and e<=j){
        t[node].val +=((e-b+1)*x);
        t[node].prop += x;
        return;
    }
    ll mid = (b+e)/2;
    ll l = 2*node,r = 2*node+1;
    update(l,b,mid,i,j,x);
    update(r,mid+1,e,i,j,x);
    t[node].val = t[l].val + t[r].val + (e-b+1)*t[node].prop;
}

ll query(ll node,ll b,ll e,ll i,ll j,ll carry){
     if(b>j or e<i) return 0;
     if(b>=i and e<=j){
        return t[node].val+((e-b+1)*carry);
     }

     ll mid = (b+e)/2;
     ll l = 2*node;
     ll r = 2*node+1;

     ll t1 = query(l,b,mid,i,j,carry+t[node].prop);
     ll t2 = query(r,mid+1,e,i,j,carry+t[node].prop);
     return t1 + t2;
}
