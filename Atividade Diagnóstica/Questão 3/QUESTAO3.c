#include <stdio.h>

int main ()
{
	float raio, perimetro, area;
	
	printf("Informe o raio do círculo em centímetros: ");
	scanf("%f", &raio);
	
	perimetro = 2*raio*3.14;
	area = 3.14*raio*raio;
	
	printf("A área do círculo é de: %f cm\n", area);
	printf("O perímetro do círculo é de: %f cm", perimetro);
	
	return 0;
}