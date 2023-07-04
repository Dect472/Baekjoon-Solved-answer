#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101];
int fs[101][101];
int n,m;

void bfs(int x){
    bool visited[101] = {0, };
    queue<int> q;

    q.push(x);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int i = 0; i < graph[temp].size(); i++){
            int node = graph[temp][i];
            if(!visited[node]){
                visited[node] = 1;
                q.push(node);
                fs[node][x] = fs[temp][x] + 1;
                fs[x][node] = fs[x][temp] + 1;
            }
        }
    }

}

int main(void){
    cin>>n>>m;
    for(int i = 0; i < m; i++){
        int ipt1, ipt2;
        cin>>ipt1>>ipt2;
        graph[ipt1].push_back(ipt2);
        graph[ipt2].push_back(ipt1);
    }

    for(int i=1; i<=n; i++){
        bfs(i);
    }

    int minSum = 50000;
    int minUser = 0;

    for(int i = 1; i<=n; i++){
        int currSum = 0;
        for(int j= 1; j <= n; j++){
            currSum += fs[i][j];
        }
        if(minSum > currSum){
            minSum = currSum;
            minUser = i;
        }
    }

    cout<<minUser;

    return 0;
}