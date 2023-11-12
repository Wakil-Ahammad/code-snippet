const int N = 1e5+5;
vector<int>g[N];
int ispossibe = 1;
int vis[N];
int color[N];

void dfs(int vertex)
{
    vis[vertex]=1;
    for(int child:g[vertex])
    {
       if(!vis[child])
       {
          color[child]=!color[vertex];
          dfs(child);
       }
       else if(color[child]==color[vertex])
       {
          ispossibe=0;
       }
    }
}
