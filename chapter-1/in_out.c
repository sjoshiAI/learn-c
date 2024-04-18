#include <stdio.h>

/*copy input to output*/

int main()
{
    int c;
    c = getchar();
    printf("%d\n",EOF);
    while (c!=EOF){
        putchar(c);
        c = getchar();
    }
}