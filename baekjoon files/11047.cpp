#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int n, k, count = 0;
    cin>>n>>k;

    for(int i = 0; i < n; i++){
        int ipt;
        cin>>ipt;
        v.push_back(ipt);
    }

    while(k > 0){
        for (vector<int>::reverse_iterator i = v.rbegin();
             i != v.rend(); ++i){
            if(*i <= k){
                count++;
                k -= *i;
                break;
            }
        }
    }

    cout<<count;

    return 0;
}