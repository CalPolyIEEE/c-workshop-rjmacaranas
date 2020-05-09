#include<stdint.h> 
#include<stdio.h> 
#include<stdlib.h> 

uint16_t multiply(uint8_t a, uint8_t b) {
   /* explicitly typecast */
   return (uint16_t)a * (uint16_t)b;
}

int main(void) {
   uint8_t foo = 50, bar = 10;
   uint8_t result;
   /* return val implicitly typecasted (bad) */
   result = multiply(foo, bar);
   printf("foo = % d bar = % d result = % d\n", foo, bar, result);
   return (EXIT_SUCCESS); /* usually 0 */
}
