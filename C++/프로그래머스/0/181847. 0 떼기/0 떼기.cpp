#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int len = n_str.length();
    int i=0;
    while(n_str[i]=='0'){
        i++;
    }
    
    for(int j=i; j<len; j++){
        answer+=n_str[j];
    }
    return answer;
}