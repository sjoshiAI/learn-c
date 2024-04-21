#include <stdio.h>

int main() 
{
    int c;
    int count;

    c = getchar();
    while (c!=EOF) 
    {
        if (c==' ')
        {
            ++count;
        }

         if (c!=' ')
        {
            count=0;
        }

        if (count<=1)
        {
                putchar(c);
        }

        c = getchar();
    }
}