#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int c;
    cin>>c;

    for(int i=0; i<c; i++){
        int n = 0, sum = 0;
        double avg = 0;

        cin>>n;
        vector<int> v;
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
            sum+=temp;
        }
        avg = (double)sum / n;

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(v[j] > avg) count++;
        }

        double calc = (double)count / n * 100;
        calc = round(calc * 1000.0) / 1000.0;
        cout<<calc<<'%'<<'\n';
        
    }
    return 0;
}
