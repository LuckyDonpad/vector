#include <stdio.h>
#include "libs/data_structures/vector/vector.h"

int main() {
    vector vector1 = createVector(10);
    vector vector2 = createVector(7);
    vector1.size = 3;
    vector2.size = 42;

    return 0;
}