#include <stdio.h>
#include <string.h>

int main(void){
    int T, R;
    int idx=0;
    char p[2000];

    scanf("%d", &T);

    for(int i=0; i<T; i++){
        char s[21];
        scanf(" %d %s", &R, s);
        for(int j=0; j<strlen(s); j++){
            for(int k=0; k<R; k++){
                p[idx++] = s[j];
            }
        }
        p[idx++] = '\n';
    }

    for(int j=0; j<idx; j++){
        printf("%c", p[j]);
    }

    return 0;
}