#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    
    int N;
    int cnt=0;

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        int alp[26] = {0};
        scanf(" %s", str);
        int len = strlen(str);
        for(int j=0; j<len; j++){
            if(j==0){
                alp[str[0]-97]=1;
                if(j == len-1){
                    cnt++;
                }
            } else{
                if(alp[str[j]-97] ==0){
                    alp[str[j]-97] = 1;
                } else if(str[j-1] == str[j]){
                    alp[str[j]-97] = 1;
                } else if(alp[str[j]-97] !=0){
                    break;
                }

                if(j == len-1){
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}