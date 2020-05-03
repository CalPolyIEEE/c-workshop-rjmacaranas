#include <stdio.h>
#include <stdlib.h>

int good_counter(void);
int bad_counter(void);

int main(void) {
   for(int i = 0; i < 5; i++) {
     printf("good_counter = %d     bad_counter = %d\n", good_counter(),
            bad_counter());
   }

   return EXIT_SUCCESS;
}

int good_counter(void) {
   static int c = 0;
   c++;
   return c;
}

int bad_counter(void) {
  int c = 0;
  c++;
  return c;
}