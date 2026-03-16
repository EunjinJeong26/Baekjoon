#include <stdio.h>

int main(void){
    int N, i;
    int arr[2000000]={0};
    int min;
    int max;

    scanf("%d", &N);
    for(i=0; i<N;i++){
        scanf(" %d", &arr[i]);
        if(i==0){
            min=arr[i];
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}