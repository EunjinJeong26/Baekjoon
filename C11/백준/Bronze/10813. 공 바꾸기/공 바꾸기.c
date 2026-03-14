#include <stdio.h>

int main(void){
    int N, M;
    int i, temp, a,b;
    int arr[200] = {0};

    scanf("%d %d", &N, &M);
    for(i=0; i<N; i++){
        arr[i] = i+1;
    }

    for(i=0; i<M; i++){
        scanf(" %d %d", &a, &b);
        a-=1;
        b-=1;

        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}