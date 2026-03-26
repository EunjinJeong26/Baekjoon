#include <stdio.h>

int main(void){
    int a,b;
    int result[10000]={0};
    int i=0;

    while(1){
        scanf(" %d %d", &a, &b);

        if(a==0 && b==0){
            break;
        }

        result[i] = a+b;
        i++;
    }

    for(int j=0; j<i; j++){
        printf("%d\n", result[j]);
    }
    return 0;
}