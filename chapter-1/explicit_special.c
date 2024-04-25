#include <stdio.h>
/* Not yet finished */

int main()
{
    int c;
    int count;

    c = getchar();
    while (c!=EOF) {
        if (c=='\t')
            putchar('\t');
        else if (c=='\b')
            putchar('\\');
        else 
            putchar(c);
        c = getchar();
    }
}