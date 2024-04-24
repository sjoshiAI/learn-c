#include <stdio.h>

int main() 
{
    int c;
    int count;

    c = getchar();
    while (c!=EOF) {
        if (c=='\t')
            putchar('\t');
         if (c=='\\')
            putchar('\b');
        if (count<=1)
                putchar(c);
        c = getchar();
    }
}