#include <iostream>
#include <queue>

using namespace std;

int n;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }
        else{
            return abs(a) > abs(b);
        }
    }
};

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    priority_queue <int, vector<int>, cmp> pq;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x == 0){
            if(pq.empty()){
                cout<<0<<'\n';
            }
            else{
                cout<<pq.top()<<'\n';
                pq.pop();
            }
            
        }
        else{
            pq.push(x);
        }
    }

    return 0;
}