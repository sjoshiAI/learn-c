#include <stdio.h>

/* count digits, white space, others */

int main() {
    int c,i,nwhite,nother;
    int ndigit[10];

    nwhite=nother=0;
    for (i=0;i<10;++i)
        ndigit[i]=0;
    
    while ((c=getchar())!=EOF){
        if (c>='0' && c<='9'){
            ++ndigit[c-'0']; /*essential since c is an integer representation of character. 
                            Therefore, ndigit[c] will become ndigit[49] for 0 , ndigit[50] for 1 etc and 
                            we might get garbage values. Subtracting '0' means resetting the index to start with 0*/
        }
        else if (c==' ' || c=='\t' || c=='\n')
            ++nwhite;
        else
            ++nother;
    }

    for (i=0;i<10;++i)
        printf("digit %d =  %d\n",i, ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother );
}