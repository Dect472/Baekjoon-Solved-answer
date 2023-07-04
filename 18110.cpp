#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int n;
    cin>>n;

    if(n == 0){
        cout<<0;
        return 0;
    }

    for(int i = 0; i < n; i++){
        int input;
        cin>>input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    double cut = round(n * 0.15);
    int cutint = cut;
    int sum = 0;

    for(int i=0+cutint; i < n - cutint; i++){
        sum += v[i];
    }

    double davg = (double)sum / (n-cutint * 2);
    int iavg = round(davg);

    cout<<iavg<<'\n';
    return 0;
}