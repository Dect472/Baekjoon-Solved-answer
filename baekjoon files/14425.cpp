#include <iostream>
#include <set>

using namespace std;

int main(void){
    int n, m;
    int count;
    cin>>n>>m;
    set<string> s;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    for(int i=0;i<m;i++){
        string str;
        cin>>str;
        if(s.count(str))
            count++;
    }
    
    cout<<count<<endl;
    return 0;
}