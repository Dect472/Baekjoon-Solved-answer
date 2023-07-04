#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> myvec;
    int red,green,blue;
    cin>>red>>green>>blue;
    int smallest = min(red,green,blue);
    if(smallest == red)
        myvec.push_back({smallest, 0});
    else if(smallest == green){
        myvec.push_back({smallest, 1});
    }
    else{
        myvec.push_back({smallest, 2});
    }

    for (int i = 1; i < n; i++)
    {
        cin>>red>>green>>blue;
        smallest = min(red,green,blue);
        if(smallest == red)
            myvec.push_back({smallest, 0});
        else if(smallest == green){
            myvec.push_back({smallest, 1});
        }
        else{
            myvec.push_back({smallest, 2});
        }   
    }
    

}