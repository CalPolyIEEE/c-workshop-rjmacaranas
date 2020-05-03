/* main.c */

#include "db.h"
#include <stdio.h>
#include <stdlib.h>

#define NSAMPLES (8)

int main() {
   int i;
   int pressed[NSAMPLES] = {1, 1, 0, 1, 1, 1, 1, 0};

   printf("db_flag before init: %d\n", db_flag);

   for (i = 0; i < NSAMPLES; i++) {
      printf("i=%d pressed=%d | ", i, pressed[i]);
      debounce(pressed[i]);
      printf("\tdb_flag: %d\n", db_flag);
   }

   return EXIT_SUCCESS;
}