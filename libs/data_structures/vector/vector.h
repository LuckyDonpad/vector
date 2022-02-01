//
// Created by Donpad on 01.02.2022.
//

#ifndef VECTOR_LAB_VECTOR_H
#define VECTOR_LAB_VECTOR_H

#include <stdio.h>


typedef struct vector {
    int *data;        // указатель на элементы вектора
    size_t size;      // размер вектора
    size_t capacity;  // вместимость вектора
} vector;

// возвращает структуру-дескриптор вектор из n значений
vector createVector(size_t n);

#endif //VECTOR_LAB_VECTOR_H
