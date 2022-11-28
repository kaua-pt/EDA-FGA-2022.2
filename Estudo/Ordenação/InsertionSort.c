#include <stdio.h>

// consideramos que já há uma ordenação e inserir um novo elemento em ordem
// mais rapido que o selection

void troca(int *v, int *v2)
{
    int aux;
    aux = *v;
    *v = *v2;
    *v2 = aux;
}

void insertionSort(int *v, int n)
{
    int i, j, min, t;
    for (i = 0; i < n; i++)
    {
        t = v[i];
        for (j = i; j > 0 && t < v[j - 1]; j--)
        {
            if (v[j] < v[j - 1])
            {
                troca(&v[j], &v[j - 1]);
            }
            v[j] = t;
        }
    }
}

int main()
{

    int vetor = {0, 1, 2, 3, 5, 6, 7, 8, 9}; // inserir 4

    return 0;
}