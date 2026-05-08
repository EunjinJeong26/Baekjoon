#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0, len, size;
    string bab[4] = {"aya", "ye", "woo", "ma"};
    string str;
    int find;
    int i=0;
    len = babbling.size();
    while(i<len){
        find = babbling[i].find("aya");
        if(find != string::npos)
            babbling[i].replace(find, 3, "!!!");
        
        find = babbling[i].find("ye");
        if(find != string::npos)
            babbling[i].replace(find, 2, "!!");
        
        find = babbling[i].find("woo");
        if(find != string::npos)
            babbling[i].replace(find, 3, "!!!");
        
        find = babbling[i].find("ma");
        if(find != string::npos)
            babbling[i].replace(find, 2, "!!");
        
        size = babbling[i].size();
        for(int j=0; j<size; j++){
            if(babbling[i][j] != '!'){
                size = -1;
                break;
            }
        }
        if(size!=-1)
            answer++;
        
        i++;
        
    }
    return answer;
}