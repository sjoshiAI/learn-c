#include <stdio.h>

#define STEP (int)20

float fahr_to_cel(int fahrenheit);

int main(){
    for (int i=0; i<=300; i=i+STEP) 
        printf("%3d\t%6.1f\n", i, fahr_to_cel(i));
}

float fahr_to_cel(int fahrenheit){
    float result;
    result = (5.0/9.0)*(fahrenheit-32);
    return result;
}