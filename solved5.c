#include<stdio.h>
int main(){
    float number;
    printf("Enter Number: ");
    scanf("%f", &number);
    printf("Integer part: %d\n", (int)number);
    printf("Real part: %.3f\n", number - (int)number );
    return 0;
}

