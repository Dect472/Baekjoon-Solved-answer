#include <iostream>
#include <deque>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    string p;
    cin>>t;
    
    for(int i=0; i<t; i++){
        string arrayipt;
        deque<int> list;
        bool errorflag = false;
        int rcnt = 0;
        cin>>p;
        cin>>n;
        cin>>arrayipt;
        
        /* storing array input */
        int iptlen = arrayipt.length();
        string temp= "";
        for(int j=0;j<iptlen;j++){
            if(arrayipt[j] > 47 && arrayipt[j] < 58){
                temp += arrayipt[j];
            }
            else if(!temp.empty()){
                list.push_back(stoi(temp));
                temp = "";
            }
        }

        int len = p.length();

        for(int j=0;j<len;j++){
            if(p[j] == 'R'){
                rcnt++;
            }
            else{
                if(list.empty()){
                    errorflag = true;
                    break;
                }
                else{
                    if(rcnt % 2 != 0){
                        list.pop_back();
                    }
                    else if(rcnt % 2 == 0){
                        list.pop_front();
                    }
                } 
            }
        }

        if(!errorflag){
            cout<<'[';
            if(rcnt % 2 != 0){
                for(int i = list.size()-1; i >= 0; i--){
                    cout<<list[i];
                    if(i != 0){
                        cout<<",";
                    }
                }
            }
            else{      
                for(int i = 0; i < list.size(); i++){
                    cout<<list[i];
                    if(i != list.size()-1){
                        cout<<",";
                    }
                }
            }
            cout<<"]\n";
        }
        else{
            cout<<"error"<<'\n';
        }
        
    }

    return 0;
}