#include <iostream>

using namespace std;

int main(void){
    int stairs[300];
    int dp[300];
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>stairs[i];
    }


    dp[0] = stairs[0]; dp[1] = stairs[1] + dp[0];
    dp[2] = stairs[0] + stairs[2];
    if(dp[2] < stairs[1] + stairs[2]) 
        dp[2] = stairs[1] + stairs[2];

    for(int i = 3; i < n; i++){
        dp[i] = dp[i-2] + stairs[i];
        if(dp[i] < dp[i-3] + stairs[i-1] + stairs[i]){
            dp[i] = dp[i-3] + stairs[i-1] + stairs[i];
        }
    }

    cout<<dp[n-1];

    return 0;
}