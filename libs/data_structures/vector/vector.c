//
// Created by Donpad on 01.02.2022.
//

#include "vector.h"
#include "malloc.h"

vector createVector(size_t n){
    int *data = (int *) malloc(sizeof(int) * n);

    return (vector){data, 0, n};
}

