const int N = 1e5+10;
vector<int>g[N];
bool vis[N];

bool dfs(int vertex,int par)
{
    vis[vertex]=true;
    for(int child:g[vertex])
    {
        if(vis[child] && child == par)continue;
        if(vis[child])return true;
        if (dfs(child,vertex))return true;
    }
}
