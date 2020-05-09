#include <stdio.h>
#include <stdlib.h>
/* the head.h file is included twice as an arbitrary example of double inclusion */
#include "head.h"
#include "head.h"

#define NUMBER_TWO (2)
#define CUBE(A) ((A) * (A) * (A))

int main(void) {
   int result1 = CUBE(NUMBER_TWO);
   printf("result1 = %d\n", result1);

   int result2 = add_4(5);
   printf("result2 = %d\n", result2);

   return EXIT_SUCCESS;
}
