#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string, greater<string>> s;
    int n;
    cin>>n;
    string line;
    getline(cin, line);
    
    for(int i=0;i<n;i++){
        size_t pos = 0;
        string name;

        getline(cin, line);
        pos = line.find(" ");
        name = line.substr(0, pos);
        line.erase(0, pos + 1);

        if (line == "enter")
        {
            s.insert(name);
        }
        else if (line == "leave")
        {
            s.erase(name);
        }
        else{
            cerr<<"wrong"<<endl;
        }
        
    }
    
    for (set<string>::iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        cout<<*iter<<'\n';
    }
    
    return 0;
}