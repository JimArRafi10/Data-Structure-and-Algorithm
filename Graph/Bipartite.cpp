#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];
int vis[1000], col[1000];

bool dfs(int node,int c){
  vis[node]=1;
  col[node]=c;

  for(int child : v[node]) {
    if(vis[child]==0){
        if(dfs(child, c^1)==false) //if both color same then it return false for unvisited node, it compare with it's parent
               return false;
        }
        else{
          if(col[node]==col[child]) // if both color same then it also return false for visited node, it compare with it's parent
            return false;

        }

    }

    return true;

}

int main(){
  int n,e;
  cin>>n>>e;
  for(int i=0;i<e;i++){
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);

  }
  bool ans = dfs(1,1);
  if(ans== true)
    cout<<"The graph is Bipartite"<<endl;
  else
     cout<<"The graph is not Bipartite"<<endl;



}
