#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000000];
    int cnt[26] = {0};
    int size;
    int max, i;

    fgets(str, sizeof(str), stdin);
    size = strlen(str);

    for(i=0; i<size; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        cnt[str[i]-65]++;
    }

    max = 0;
    for(i=0; i<26; i++){
        if(cnt[max]<cnt[i]){
            max = i;
        }
    }

    for(int j=0; j<26; j++){
        if(max!=j && cnt[max]==cnt[j]){
            printf("?\n");
            return 0;
        }
    }
    printf("%c\n", max+'A');
    return 0;
}