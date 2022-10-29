#include <stdio.h>

// diferença emtre *char e *int é a maneira como se trabalha o endereço
// muda o tanto de casas na memoria que se anda;

// somar 4 numeros de uma vez

int main()
{
    // int *a;
    //  a = a+1 // soma 4 bytes no endereço proximo inteiro na memoria
    // char *c; //somaria 1 byte para atingir o proximo endereço

    // reserva a memoria em A e B, temos 8 bytes
    int a, b;                 // 4 bytes esses são os locais na memoria
    short int *c, *d, *e, *f; // 2 bytes esses são os numeros

    // aloca o endereço de A na posição 0 de C, ocupando os 2 primeiros bytes
    // de A e B
    c = &a;
    d = &b;

    e = &c[1]; // c + 1 proximo na memoria de A
    f = &d[1];

    *c = 5;
    *d = 4;
    *e = 9;
    *f = 6;

    a = a + b;

    printf("%d", *c);
    return 0;
}