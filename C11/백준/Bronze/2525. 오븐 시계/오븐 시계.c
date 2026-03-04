#include <stdio.h>

 int main(void){
    int hour, min, cook;
    int add;

    scanf("%d %d", &hour, &min);
    scanf(" %d", &cook);
    min+=cook;

    if(min>59){
      add = min/60;
      min -=(add*60);
      if(min<0)
         min*=(-1);
      hour+=add;

      if(hour>=24){
         hour-=24;
      }
    }

    printf("%d %d\n", hour, min);
    return 0;
 }