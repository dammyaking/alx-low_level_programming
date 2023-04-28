#include <stdio.h>
/*
 * Add the constructor attribute to leadfunc()
 * so that it is executed before main()
*/
	void leadfunc(void) __attribute__ ((constructor));

/*
 * Add the destructor attribute to defferedfunc()
 *so that it is executed after main()
 */

	void defferedfunc(void)__attribute__ ((destructor));
/**
 * leadfunc - This functions print 2 strings with 2 printf
 *
 */
	void leadfunc(void)
	{
		printf("You're beat! and yet, you must allow,");
		printf("\nI bore my house upon my back!\n");
	}
