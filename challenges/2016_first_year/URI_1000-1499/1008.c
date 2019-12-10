#include <stdio.h>

int main() {
int numerodofunc;
int quantdehoras;
float salary;
float valorporhora;
scanf("%d", &numerodofunc);
scanf("%d", &quantdehoras);
scanf("%f", &valorporhora);
salary = (quantdehoras)*(valorporhora);
printf("NUMBER = %d\n", numerodofunc);
printf("SALARY = U$ %.2f\n", salary);
    return 0;
}
