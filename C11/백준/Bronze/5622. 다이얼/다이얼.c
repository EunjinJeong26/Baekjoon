#include <stdio.h>
#include <string.h>

int main(void){
    char input[17];
    int alp[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int i, time=0;

    fgets(input, sizeof(input), stdin);
    for(i=0; i<strlen(input); i++){
        time+=alp[input[i]-65];
    }
    printf("%d\n", time);
    return 0;
}