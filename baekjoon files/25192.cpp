#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void){
    int n, count;
    cin>>n;
    string line;
    getline(cin, line);
    getline(cin, line);

    int c = 1;
    while(c<n){
        if(line == "ENTER"){
            set<string> myset;
            while(c < n){
                getline(cin, line);
                c++;
                if(line == "ENTER") break;
                if(myset.find(line) == myset.end()){
                    count++;
                    // std::cout<<"count ++ by "<<line<<'\n';
                    myset.insert(line);
                }
                
            }
        }
    }

    std::cout<<count<<'\n';
}