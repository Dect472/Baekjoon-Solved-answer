#include <iostream>
#include <vector>

using namespace std;

int n, k;

int main(void){
    cin>>k>>n;
    vector<int> v;
    long long left, right, mid;
    int answer, max;
    for(int i= 0; i < k; i++){
        int ipt;
        cin>>ipt;
        v.push_back(ipt);
        if(max < ipt) max = ipt;
    }
    answer = 0;
    left = 1;
    right = max;

    while(left <= right){
        int sum = 0;
        mid = (left+right) / 2;
        for(int i = 0; i< v.size(); i++){
            sum += (v[i] / mid);
        }
        if(sum >= n){
                left = mid+1;
                if(mid > answer) answer = mid;
        }
        else{
            right = mid - 1;
        }
    }
    cout<<answer;

    return 0;
}