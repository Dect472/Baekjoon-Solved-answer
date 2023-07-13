#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> v;
int l,c;

void dfs(int x, string s){
    if(s.length() == l){
        int m = 0;
        for(int i = 0; i < l; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'
            || s[i] == 'o' || s[i] == 'u'){
                m++;
            }
        }
        if(m >= 1 && l-m > 1){
            cout<<s<<'\n';
        }
        return;
    }

    for(int i = x; i < c; i++){
        s.push_back(v[i]);
        dfs(i+1, s);
        s.pop_back();
    }

    return;
}

int main(void){
    cin>>l>>c;
    for(int i =0 ; i < c; i++){
        char c;
        cin>>c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());

    dfs(0, "");

    return 0;

}