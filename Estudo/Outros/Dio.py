# Kauã Vinícius Ponte Aguiar - 211029399
# Carla de Araújo Clementino Ribeiro - 180030736

import matplotlib.pyplot as plt
import numpy as np


def MDC(a, b):
    while (b != 0):
        resto = a % b
        a = b
        b = resto
    return a


def solve(a, b, c):
    # MDC entre A e B
    mdc = MDC(a, b)
    array_x = []
    array_y = []

    print("Temos as soluções: ")
    for i in range(-c, c):
        for j in range(-c, c):
            if (a*i + b*j == mdc):
                r1 = i
                r2 = j
                array_x.append(r1)
                array_y.append(r2)
                print("X = " + str(r1) + " e Y = " + str(r2))
                break

    mux = c / mdc
    r3 = array_x[round(len(array_x)/2)-1]
    r4 = array_y[round(len(array_x)/2)-1]
    print(r3)
    print("Assim, encontramos a seguinte solução particular :")
    print("Xo = " + str(r3*mux) + " + " + str(a/mdc) + " T")
    print("Y0 = " + str(r4*mux) + " + " + str(b/mdc) + " T")

    plt.plot(array_x, array_y, color='orange', marker='o')
    plt.xlabel("X")
    plt.ylabel("Y")
    plt.show()


a = int(input("Insira o valor de A: "))
b = int(input("Insira o valor de B: "))
c = int(input("Insira o valor de C: "))

solve(a, b, c)
