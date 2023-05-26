#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coins = 0;

    coins += cents / 25;  // Número de monedas de 25 centavos
    cents %= 25;         // Cantidad restante después de usar monedas de 25 centavos

    coins += cents / 10;  // Número de monedas de 10 centavos
    cents %= 10;         // Cantidad restante después de usar monedas de 10 centavos

    coins += cents / 5;   // Número de monedas de 5 centavos
    cents %= 5;          // Cantidad restante después de usar monedas de 5 centavos

    coins += cents / 2;   // Número de monedas de 2 centavos
    cents %= 2;          // Cantidad restante después de usar monedas de 2 centavos

    coins += cents;       // Número de monedas de 1 centavo

    printf("%d\n", coins);

    return 0;
}
