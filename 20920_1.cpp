#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

unordered_map<string, int> mymap;
vector<string> myvec;

bool compare(string a, string b){
    if(mymap[a] == mymap[b] && a.length() == b.length())
        return a < b;
    else if(mymap[a] == mymap[b]){
        return a.length() > b.length();
    }
    else{
        return mymap[a] > mymap[b];
    }
}

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        if(str.length() >= m)
            if(mymap.find(str) != mymap.end())
                mymap[str]++;
            else {
                mymap[str] = 1;
                myvec.push_back(str);
            }
    }
    

    sort(myvec.begin(), myvec.end(), compare);

    for(int i = 0; i < myvec.size(); i++){
        cout<<myvec[i]<<'\n';
    }


    return 0;   
}
