/* db.c */

#include <stdio.h>

#define DB_THRESHOLD (3)
int db_flag; /* global variable */

void debounce(int pressed) {
   static int counter = 0; /* initialized only once */
   int old_counter;        /* for demo usage only */

   printf("old_counter before init: %d", old_counter);
   old_counter = counter;

   if (pressed) {
      counter++;
   }
   else {
      counter = 0;
   }

   printf("\tcounter: %d --> %d", old_counter, counter);

   db_flag = (counter >= DB_THRESHOLD);
}