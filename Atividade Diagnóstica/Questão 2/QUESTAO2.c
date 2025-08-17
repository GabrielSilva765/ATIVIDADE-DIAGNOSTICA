#include <stdio.h>

int main()
{
	float salario, valor_total, horas_extras;
	int horas;
	
	printf("Insira o seu salário base: ");
	scanf("%f", &salario);
	
	printf("Insira o valor das horas extras: ");
	scanf("%f", &horas_extras);
	
	printf("Informe quantas horas foram trabalhadas: ");
	scanf("%d", &horas);
	
	valor_total= salario + horas_extras*horas;
	
	printf("Seu salário final será: %f", valor_total);
	
    return 0;
}