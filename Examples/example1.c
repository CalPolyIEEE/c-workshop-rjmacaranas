#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

   printf("size of a char: %d bytes\n", sizeof(char) );
   printf("size of a int: %d bytes\n", sizeof(int));
   printf("size of a short: %d bytes\n", sizeof(short));
   printf("size of a long: %d bytes\n", sizeof(long));
   printf("size of a float: %d bytes\n", sizeof(float));
   printf("size of a double: %d bytes\n", sizeof(double));
   printf("size of a int16_t: %d bytes\n", sizeof(int16_t));
   printf("size of a int32_t: %d bytes\n", sizeof(int32_t));

   return(EXIT_SUCCESS);
}