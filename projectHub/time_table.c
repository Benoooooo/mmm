#include <stdio.h>
#include "main.h"

/**
 * time_table - print the time
 *
 * @i: print the number of the times it is printed
 * @j: prints the time it self
 *
 */

void time_table(void)
{
 int i = 0;
 int j = 0;
 for(i = 0; i < 10; i++)
 {
  for(j = 0; j < 10; j++)
  {
   printf("%d", i * j);
   if (j == 9)
    continue; 
   putchar(',');
   putchar(' ');
   putchar(' ');
  }
  putchar('\n');
 }
}
