#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int N;
    int count = 1;
    vector<pair<int, int>> myvec;
    cin>>N;
    for(int i=0; i< N; i++){
        int ipt1, ipt2;
        cin>>ipt1>>ipt2;
        myvec.push_back({ipt2, ipt1});
    }

    sort(myvec.begin(), myvec.end());

    int currTime = myvec[0].first;

    for(int i = 1; i < N; i++){
        if(myvec[i].second >= currTime){
            count++;
            currTime = myvec[i].first;
        }
    }
    cout<<count;
    
    return 0;
}