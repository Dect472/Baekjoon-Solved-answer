#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    int t = 0;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n, m, answer = 0;
        cin>>n>>m;
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        
        for(int j= 0 ; j < n; j++){
            int input;
            cin>>input;
            q.push({j, input});
            pq.push(input);
        }
        while(!q.empty()){
            int idx = q.front().first;
            int value = q.front().second;
            if(pq.top() == value){
                q.pop();
                pq.pop();
                answer++;
                if(idx == m){
                    cout<<answer<<'\n';
                    break;
                }
            }
            else{
                q.pop();
                q.push({idx, value});
            }
        }
    }
    
    return 0;
} 