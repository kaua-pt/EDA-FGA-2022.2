#include <stdio.h>

// trocar cartas sempre que valores consecutivos estiverem invertidos
// demora mais que o selection

void troca(int *v, int *v2)
{
    int aux;
    aux = *v;
    *v = *v2;
    *v2 = aux;
}

void BubbleSort(int *v, int n)
{
    int i, j, min, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (v[j] < v[j - 1])
            {
                troca(&v[j], &v[j - 1]);
            }
        }
    }
}

int main()
{

    int vetor = {0, 1, 2, 3, 5, 6, 7, 8, 9};
    return 0;
}