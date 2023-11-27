const ll N = 1e5+5;
ll t[N*4],lazy[N*4];
ll a[N];

void push(ll node,ll b,ll e){
    if(lazy[node]==-1){
        return;
    }

    t[node] = (e-b+1)*lazy[node];
    
    if(b!=e) {
      ll mid = (b+e)/2;
      ll l = 2*node, r = 2*node+1;
      lazy[l] = lazy[node];
      lazy[r] = lazy[node];
   }

   lazy[node] = -1;
}

void build(ll node,ll b,ll e){

    lazy[node] = -1;
    if(b==e){
        t[node] = a[b];
        return;
    }

    ll mid = (b+e)/2;
    ll l = 2*node,r = 2*node+1;
    build(l,b,mid);
    build(r,mid+1,e);

    t[node] = t[l]+t[r];
}

void update(ll node,ll b,ll e,ll i,ll j,ll x){
    push(node,b,e);
    if(b>j or e<i) return;
    if(b>=i and e<=j){
       lazy[node] = x;
       push(node,b,e);
       return; 
    }

    ll mid = (b+e)/2;
    ll l = 2*node,r = 2*node+1;
    update(l,b,mid,i,j,x);
    update(r,mid+1,e,i,j,x);

    t[node] = t[l]+t[r];

}

ll query(ll node,ll b,ll e,ll i,ll j){
    push(node,b,e);
    if(b>j or e<i) return 0;
    if(b>=i and e<=j){
        return t[node];
    }

    ll mid = (b+e)/2;
    ll l = 2*node,r = 2*node+1;
    return query(l,b,mid,i,j) + query(r,mid+1,e,i,j);
}
