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

// изменяет количество памяти, выделенное под хранение элементов вектора v, на newCapacity
void reserve(vector *v, size_t newCapacity);

//удаляет элементы вектора v, но не освобождает выделенную память;
void clear(vector *v);

// освобождает память, выделенную под неиспользуемые элементы вектора v
void shrinkToFit(vector *v);

//освобождает память, выделенную вектору v
void deleteVector(vector *v);


#endif //VECTOR_LAB_VECTOR_H
