/*
 ============================================================================
 Name        : Howe.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	// First task
	printf ("Task I\n");
		int value;
			printf ("Please enter whole value from 0 to 100 : ");
			scanf ("%d", &value);
		printf ("%s", (value >= 0) && (value <= 100) ? "Right choice\n" : "Negative choice\n");

	// Second task
	printf (" \n");
	printf ("Task II \n");
		int n;
		int b = 0;
		for (n = 0; n < 10; n++)
		{
			int a;
			printf ("Enter number:");
			scanf ("%d", &a);
			b += a;;
		}
	printf ("Arithmetical mean = %d\n", b /= 10);

	// Third task
	printf (" \n");
	printf ("Task III\n");
		int a = 1;
		int num;
	do {
		printf("Enter positive number not exceed 1000 : ");
		scanf("%d", &num);
		printf("%s", (num >= 0) && (num <=1000) ? "" : "Incorrect value\n");
	} while ((num > 1000) || (num < 0));
	printf("Even numbers: ");
	for (a = 1; a < num; a++)
	{
		if (a % 2 == 0)
		{
			printf("%d,", a);
		}
	}
	printf ("\n");
	return 0;
}

