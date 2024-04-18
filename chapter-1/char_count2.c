#include <stdio.h>

int main()
{
    double nc;
    
    for (nc=0;getchar()!=EOF;++nc)
        ; /*because the body of for loop can't be empty therefore a null(;) statemnt is added*/
    printf("\n%.0f\n",nc);
}