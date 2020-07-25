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
	printf ("Please select whole value from 0 to 100 : ");
	scanf ("%d", &value);
	printf ("%s", (value >= 0) && (value <= 100) ? "Right choice\n" : "Negative choice\n");

	//Second task
	printf (" \n");
	printf ("Task II \n");
	return 0;
}

