#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include "head.h"

#define NUMBER_TWO (2)
#define cube(a) (a * a * a)

int main(void) {
   int result1 = cube(NUMBER_TWO);
   printf("result1 = %d\n", result1);

   int result2 = add_4(5);
   printf("result2 = %d\n", result2);

   return EXIT_SUCCESS;
}