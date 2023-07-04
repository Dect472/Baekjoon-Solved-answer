#include <iostream>
#include <queue>

using namespace std;

int N,M;
int v[100][100];
bool visited[100][100];
int rec[100][100];

void bfs(){
    queue<pair<int, int>> q;
    q.push({0,0});
    visited[0][0] = true;
    rec[0][0] = 1;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x+1 < N && v[x+1][y] == 1 && visited[x+1][y] == false){
            visited[x+1][y] = true;
            q.push({x+1, y});
            rec[x+1][y] = rec[x][y] + 1;
        }
        if(y+1 < M && v[x][y+1] == 1 && visited[x][y+1] == false){
            visited[x][y+1] = true;
            q.push({x, y+1});
            rec[x][y+1] = rec[x][y] + 1;
        }
        if(x-1 >= 0 && v[x-1][y] == 1 && visited[x-1][y] == false){
            visited[x-1][y] = true;
            q.push({x-1, y});
            rec[x-1][y] = rec[x][y] + 1;
        }
        if(y-1 >= 0 && v[x][y-1] == 1 && visited[x][y-1] == false){
            visited[x][y-1] = true;
            q.push({x, y-1});
            rec[x][y-1] = rec[x][y] + 1;
        }
    }
}


int main(void){
    ios_base::sync_with_stdio(false);
    cin>>N>>M;

    for(int i= 0; i < N; i++){
        string ipt; 
        cin>>ipt;
        for(int j = 0; j < M; j++){
            v[i][j] = ipt[j] - '0';
        }
    }

    bfs();

    cout<<rec[N-1][M-1];

    return 0;
}