//
// Created by yurik on 02/03/2021.
//
#include "TestaPrimo.h"


int Primo2(int x){

    int div = 0;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            div++;
        }
    }

    if (div == 2)
        return 1;
    else
        return 0;


}
