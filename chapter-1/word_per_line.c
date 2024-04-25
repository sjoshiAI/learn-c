#include <stdio.h>
/* Word is defined as any collection of characters not containing blank, tab or new line character*/

int main(){
    
    int c;
    while ((c=getchar())!=EOF){
        if (c==' ' || c=='\t' || c=='\n')
            putchar('\n');

        putchar(c);
    } 
}