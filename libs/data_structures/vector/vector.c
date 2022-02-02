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

//сделать короче realloc(0)
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

void deleteVector(vector *v) {
    free(v->data);
    v->data = NULL;
}

bool isEmpty(vector *v) {
    return v->size == 0;
}

bool isFull(vector *v) {
    return v->size == v->capacity;
}

int getVectorValue(vector *v, size_t i) {
    return v->data[i];
}

void pushBack(vector *v, int x) {
    if (isFull(v)) {
        reserve(v, v->capacity * 2 + (v->capacity == 0));
    }
    v->data[v->size] = x;
    v->size++;
}

void popBack(vector *v){
    if(isEmpty(v)){
        fprintf(stderr, "vector is already empty");
        exit(1);
    } else
        v->size--;
}


