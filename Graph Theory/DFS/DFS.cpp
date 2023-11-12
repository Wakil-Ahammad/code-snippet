const int N = 1e5+10;
vector<int>g[N];
bool vis[N];
void dfs(int vertex)
{
    //cout<<vertex<<endl;
    vis[vertex]=true;
   for(int child:g[vertex])
   {
       if(vis[child])continue;
       dfs(child);
   }

}
