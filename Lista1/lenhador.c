#include <stdio.h>
#include <string.h>

// numero da entrada 5<= L <=1000
// galhos na arvore 2<= G <= l/2
// G linhas com posicao + altura como char e int
// posicao onde começa em char
// string entre  1 <= C <= 2000 com os comandos

// T troca, B bate

int **criarMatriz(char vet[1000][11], char lados[501], int ladosPos[501], int galhos, char initial)
{
    int i, j, k, l, z, p, o;

    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 1000; j++)
        {
            if ((j == 4) || (j == 5) || (j == 6))
            {
                vet[j][i] = '|';
            }
            else
            {
                vet[j][i] = ' ';
            }
            for (z = 0; z < 501; z++)
            {
                int pos = ladosPos[z];

                if (lados[z] == 'D')
                {
                    for (p = 8; p < 11; p++)
                    {
                        vet[p][pos] = '-';
                    }
                }
                if (lados[z] == 'E')
                {
                    for (p = 1; p < 4; p++)
                    {
                        vet[p][pos] = '-';
                    }
                }
            }
        }
    }

    if (initial == 'D')
    {
        vet[2][0] = 'L';
        vet[2][1] = 'L';
    }
    if (initial == 'E')
    {
        vet[8][0] = 'L';
        vet[8][1] = 'L';
    }

    for (l = 0; l < 5; l++)
    {
        for (k = 0; k < 11; k++)
        {
            printf(" %c", vet[k][l]);
        }
        printf("\n");
    }
    printf("_______________________");
}

int main()
{
    int i, j;
    int rodadas, galhos;
    char inicial, aux;
    int ladosPos[501];
    char stringAux[5];
    char lados[501];
    char comando[2000];
    char matrix[1000][11];

    scanf("%d", &rodadas);
    scanf("%d", &galhos);

    for (i = 0; i < galhos; i++)
    {
        scanf(" %c", &aux);
        scanf("%d", &ladosPos[i]);
        lados[i] = aux;
    }

    scanf(" %c", &inicial);
    scanf("%s", comando);

    for (j = 0; j < 1; j++)
    {
        criarMatriz(matrix, lados, ladosPos, galhos, inicial);
    }

    return 0;
}