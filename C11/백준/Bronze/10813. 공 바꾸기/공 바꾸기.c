#include <stdio.h>

int main(void){
    int N, M;
    int i,j, temp, a,b;
    int arr[200] = {0};
    int indexI[200] = {0};
    int indexJ[200] = {0};

    scanf("%d %d", &N, &M);
    for(i=0; i<N; i++){
        arr[i] = i+1;
    }

    for(i=0; i<M; i++){
        scanf(" %d %d", &a, &b);
        indexI[i] = a-1;
        indexJ[i] = b-1;
    }

    for(i=0; i<M; i++){
        temp = arr[indexI[i]];
        arr[indexI[i]] = arr[indexJ[i]];
        arr[indexJ[i]] = temp;
    }

    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}