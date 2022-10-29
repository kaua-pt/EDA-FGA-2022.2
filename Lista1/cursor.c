#include <stdio.h>

int encontrarUltimoChar(char *matrix)
{
    int i, contador = 0;

    for (i = 0; i < 1000; i++)
    {
        if (matrix[i] != '\0')
        {
            contador++;
        }
        else
        {
            return contador;
        }
    }
}

int main()
{
    int linhas, colunaI, linhaI, k, i, j, resultL, resultC, helperF;
    char x;
    char matrix[1001][1001];
    scanf("%d", &linhas);

    for (k = 1; k <= linhas; k++)
    {
        scanf(" %[^\n]s", matrix[k]);
    }

    scanf("%d %d", &linhaI, &colunaI);
    resultL = linhaI;
    resultC = colunaI;

    scanf("%c", &x);

    while (scanf("\n%c", &x) != EOF)
    {

        if (x == 'j')
        {
            if ((resultL + 1) > linhas)
            {
            }
            else
            {
                resultL = resultL + 1;

                helperF = encontrarUltimoChar(matrix[resultL]);

                if (resultC >= helperF)
                {
                    resultC = helperF;
                }
                else
                {
                    resultC = colunaI;
                }
            }
        }

        if (x == 'k')
        {

            if (resultL <= 1)
            {
                resultL = 1;
            }
            else
            {
                resultL = resultL - 1;

                helperF = encontrarUltimoChar(matrix[resultL]);

                if (resultC >= helperF)
                {
                    resultC = helperF;
                }
                else
                {
                    resultC = colunaI;
                }
            }
        }

        printf("%d ", resultL);
        printf("%d ", resultC);
        printf("%c\n", matrix[resultL][resultC - 1]);
    }

    return 0;
}
