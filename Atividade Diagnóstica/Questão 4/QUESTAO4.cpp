#include <stdio.h>

int main()
{
	float preco, desconto, total;
	
	printf("Insira o preço do produto: ");
	scanf("%f", &preco);
	
	printf("Insira o percentual de desconto do produto (apenas o número): ");
	scanf("%f", &desconto);
	
	total = preco - preco*(desconto/100);
	
	printf("O valor total equivale: R$ %f", total);
	
	return 0;	
}