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


void test_pushBack_fullVector(){
    vector vector1 = createVector(1);
    vector1.size = 1;
    vector1.data[0] = 42;
    pushBack(&vector1, 69);
    assert(vector1.data[0] == 42);
    assert(vector1.data[1] == 69);
    assert(vector1.capacity == 2);
    assert(vector1.size == 2);
}

void test_pushBack(){
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
}


int
main() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();

    return 0;
}