#include <string>
#include <vector>

using namespace std;

void calc(char &c);

string solution(string s, string skip, int index) {
    string answer = "";
    int slen = s.length();
    int skiplen = skip.length();
    
    for(int i=0; i<slen; i++){
        int cnt = 0;
        while(cnt<index){
            int check = 0;
            s[i]+=1;
            calc(s[i]);
            for(int j=0; j<skiplen; j++){
                if(skip[j]==s[i]){
                    check = 1;
                    break;
                }
            }
            if(check!=1)
                cnt++;
        }
        answer+=s[i];
    }
    return answer;
}

void calc(char &c){
    if(c>122){
        c-=26;
    }
}