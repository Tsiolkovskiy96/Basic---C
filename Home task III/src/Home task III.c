/*
 ============================================================================
 Name        : Home task III.c
 Author      : Vyacheslav Tarakanov
 Version     : v1.0
 Copyright   : Only to me
 Description : Home task III
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

// Task 3.1

int calcSquareEq(int a, int b, int c, double* x1, double* x2)	{
	int D;
	int b1;
	D = b * b - ((a * c) << 2);
	if (a == 0)	{
		*x1 = -c / b1;
		return 0;
	} else if (D > 0) {
		*x1 = (-b1 + sqrt(D) / (a << 1));
		*x2 = (-b1 + sqrt(D) / (a << 1));
		return 1;
	} else if (D == 0) {
		*x1 = -b1 / (a << 1);
		return 0;
	} else {
		return -1;
	}
}

int main(int argv, const char ** argc)	{
	int a, b, c;
	double x1, x2;
	int r;
	printf("Task 3.1\nEnter figure for formula calculating\n");
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	r = calcSquareEq(a, b, c, &x1, &x2);
	switch (r)	{
	case 0:
		printf("Formula has one square root x = %lf\n", x1);
		break;
	case 1:
		printf("Formula has two square root x1 = %lf, x2 = %lf\n", x1);
		break;
	case -1:
		printf("Formula has not square roots\n");
		break;
	default:
		printf("Formula returned unpredictable value\n");
	}
}

