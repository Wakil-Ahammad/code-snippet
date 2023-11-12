const int N = 1e5+10;
vector<int>g[N];
bool vis[N];
bool recs[N];
bool dfs(int vertex)
{
    vis[vertex]=true;
    recs[vertex]=true;
    for(int child:g[vertex])
    {
        if(vis[child]){
            if(recs[child])return true;
        }
        if (dfs(child))return true;

    }
    recs[vertex]=false;
    return false;
}
