const int N = 1e5+9;
vector<int>g[N];
int vis[N];
vector<int>ans;

void bfs(int node) {
    queue<int>q;
    q.push(node);
    vis[node]=1;

    while(!q.empty()) {
        int v=q.front();
        q.pop();
        ans.push_back(v);
        for(int child:g[v])
        {
            if(!vis[child]) {
                   q.push(child);
                   vis[child]=1;
            }
        }
    }
}
