#include <iostream>

using namespace std;

int main(void){
    int t;
    cin>>t;

    for(int i= 0; i< t; i++){
        int n;
        cin>>n;
        int dp[11]={0,};
        dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 4;
        for(int i = 4; i <= n; i++){
            dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
        }

        cout<<dp[n]<<'\n';
    }
    return 0;
}