#include<stdio.h>
int main()
{
    int celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius = ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9/5) + 32 ;
    printf("Temperature in Fahrenheit %.1f F ", fahrenheit);
    return 0;
}

