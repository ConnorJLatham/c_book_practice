#include <stdio.h>

#include "utility/utility.h"

typedef enum {
    Sunday, Monday, Tuesday
} weekdayT;

int main(void) {
    directionT dir = south;
    directionT new_dir = OppositeDirection(dir);
    printf("new dir: %i\n", new_dir);
}
