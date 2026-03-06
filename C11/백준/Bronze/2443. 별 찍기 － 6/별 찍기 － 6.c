#include <stdio.h>

int main(void){
    int N;
    int n;
    scanf("%d", &N);
    for(int j=N; j>0; j--){
        n = j*2-1;
        for(int k=0; k<(N-j); k++)
            printf(" ");
        for(int i=0; i<n; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}