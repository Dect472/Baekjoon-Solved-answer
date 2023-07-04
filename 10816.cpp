#include <iostream>
#include <map>

using namespace std;

int main(void){
    cin.tie(nullptr);
	cout.tie(nullptr);
    ios::sync_with_stdio(false);
    map<int, int> mymap;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int newEl;
        cin>>newEl;
        if(mymap.find(newEl) != mymap.end()){
            mymap[newEl]++;
        }
        else{
            mymap[newEl] = 1;
        }
    }

    int m;
    cin>>m;
    for(int i=0;i<m; i++){
        int checkEl;
        cin>>checkEl;
        if(mymap.find(checkEl) != mymap.end()){
            cout<<mymap[checkEl]<<' ';
        }
        else cout<<"0 ";
    }
}