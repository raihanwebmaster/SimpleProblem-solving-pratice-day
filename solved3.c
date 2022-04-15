#include<stdio.h>
int main(){
    int firstNumber, secondNumber;
    printf("First Number: ");
    scanf("%d" , &firstNumber);
    printf("Second Number: ");
    scanf("%d" , &secondNumber);
    printf("Sum = %d\n", firstNumber + secondNumber);
    printf("Difference  = %d\n", firstNumber - secondNumber);
    printf("Product  = %d\n", firstNumber * secondNumber);
    printf("Quotient   = %d\n", firstNumber / secondNumber);
    printf("Modulus    = %d\n", firstNumber % secondNumber);
    return 0;
}
