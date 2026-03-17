#include <stdio.h>

int main(void){
    int N, M;
    int i,j,k;
    int arr[200]={0};

    scanf("%d %d", &N, &M);

    for(int a=0; a<M; a++){
        scanf(" %d %d %d", &i, &j, &k);
        i--;
        j--;
        
        for(int b=i; b<=j; b++){
            arr[b] = k;
        }
    }

    for(int c=0; c<N; c++){
        printf("%d ", arr[c]);
    }
    return 0;

}