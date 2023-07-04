#include <iostream>

using namespace std;

int arr[1000001];

int main(void){
    ios_base::sync_with_stdio(false);
    int x = 0;
    cin>>x;
    arr[1] = 0; arr[2] = 1; arr[3] = 1;
    for(int i = 4; i <= x; i++){
        arr[i] = arr[i-1];
        if(i % 2 == 0){
            if(arr[i] > arr[i/2]){
                arr[i] = arr[i/2];
            }
        }
        if(i % 3 == 0){
            if(arr[i] > arr[i/3])
                arr[i] = arr[i/3];
        }
        arr[i]++;
    }

    cout<<arr[x];

    return 0;
}