#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int isEven=1;
    for(int i=0; i<s.size(); i++){
        if(isspace(s[i])){
            isEven=1;
            answer += s[i];
            continue;
        }
        else if(isEven==1){
            answer += toupper(s[i]);
            isEven = 0;
        }
        else if(isEven==0){
            answer += tolower(s[i]);
            isEven = 1;
        }
    }
    return answer;
}