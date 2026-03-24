#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000005];
    int len;
    int cnt=0;
    int check=0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    for(int i=0; i<len; i++){
        if(i==0 && str[i]!=' '){
            check = 1;
            cnt++;
        } else if(str[i-1]==' ' && str[i]!=' '){
            check = 1;
            cnt++;
        } else if(check==1 && str[i]==' '){
            check = 0;
        } else if((str[i+1]==' ' || i==len-1) && check==1 ){
            check=0;
        }
    }

    printf("%d\n", cnt);
    return 0;
}