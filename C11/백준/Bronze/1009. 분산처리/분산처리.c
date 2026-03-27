#include <stdio.h>

int main(void){
    int T;
    int i, a,b, result;
    int p;

    scanf("%d", &T);
    for(i=0; i<T; i++){
        p=1;
        scanf(" %d %d", &a, &b);
        for(int j=0; j<b; j++){
            p = (p*a)%10;
        }
        if(p== 0){
            p = 10;
        }

        printf("%d\n", p);
    }

    return 0;
}