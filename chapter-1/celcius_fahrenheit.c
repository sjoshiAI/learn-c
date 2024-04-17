#include <stdio.h>

#define LOWER (int)0
#define UPPER (int)300
#define STEP (int)20

int main()
{
    int fahr;
    for (fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP)
        printf("%3d\t%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
}