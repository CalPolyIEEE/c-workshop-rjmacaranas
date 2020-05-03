#include <stdio.h>
#include <stdlib.h>

int good_counter();
int bad_counter();

int main(void) {
   for(int i = 0; i < 5; i++) {
     printf("good_counter = %d     bad_counter = %d\n", good_counter(),
            bad_counter());
   }

   return EXIT_SUCCESS;
}

int good_counter() {
   static int c = 0;
   c++;
   return c;
}

int bad_counter() {
  int c = 0;
  c++;
  return c;
}