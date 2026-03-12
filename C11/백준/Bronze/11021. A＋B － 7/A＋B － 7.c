#include <stdio.h>

int main(){
    int T, i;
    int arrA[100] = {0};
    int arrB[100] = {0};
    
    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf(" %d %d", &arrA[i], &arrB[i]);
    }

    for(i=0; i<T; i++){
        printf("Case #%d: %d\n", i+1, arrA[i]+arrB[i]);
    }
    return 0;
}