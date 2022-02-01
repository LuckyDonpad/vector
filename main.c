#include <stdio.h>
#include "libs/data_structures/vector/vector.h"
#include <stdint.h>
#include <malloc.h>

int
main() {
    vector vector1 = createVector(10);
    reserve(&vector1, 0);


    return 0;
}