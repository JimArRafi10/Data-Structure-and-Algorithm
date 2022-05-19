#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int vis[10003], dis[10004];

void BFS(int node){
  queue<int> q;
  q.push(node);
  vis[node]=1;
  dis[node]=0;

  while(!q.empty()){
    int cur= q.front();
    q.pop();
    for(int child: v[cur]){
        if(vis[child]==0){

            dis[child]=dis[cur]+1;
            vis[child]=1;
            q.push(child);
        }
    }

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
        v[y].push_back(x);

    }

    BFS(1);
    for(int i=1;i<=n;i++){
        cout<<"Distance of node "<<i<<" = "<<dis[i]<<endl;
    }


}


