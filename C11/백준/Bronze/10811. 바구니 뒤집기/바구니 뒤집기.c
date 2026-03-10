#include <stdio.h>

int main(void){
    int N, M, i, a,b, j;
    int arr[200]={0};
    int sort[200]={0};
    int temp;

    scanf("%d %d", &N, &M);
    for(i=0; i<N; i++){
        arr[i] = i+1;
    }

    for(i=0; i<M; i++){
        scanf(" %d %d", &a, &b);
        a-=1;
        b-=1;
        while(a<b){
            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++;
            b--;
        }
    }

    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}