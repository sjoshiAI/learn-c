#include <stdio.h>
/* Not yet finished */

int main()
{
    int c;
    int count;

    while ((c=getchar())!=EOF) {
        if (c=='\t'){
            putchar('\\');
            putchar('t');
        }
        else if (c=='\b'){
            /* this never works due to backspace properties - i need to understand this better*/
            putchar('\\');
            putchar('b')''
        }
        else if (c=='\\'){
            putchar('\\');
            putchar('\\');
        }
        else 
            putchar(c);
    }
}