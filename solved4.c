#include<stdio.h>
int main(){
    int principle, time;
    float rate, interest;
    printf("Enter Principle: ");
    scanf("%d", &principle);

    printf("Enter Time: ");
    scanf("%d", &time);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    interest = (principle * time * rate)/ 100 ;
    printf("Simple Interest = %f\n", interest) ;
    printf("Principal + Interest = %.1f\n ", principle + interest);

    return 0;
}
