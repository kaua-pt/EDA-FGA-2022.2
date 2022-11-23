#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int computarDigitos(char input[1001], int soma)
{
    if (*input == '\0')
    {
        return soma;
    }
    else
    {
        soma = soma + (input[0] - '0');
        return computarDigitos(input + 1, soma);
    }
}

int saberDigitos(int num)
{
    int i = 0;
    while (num > 0)
    {
        i++;
        num /= 10;
    }
    return i;
}

int main()
{
    char input[1001];
    int result, len;

    while (scanf("%s", input))
    {
        if (*input == '0')
            break;

        result = computarDigitos(input, 0);
        printf("result = %d\n", result);
        len = saberDigitos(result);

        if (result % 9 == 0)
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", input, len);
        }
        else
        {
            printf("%s is not a multiple of 9.\n", input);
        }
    }

    return 0;
}