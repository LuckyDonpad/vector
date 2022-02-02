#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#include <stdint.h>
#include <malloc.h>
#include <assert.h>

void test_pushBack_emptyVector() {
    vector vector1 = createVector(0);
    pushBack(&vector1, 1);
    assert(vector1.data[0] == 1);
    assert(vector1.capacity == 1);
    assert(vector1.size == 1);
}


void test_pushBack_fullVector() {
    vector vector1 = createVector(1);
    vector1.size = 1;
    vector1.data[0] = 42;
    pushBack(&vector1, 69);
    assert(vector1.data[0] == 42);
    assert(vector1.data[1] == 69);
    assert(vector1.capacity == 2);
    assert(vector1.size == 2);
}

void test_pushBack() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
}

void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);
    assert (v.size == 1);
    popBack(&v);
    assert (v.size == 0);
    assert (v.capacity == 1);
}

void test_atVector_IndexError()

int
main() {
    test_popBack_notEmptyVector();

    return 0;
}