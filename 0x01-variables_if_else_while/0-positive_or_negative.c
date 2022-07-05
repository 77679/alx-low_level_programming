#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - Prints a random number and states whether
 *
 *   * it is positive, negative, or zero.
 *
 *    *
 *
 *     * Return: Always 0.
 *
 *      */

int main(void)

{

	 int n;



	  srand(time(0));

	   n = rand() - RAND_MAX / 2;

	    /* your code goes there */

	   if (n > 0) (12, 22)

		      printf("%d is positive\n", n);

	     else if (n < 0) (13, 23)

		       printf("%d is negative\n", n);

	      else

		        printf("%d is zero\n", n);



	       return (0);

v}
