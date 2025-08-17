#include <stdio.h>

int main()
{
	int maquinas1 = 8;
	int pecas1 = 120;
	
	int maquinas2 = 10;
	int pecas2;
	
	pecas2 = (maquinas2* pecas1)/maquinas1;
	
	printf(" %d maquinas produzirão %d peças", maquinas2, pecas2);
	
	return 0;
}