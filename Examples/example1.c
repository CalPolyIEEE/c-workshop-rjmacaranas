#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

   printf("size of a char: %d bytes\n", (int) sizeof(char) );
   printf("size of a int: %d bytes\n", (int) sizeof(int));
   printf("size of a short: %d bytes\n", (int) sizeof(short));
   printf("size of a long: %d bytes\n", (int) sizeof(long));
   printf("size of a float: %d bytes\n", (int) sizeof(float));
   printf("size of a double: %d bytes\n", (int) sizeof(double));
   printf("size of a int16_t: %d bytes\n", (int) sizeof(int16_t));
   printf("size of a int32_t: %d bytes\n", (int) sizeof(int32_t));

   return(EXIT_SUCCESS);
}
