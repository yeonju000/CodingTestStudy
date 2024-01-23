#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string second="";
    for(int i=1; i<food.size(); i++){
        for(int j=0; j<food[i]/2; j++){
            answer+=to_string(i);
            second.insert(0, to_string(i));
        }
    }
    second.insert(0, to_string(0));
    answer+=second;
    return answer;
}
