//
// Created by yurik on 02/03/2021.
//
#include "TestaPrimo.h"


int Primo3(int n) {
    int EhPrimo, d;
    if (n <= 1 || (n != 2 && n % 2 == 0))
        EhPrimo = 0;    /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
        EhPrimo = 1;        /* o numero e' primo ate que se prove o contrario */


    d = 3;
    while (EhPrimo && d <= n / 2) {
        if (n % d == 0)
            EhPrimo = 0;
        d = d + 2;        /* testamos so' os  impares: 3, 5, 7... */
    }


    return EhPrimo;
}