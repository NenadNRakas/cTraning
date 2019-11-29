//#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int glo = 1; /*Initialize a global variable */
int record_num = 12;
int age = 33;
float hourly_wage = 6.33;
static int var = 2; /*Initialize a local variable */
char name[30] ="Buddy";

int main(void)
	{
		int ans = 3; /*Initialize a function variable */
				/*val = 4; Compiler Error: Non-Initialized Variable */
		const int val = 4; /*Constant Initialized Integer Variable*/
	  /*puts("Hey Buddy as of: you are a c Programming Guru" + fflush(stdout) + ans + var - glo); Omits the new line*/
		puts("Hey Buddy as of: you are a c Programming Guru" + ans + var - glo); /* Ensures that strings are displayed while addind a new line*/
		//name = "Buddy";
	  /*printf("The value is: %d", fflush(stdout) & ans - var - glo ); Omits the new line*/
		printf("The value is: %d\n", ans - var - glo); /* Ensures that values are displayed while addind a new line*/
		//printf("Record %lX, name = %s, age = %d, hourly wage = %.3f\n", name, record_num, age, hourly_wage);

		double a, pi;
		int b;

		a = 500 / 40; /* Integer Math - No Fractions Accepted */
		printf("a = %.3f\n", a);

		a = 500.0 / 40; /* Floating Point Math - Fractions Included */
		printf("a = %.3f\n", a);

		a++;
		printf("a now = %.3f\n", a);

		b = (int) a;
		b ^= 5;
		printf("b = %d\n", b);

		pi = 4 * atan(1.0);
		printf("pi ~= %.10f\n", pi);

		return (0);

		//EXIT_SUCCESS (1);
	}