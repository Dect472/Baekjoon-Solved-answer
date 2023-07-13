#include <iostream>
#include <vector>
#include <map>

using namespace std;

int t, n;

int main(void){
    cin>>t;
    string ipt, ipt2;
    int cases = 0;
    for (int i = 0; i < t; i++) {
        cin>>n;
        map<string, int> mymap;
        for(int j=0; j < n; j++){
            cin>>ipt>>ipt2;
            if(mymap.find(ipt2) != mymap.end()){
                mymap[ipt2]++;
            }
            else{
                mymap.emplace(ipt2, 1);
            } 
        }
        cases = 1;
        for(auto m : mymap){
            cases *= (m.second+1);
        }
        cases -=1;

        cout<<cases<<'\n';
    }

    return 0;
    
}