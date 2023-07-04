#include <iostream>
#include <stack>

using namespace std;

int main(void){

    ios::sync_with_stdio(false);
	std::cin.tie(NULL);

    string line;
    while(1){
        getline(std::cin, line);
        if(line == ".") break;
        stack<char> s;
        for(int i=0; i<line.length();i++){
            if(line[i] == '(')
                s.push('(');
            else if(line[i] == '[')
                s.push('[');
            else if(line[i] == ')'){
                if(!s.empty() && s.top() == '(')
                    s.pop();
                else s.push(')');
            }
            else if(line[i] == ']'){
                if(!s.empty() && s.top() == '[')
                    s.pop();
                else s.push(']');
            }
        }
        if(s.empty())
            std::cout<<"yes"<<'\n';
        else std::cout<<"no"<<'\n';
    }

    return 0;   
}