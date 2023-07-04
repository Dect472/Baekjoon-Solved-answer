#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[101];
bool visited[101];
int answer=0;

void dfs(int x){
    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++){
        int node = graph[x][i];
        if(!visited[node]){
            dfs(node);
            answer++;
        }
    }
}


int main(void){
    int n, k;
    cin>>n>>k;

    for(int i=0;i<k;i++){
        int ipt, ipt2;
        cin>>ipt>>ipt2;
        graph[ipt].push_back(ipt2);
        graph[ipt2].push_back(ipt);
    }
    dfs(1);

    cout<<answer;

    return 0;
}