#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int N=200005;
int n,m,s,d;
struct edge{
    int to,w;
};
struct node{
    int dis,u;
    bool operator>(const node& rhs) const{
        return dis>rhs.dis;
    }
};
vector<edge> e[N];
priority_queue<node,vector<node>,greater<node>> q;
int dis[N],vis[N],num[N],cnt[N],sum[N],pre[N];
void dijkstra(int s){
    fill(dis,dis+N,1e9);
    dis[s]=0;
    q.push({0,s});
    while(!q.empty()){
        node now=q.top();
        int u=now.u;
        q.pop();
        if(vis[u]) continue;
        vis[u]=1;
        for(int i=0;i<e[u].size();i++){
            int v=e[u][i].to;
            if(dis[v]>dis[u]+e[u][i].w){
                dis[v]=dis[u]+e[u][i].w;
                cnt[v]=cnt[u];
                sum[v]=sum[u]+num[v];
                pre[v]=u;
                q.push({dis[v],v});
            }else if(dis[v]==dis[u]+e[u][i].w){
                cnt[v]+=cnt[u];
                if(sum[v]<sum[u]+num[v]){
                    sum[v]=sum[u]+num[v];
                    pre[v]=u;
                }
            }
        }
    }
}
int main(){
    cin>>n>>m>>s>>d;
    fill(dis,dis+N,1e9);
    fill(vis,vis+N,0);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cnt[s]=1;
    sum[s]=num[s];
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        e[u].push_back({v,w});
        e[v].push_back({u,w});
    }
    dijkstra(s);
    cout<<cnt[d]<<" "<<sum[d]<<endl;
    vector<int> path;
    int p=d;
    while(p!=s){
        path.push_back(p);
        p=pre[p];
    }
    path.push_back(s);
    for(int i=path.size()-1;i>0;i--){
        cout<<path[i]<<" ";
    }
    cout<<path[0]<<endl;
    return 0;
}


