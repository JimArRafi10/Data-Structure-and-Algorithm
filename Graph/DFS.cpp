#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int vis[1003];

void DFS(int node) 
{
    vis[node]=1;
    cout<<node<<"->";

    for(int i=0;i<v[node].size(); i++){
        int child = v[node][i];
        if(vis[child]==0)
        {
            DFS(child); //recursive calls
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

    DFS(1); // Starting From node 1


}


