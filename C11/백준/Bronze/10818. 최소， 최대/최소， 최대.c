#include <stdio.h>

int main(void){
    int N, i, A;
    int min;
    int max;

    scanf("%d", &N);
    for(i=0; i<N;i++){
        scanf(" %d", &A);
        if(i==0){
            min=A;
            max = A;
        }
        if(A<min){
            min = A;
        }
        if(A>max){
            max = A;
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}