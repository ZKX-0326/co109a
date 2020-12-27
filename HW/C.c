#include<stdio.h>
/*
R0=1
while (1) {
  R0=R0+1
}
*/
int main(){
    int R0 = 1;
    LOOP:
        if(R0 == 100){
          goto EXIT;
        }
        R0 += 1;
        printf("R0 = %d\n", R0);
        goto LOOP;
    EXIT:
        return 0;
}