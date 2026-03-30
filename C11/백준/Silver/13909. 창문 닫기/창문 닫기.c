#include <stdio.h>

int main(){
    long long N;
    int cnt=0;

    scanf("%lld", &N);

    for(long long i=1; i*i<=N; i++){
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}