#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
const int N=3e5+10;
vector<int>g[N];
vector<pair<int,int>>ans;
bool vis[N];
int d[N];
void dfs(int x)
{
    vis[x]=true;
    for(auto v:g[x])
    {
        if(vis[v])continue;
        dfs(v);
        if(d[v])
        {
            ans.push_back({x,v});
            if(d[v]%2==0)d[v]=1;
            else d[v]=0;
            if(d[x]%2==0)d[x]=1;
            else d[x]=0;
            // cout<<d[x]<<" "<<x<<endl<<d[v]<<" "<<v<<ednl;
        }
    }
}
void wert()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(d[v]%2==0)d[v]=1;
        else d[v]=0;
        if(d[u]%2==0)d[u]=1;
        else d[u]=0;
    }
    for(int i=0;i<k;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs(i);
        if(d[i])
        {
            cout<<"NO\n";
            return;
        }

    }
    cout<<"YES\n";
    int num=(int)ans.size();
    cout<<num<<endl;
    for(auto x:ans)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}   

signed main()
{
    int t=1;
    // cin >> t;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(t--)
    {
        wert();
    }
    return 0;
}
