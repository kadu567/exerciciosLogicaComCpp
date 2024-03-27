#include <iostream>

int main () {

int num1;

printf("Digite a temperatura em celsius: ");
scanf("%d", &num1);

int f = (num1 * 9/5) + 32;

printf("Resultado: %d\n", f);

return 0;
}