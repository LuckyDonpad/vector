#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#include <stdint.h>

int main() {
    vector vector1 = createVector(SIZE_MAX);
    vector vector2 = createVector(7);
    vector1.size = 3;
    vector2.size = 42;

    return 0;
}