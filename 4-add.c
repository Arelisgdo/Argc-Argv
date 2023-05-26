#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        int num = 0;
        int j = 0;

        while (argv[i][j] != '\0') {
            if (argv[i][j] >= '0' && argv[i][j] <= '9') {
                num = num * 10 + (argv[i][j] - '0');
                j++;
            } else {
                printf("Error\n");
                return 1;
            }
        }

        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
