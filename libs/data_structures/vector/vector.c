//
// Created by Donpad on 01.02.2022.
//

#include "vector.h"
#include "malloc.h"
#include <stdio.h.>
#include <stdlib.h>


vector createVector(size_t n) {
    if (n) {
        int *data = (int *) malloc(sizeof(int) * n);
        if (data == NULL) {
            fprintf(stderr, "bad alloc ");
            exit(1);
        } else return (vector) {data, 0, n};
    } else return (vector) {NULL, 0, 0};
}


