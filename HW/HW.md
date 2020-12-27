# 第八週補充
* code
```
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
```
* picture
![picture](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/%E6%9C%AA%E5%91%BD%E5%90%8D.png)