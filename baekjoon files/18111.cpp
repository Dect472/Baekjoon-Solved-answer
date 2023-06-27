#include <iostream>
#include <vector>
#define REMOVETIME 2

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    int n, m, b;
    vector<vector<int>> v;
    cin>>n>>m>>b;
    
    for(int i = 0; i < n; i++){
        vector<int> v2;
        for(int j = 0; j < m; j++){
            int input;
            cin>>input;
            v2.push_back(input);
        }
        v.push_back(v2);
    }

    int min_time = 0x7FFFFFFF;
    int current_height = 0;

    for(int t = 0; t <= 256; t++){
        int total_time = 0;
        int inventory = b;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] > t){
                    total_time += (v[i][j] - t) * REMOVETIME;
                    inventory += (v[i][j] - t);
                }
                else{
                    total_time += (t - v[i][j]);
                    inventory -= (t - v[i][j]);
                }
            }
        }

        if(total_time <= min_time && inventory >= 0){
            min_time = total_time;
            current_height = t;
        }
    }

    cout<<min_time<<' '<<current_height<<'\n';

    return 0;
}