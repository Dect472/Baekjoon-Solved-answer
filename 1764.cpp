#include <iostream>
#include <set>

int main(void){
    std::ios_base::sync_with_stdio(false);
    int n,m;
    std::cin>>n>>m;

    std::set<std::string> s1;
    std::set<std::string> s2;
    for(int i = 0; i < n; i++){
        std::string input;
        std::cin>>input;
        s1.insert(input);
    }
    for(int i = 0; i < m; i++){
        std::string input;
        std::cin>>input;
        s2.insert(input);
    }

    std::set<std::string>::iterator iter;
    std::set<std::string> s3;
    for(iter = s1.begin(); iter != s1.end(); iter++){
        if(s2.find(*iter) != s2.end()){
            s3.insert(*iter);
        }
    }

    std::cout<<s3.size()<<'\n';
    for(iter = s3.begin(); iter != s3.end(); iter++){
        std::cout<<*iter<<'\n';
    }
        

    return 0;
}