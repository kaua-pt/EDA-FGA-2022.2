#include "stdio.h"
#define EXC(A, B) \
    int tt = A;   \
    A = B;        \
    B = tt

// garantir que meu primeiro elemento é o menor
// inserir no que ele for maior que

int main()
{
    int vetor[50000], i = 0, j, k,l, minor, aux;

    while (scanf("%d", &vetor[i]) != EOF)
        i++;

    minor = 0;
    for (j = 1; j < i; j++)
    {
        if (vetor[minor] > vetor[j])
        {
            minor = j;
        }
    }
    EXC(vetor[0], vetor[minor]);

    // pegar na mao
    for (k = 2; k < i; ++k)
    {
        int u = k;
        aux = vetor[u];

        while (aux <= vetor[u - 1])
        {
            vetor[u] = vetor[u - 1];
            --u;
        }
        vetor[u] = aux;
    }

    for (l = 0; l < i; l++)
    {
        printf("%d%s", vetor[l], l == i - 1 ? "\n" : " ");
    }
}