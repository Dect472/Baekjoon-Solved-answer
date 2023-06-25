#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    multiset<string> ms;
    cin>>n>>m;

    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        if(str.length() >= m)
            ms.insert(str);
    }
    
    set<string> my_set(ms.begin(), ms.end());
    vector<string> my_vec(my_set.begin(), my_set.end());

    sort(my_vec.begin(), my_vec.end(), 
      [&](const string &i1, const string &i2) {
          return i1.length() > i2.length();
      }
    );
    sort(my_vec.begin(), my_vec.end(), 
      [&](const string &i1, const string &i2) {
          return ms.count(i1) > ms.count(i2);
      }
    );

    vector<string>::iterator iter;
    for (iter=my_vec.begin(); iter != my_vec.end(); iter++)
    {
        cout<<*iter<<'\n';
    }


    return 0;   
}
