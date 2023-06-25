#include <iostream>
#include <set>

using namespace std;

int main(void){
    set<string> myset;
    string str;
    int strlen;
    cin>>str;
    strlen = str.length();

    for(int i = 0; i < strlen; i++){
        size_t pos = 0;
        string newStr = str.substr(i, strlen);
    }

}