#include <stdio.h>

int main(void){
    int T;
    int a,b;
    int i;
    int result[100] = {0};


    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf(" %d %d", &a, &b);
        result[i] = a+b;
    }

    for(i=0; i<T; i++){
        printf("%d\n", result[i]);
    }

    return 0;

}