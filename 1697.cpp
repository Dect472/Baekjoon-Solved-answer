#include <iostream>
#include <queue>

using namespace std;

bool visited[100001];

int main(void){
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    queue<pair<int, int>> q;
    q.push({n,0});
    while(!q.empty()){
        int coor = q.front().first;
        int cost = q.front().second;
        q.pop();
        if(coor == k){
            cout<<cost;
            break;
        }

        if(coor-1 >= 0 && !visited[coor-1]){
            visited[coor-1] = true;
            q.push({coor-1, cost+1});
        }
        if(coor+1 <= 100000 && !visited[coor+1]){
            visited[coor+1] = true;
            q.push({coor+1, cost+1});
        }
        if(coor*2 <= 100000 && !visited[coor*2]){
            visited[coor*2] = true;
            q.push({coor*2, cost+1});
        }
    }

    return 0;
}