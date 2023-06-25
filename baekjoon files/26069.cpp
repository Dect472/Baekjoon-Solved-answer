#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    set<string> danceSet;
    int n = 0;
    std::cin>>n;
    danceSet.insert("ChongChong");
    string line;
    getline(cin,line); 

    for(int i=0; i<n; i++){
        getline(cin, line);
        size_t pos = line.find(" ");
        string firstPerson = line.substr(0, pos);
        line.erase(0, pos+1);
        string secondPerson = line;

        if(danceSet.find(firstPerson) != danceSet.end()
            && danceSet.find(secondPerson) == danceSet.end()){
                danceSet.insert(secondPerson);
            }
        else if(danceSet.find(secondPerson) != danceSet.end()
            && danceSet.find(firstPerson) == danceSet.end()){
                danceSet.insert(firstPerson);
            }
    }

    std::cout<<danceSet.size();
    // set<string>::iterator iter;
    // for (iter = danceSet.begin(); iter != danceSet.end(); iter++)
    // {
    //     std::cout<<*iter<<'\n';
    // }
    
    return 0;
}