#include <stdio.h>

int main(void){
    char num1[4];
    char num2[4];
    int temp, big;

    scanf("%s %s", num1, num2);

    for(int i=2; i>=0; i--){
        if(num1[i]!=num2[i]){
            if(num1[i]>num2[i]){
                for(int j=2; j>=0; j--){
                    printf("%c", num1[j]);
                }
        }   else{
                for(int j=2; j>=0; j--){
                    printf("%c", num2[j]);
                }
            }
        printf("\n");
        return 0;
        }
    }

}