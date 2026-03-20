#include <stdio.h>
#include <string.h>

int main(void){
    char str[2000];
    int N;

    fgets(str, sizeof(str), stdin);
    scanf(" %d", &N);

    printf("%c\n", str[N-1]);
    return 0;
}