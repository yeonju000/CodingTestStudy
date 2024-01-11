#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
     string partition;

    if((1<=p.size()) & (p.size()<=18) & ((p.size()<=t.size()) & (t.size() <= 10000))){
            for(int i=0; i < (t.size()-p.size()+1); i++){
                partition = "";
                for(int j=0; j<p.size(); j++){
                    partition += t[i+j];
                }
                if(stoll(partition) <= stoll(p)){
                    answer++;
                }
            }
    }
    return answer;
}