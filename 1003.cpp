#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    int count0 = 0; 
    int count1 = 0;
    int arr[41] = {0, 1};

    for(int i = 2; i < 41; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    int t = 0;
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        if(n == 0)
            cout<<1<<' '<<0<<'\n';
        else if(n == 1)
            cout<<0<<' '<<1<<'\n';
        else
            cout<<arr[n-1]<<' '<<arr[n]<<'\n';
    }

    return 0;
}