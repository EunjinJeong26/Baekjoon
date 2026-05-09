#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    int find;
    vector<string> answer;
    int size = strArr.size();
    for(int i=0; i<size; i++){
        find = strArr[i].find("ad");
        if(find == string::npos){
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}