#include <stdio.h>

int main()
{
    int c,nl;
    nl=0;
    while ((c=getchar())!=EOF)
    {
        if (c=='\n') /*a character in single quotes is a character constant equal 
                        to integer value in machine's character set e.g 'A' =65*/
            ++nl;
    
    }
    printf("%d\n",nl);
    

}