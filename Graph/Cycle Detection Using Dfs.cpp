#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int vis[10003];

bool dfs(int node, int par)
{
    vis[node]=1;
    for(auto child: v[node])
    {
        if(vis[child]==0)
            if(dfs(child,node)== true)  
                return true;

        else{
            if(child!=par) return true;
        }

    }

    return false;


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


    bool ans= dfs(1,-1);

    if(ans==true) {
        cout<<"Cycle found"<<endl;
    }
    else{
        cout<<"Cycle not found"<<endl;
    }


}


