#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
bool vis[105][105];
vector<pair<int,int>>d ={{2,1},{2,-1},{-2,1}, {-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};

bool valid(int i,int j){
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}

int bfs(int ki,int kj,int qi,int qj){
    queue<pair<pair<int,int>,int>>q;
    q.push({{ki,kj},0});
    vis[ki][kj] =true;

    while(!q.empty()){
        pair<pair<int,int>,int>p =q.front();
        q.pop();

        int x = p.first.first;
        int y = p.first.second;
        int s = p.second;

        if(x==qi && y==qj){
            return s;
        }

        for(pair<int,int>pr : d){
            int x2 = x + pr.first;
            int y2 = y + pr.second;

            if(valid(x2,y2)==true && vis[x2][y2]==false){
                q.push({{x2,y2},s+1});
                vis[x2][y2] =true;
            }
        }
    }
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        int ki,kj,qi,qj;
        cin>>ki>>kj>>qi>>qj;
        memset(vis, false, sizeof(vis));
        int ans = bfs(ki,kj,qi,qj);
        cout<<ans<<endl;
    }
    return 0;
}
