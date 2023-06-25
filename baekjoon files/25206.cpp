#include <iostream>
#include <string>
#include <vector>

using namespace std;

double gradeToDouble(string grade){
    if(grade == "A+")
        return 4.5;
    else if(grade == "A0")
        return 4.0;
    else if(grade == "B+")
        return 3.5;
    else if(grade == "B0")
        return 3.0;
    else if(grade == "C+")
        return 2.5;
    else if(grade == "C0")
        return 2.0;
    else if(grade == "D+")
        return 1.5;
    else if(grade == "D0")
        return 1.0;
    else if(grade == "F")
        return 0.0;
    return 0;
}

int main (){
    vector<double> score;
    vector<string> grade;
    double degreeTotal = 0; //학점 총합
    double sumTotal = 0; //(학점 x 과목평점) 총합
    string line;
    while(getline(cin, line)){
        // cout<<line<<endl;
        size_t pos = 0;
        string str;
        pos = line.find(" ");
        str = line.substr(0, pos);
        line.erase(0, pos + 1);

        pos = line.find(" ");
        str = line.substr(0, pos);
        score.push_back(stod(str));
        //cout << score.back() << endl;
        line.erase(0, pos + 1);
        grade.push_back(line);
        //cout<<grade.back()<<endl;
    }

    for(int i= 0; i < score.size(); i++){
        if(grade[i] != "P"){
            degreeTotal += score[i];
            sumTotal += (score[i] * gradeToDouble(grade[i]));
            //cout<<degreeTotal<<' '<<sumTotal<<endl;
        }
    }
    double result = sumTotal / degreeTotal;
    cout<<result;

    return 0;
}