#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int len = str.size();
    
    for(int i=0; i<len; i++){
        if(str[i]>=65 && str[i]<=90){
            char ch = str[i];
            str[i] = tolower(ch);
        } else{
            char ch = str[i];
            str[i] = toupper(ch);
        }
    }
    
    cout<< str;
    return 0;
}