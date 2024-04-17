#include <stdio.h>
/* celsius to fahrenhiet coversion*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower=0;
    upper=300;
    step=20;
    
    fahr=lower;
    printf("Fahrenheit \t Celsius\n");
    while (fahr<=upper) 
    {
        celsius = 5.0*(fahr-32)/9.0;
        printf("%.0f \t\t %.1f\n",fahr, celsius);
        fahr=fahr+step;
    }
}