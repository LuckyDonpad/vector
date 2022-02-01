#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#include <stdint.h>
#include <malloc.h>

int
main() {
    vector vector1 = createVector(10);
    vector1.size = 10;
    vector1.data[4] = 42;
    printf("%d", getVectorValue(&vector1, 4));


    return 0;
}