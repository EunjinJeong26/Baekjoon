#include <stdio.h>

int main(void){
    int N, v, i, cnt=0;
    int arr[200] = {0};

    scanf("%d", &N);
    for(i=0; i<N;i++){
        scanf(" %d", &arr[i]);
    }
    scanf(" %d", &v);

    for(i=0; i<N; i++){
        if(arr[i] == v){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}