#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void){
    stack<int> s;
    vector<int> v; //0 is push and 1 is pop
    int n = 0;
    std::cin>>n;
    int c = 1;
    s.push(1); //push 1 first.
    v.push_back(0);

    for (int i = 0; i < n; i++)
    {
        int input = 0;
        std::cin>>input;

        if(s.empty()){
            if(c < input){
                while(c < input){
                    c++;
                    s.push(c);
                    v.push_back(0);
                }
            }
            else{
                std::cout<<"NO";
                return 0;
            }
        }

        if(s.top() < input && c < input){
            while(s.top() < input){
                c++;
                s.push(c);
                v.push_back(0);
            }
        }
        else if(s.top() > input){
            while(s.top() > input){
                s.pop();
                v.push_back(1);
            }
        }

        if(s.top() == input){
            s.pop();
            v.push_back(1);
        }
        else{
            std::cout<<"NO";
            return 0;
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i] == 0) std::cout<<"+\n";
        else if(v[i] == 1) std::cout<<"-\n";
    }
    return 0;
    
}