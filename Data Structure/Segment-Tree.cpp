const int N = 1e5+5;
int a[N];
int t[N*4];

void build(int node,int b, int e) {
   if(b==e) {
      t[node] = a[b];
      return;
   }
   int l = 2*node;
   int r = 2*node+1;
   int mid = (b+e)/2;
   build(l,b,mid);
   build(r,mid+1,e);
   
   t[node] = t[l] + t[r];
}

int query(int node, int b, int e, int i, int j){
   if(b>j || e<i) return 0;
   if(b>=i && e<=j) return t[node];
   int l = 2*node;
   int r = 2*node+1;
   int mid = (b+e)/2;
   return query(l,b,mid,i,j) + query(r,mid+1,e,i,j);
}

void Update(int node, int b, int e, int i, int x) {
   if(b>i || e<i) return;
   if(b==e)
   {
      t[node] = x;
      return;
   }
   int l = 2*node, r = 2*node+1;
   int mid = (b+e)/2;
   Update(l,b,mid,i,x);
   Update(r,mid+1,e,i,x);
   t[node] = t[l] + t[r];
}

// sum of range l to r and update a specific index value
