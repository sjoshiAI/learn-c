#include <stdio.h>
#define TAB 4

int main()
{
    int c,i;
    i=0;
    while ((c=getchar())!=EOF)
    {
        i++;
        if (c=='\n'){
            i=0;
        }
        if (c=='\t'){
            while (i%TAB!=0){
                putchar(' ');
                i++;
            }
        }
        else{
            putchar(c);
        }
    }
}