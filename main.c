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

void test_atVector_notEmptyVector() {
    vector vector1 = createVector(3);
    vector1.data[0] = 1;
    vector1.data[1] = 1;
    vector1.data[2] = 1;
    assert(atVector(&vector1, 0) == &vector1.data[0]);
    assert(atVector(&vector1, 1) == &vector1.data[1]);
    assert(atVector(&vector1, 2) == &vector1.data[2]);
}

void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);
    assert (v.size == 1);
    popBack(&v);
    assert (v.size == 0);
    assert (v.capacity == 1);
}

void test_atVector_requestToLastElement(){
    vector vector1 = createVector(3);
    vector1.data[0] = 1;
    vector1.data[1] = 1;
    vector1.data[2] = 1;

    assert(atVector(&vector1, 2) == &vector1.data[2]);
}

void test_back_oneElementInVector(){
    vector vector1 = createVector(1);
    vector1.data[0] = 1;

    assert(back(&vector1) == &vector1.data[0]);
}

void test_front_oneElementInVector(){
    vector vector1 = createVector(1);
    vector1.data[0] = 1;

    assert(front(&vector1) == &vector1.data[0]);
}


int main() {
    test_popBack_notEmptyVector();
    test_atVector_notEmptyVector();
    test_back_oneElementInVector();
    test_front_oneElementInVector();

    return 0;
}