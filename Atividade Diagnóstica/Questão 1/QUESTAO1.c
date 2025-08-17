#include <stdio.h>

int main()
{
    float celcius, fahrenheit;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celcius);

    fahrenheit = celcius*1.8 + 32;

    printf("Sua temperatura em fahrenheit é de: %f\n", fahrenheit);

    return 0;
}
