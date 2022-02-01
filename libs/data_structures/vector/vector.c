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
        if (!data) {
            fprintf(stderr, "bad alloc ");
            exit(1);
        } else return (vector) {data, 0, n};
    } else return (vector) {NULL, 0, 0};
}

void reserve(vector *v, size_t newCapacity) {
    if (newCapacity) {
        v->data = realloc(v->data, sizeof(int) * newCapacity);
        v->capacity = newCapacity;
        if (!v->data) {
            fprintf(stderr, "bad alloc ");
            exit(1);
        }
        if (newCapacity < v->size)
            v->size = newCapacity;
    } else {
        free(v->data);
        v->data = NULL;
        v->size = 0;
        v->capacity = 0;
    }
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    reserve(v, v->size);
}

void deleteVector(vector *v){
    free(v->data);
    v->data = NULL;
}



