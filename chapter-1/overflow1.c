#include <stdio.h>

int main(){
    /* integer arithmetic overflow example */
    printf("Integer overflow example : 200*300*400*500 %d\n",200*300*400*500);
    
    printf("Float overflow example part 1: (3.14+1e20)-1e20 %0.1f\n",(3000.14+1e20)-1e20);

    printf("Float overflow example part 2 : 3.14+(1e20-1e20) %0.2f\n",3000.14+(1e20-1e20));
    

}