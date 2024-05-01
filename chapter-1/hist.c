#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word*/
#define SIZE 25 /* maximum length of words*/

/* Draw a vertical and horizontal histogram of word length */

int main(){

    int nlength[SIZE]; /*longest word in english is 45 characters long*/
    int c, state, length, maxcount;
    state = OUT;
    length = 0;
    maxcount = 0;

    for (int i=0;i<SIZE;++i){
        nlength[i]=0;
    }
    
    while ((c=getchar())!=EOF){
        if (c==' '||c=='\t'||c=='\n'){
            state = OUT;
            ++nlength[length];
            length=0;
            }
        else {
            state = IN;
            ++length;   
        }
    }
    
    for (int i=0; i<=SIZE; ++i){
        if (maxcount<nlength[i]){
            maxcount=nlength[i];
        }
    }
    printf("%d",maxcount);

    /* Horizontal bars */
    printf("=========================Horizontal histogram=========================== \n");
    for (int i=0;i<10;++i){
            printf("%d\t",i);
            for (int j=0; j<nlength[i];++j){
                printf("*");
            }
        printf("\n");
        }

    /* Vertical bars */
    printf("=========================Vertical histogram=========================== \n");
    for (int i=0; i<maxcount;++i){
        for (int j=0; j<10; ++j){
                if (nlength[j]<maxcount){
                    printf("  ");
                    ++nlength[j];
                }
                else{
                    printf("* ");
                }
        }
        printf("\n");
    }
    for (int k=0; k<10; ++k){
        printf("%d ",k);
        }
    
    printf("\n");
    
}