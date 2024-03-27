#include <iostream>

int main(){

float num1, num2, num3;

printf("digite um numero: " );
scanf("%f" , &num1);
printf("digite o segundo numero: ");
scanf("%f" , &num2);
printf("digite o terceiro numero: ");
scanf("%f" , &num3);
printf("A media dos numeros e: %f\n", (num1 + num2 + num3) / 3);

return 0;
}