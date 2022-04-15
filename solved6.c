#include<stdio.h>
int main(){
    int workingHrs, hrsSalary;
    float salary;
    printf("Input the working hrs: ");
    scanf("%d", &workingHrs);
    printf("Salary amount/hr: ");
    scanf("%d", &hrsSalary);
    salary = workingHrs * hrsSalary;
    printf("Salary = %.2f\n " , salary);
    return 0;
}
