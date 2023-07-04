#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,m,v;
bool visited[1001];
bool visited2[1001];
int graph[1001][1001];

void dfs(int x){
    visited[x] = true;
    cout<<x<<' ';
    for(int i = 1; i < n+1; i++){
        if(!visited[i] && graph[x][i] == 1)
            dfs(i);
    }
}

void bfs(int x){
    queue<int> q;
    q.push(x);
    visited2[x] = true;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<' ';
        for(int i = 1; i < n+1; i++){
            if(!visited2[i] && graph[temp][i] == 1){
                visited2[i] = true;
                q.push(i);
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin>>n>>m>>v;

    for(int i=0; i<m; i++){
        int ipt1, ipt2;
        cin>>ipt1>>ipt2;
        graph[ipt1][ipt2] = 1;
        graph[ipt2][ipt1] = 1;
    }

    dfs(v);
    cout<<'\n';
    bfs(v);
    return 0;
}