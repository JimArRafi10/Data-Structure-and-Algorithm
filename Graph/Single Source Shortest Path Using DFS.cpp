#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int vis[10003], dis[10004];

void dfs(int node, int d)
{
    vis[node]=1;
    dis[node]=d;

    for(auto child: v[node])
    {
        if(vis[child]==0)
            dfs(child,d+1); // everytime distance will increase to 1

    }

}

int main()
{
    int n,m;
    cin>>n>>m;

    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].push_back(y);

    }

    int s;
    cin>>s;
    dfs(s,0); // source node r distance 0, then 1 will add to 0 (0+1)

    for(int i=0;i<=n;i++){
        cout<<s<<" -> "<<i<<" = "<<dis[i]<<endl;
    }


}


