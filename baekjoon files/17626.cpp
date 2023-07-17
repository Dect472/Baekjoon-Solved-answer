#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int dp[50001];

int main(void){
    ios_base::sync_with_stdio(false);
    int n;
    vector<int> v;
    cin>>n;
    dp[1] = 1; dp[2] = 2; dp[3] = 3; dp[4] = 1; dp[5] = 2;
    v.push_back(1); v.push_back(4);

    for(int i= 5; i<50001;i++){
        int count = 0x7fffffff;
        if(sqrt(i) == (int)sqrt(i)){
            dp[i] = 1;
            v.push_back(i);
            continue;
        }
        for(int item : v){
            if(count > dp[i-item] + 1){
                count = dp[i-item] + 1;
            }
        }
        dp[i] = count;
        
        // for(int j = 1; j <= maxsqr; j++){
        //     if(dp[j] == 1 && count > dp[i-j] + 1){
        //         count = dp[i-j] + 1;
        //         dp[i] = count;
        //     }
        // }
    }

    cout<<dp[n];

    return 0;
}