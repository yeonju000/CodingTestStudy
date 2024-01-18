#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    if(2<=food.size()<=9){
        int* count = new int[food.size()];
        count[0]=food[0];
        int arrange = 0;
        for(int i=1; i<=food.size(); i++){
            if(1<=food[i]<=1000){
                count[i] = food[i]/2;
                arrange += food[i]/2;
            }
        }
        string arr="";
        
        for(int j=0; j<food.size(); j++){
            for(int k=0; k< count[j+1]; k++){
                answer+=to_string(j+1);
                arr.insert(0, to_string(j+1));
            }
        }
        cout << answer;
        answer.append('0'+ arr);
    }
    return answer;
}