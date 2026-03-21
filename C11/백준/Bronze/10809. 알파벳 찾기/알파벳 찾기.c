#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    int cnt[27];
    int idx;

    for(int k=0; k<27; k++){
        cnt[k] = -1;
    }
    fgets(str, sizeof(str), stdin);

    for(int i=0; i<strlen(str); i++){
        idx = str[i]-97;
        if(cnt[idx]==-1){
            cnt[idx] = i;
        }
    }

    for(int j=0; j<26; j++){
        printf("%d ", cnt[j]);
    }

    return 0;
}