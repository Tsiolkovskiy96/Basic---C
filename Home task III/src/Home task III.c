/*
 ============================================================================
 Name        : Home task III.c
 Author      : Vyacheslav Tarakanov
 Version     : v1.0
 Copyright   : Only to me
 Description : Home task III
 ============================================================================
 */

/*	Домашнее задание Урок№3


 	1)	Используя заголовочный файл <math.h>, описать функцию: int calcSquareEq(int a, int b, int c, double* x1, double* x2);
  		Которая будет решать квадратное уравнение вида a * x ** 2 + b * x + c = 0, и записывать корни этого уравнения в переменные,
 		адреса которых переданы в качестве указателей х1 и х2. Функция должна вернуть -1, если уравнение не имеет корней, 0, если у уравнения
 		есть один корень, и 1, если у уравнения два корня.

 	2)	Инициализировать массив из целых чисел, описать функцию, принимающую на вход этот массив. Функция должна вернуть ноль, если в массиве
 		нет нечётных чисел, в противном случае удвоить все нечётные числа в массиве и вернуть единицу. После выполнения функции, если массив был
 		изменён, вывести все числа из массива на экран.

 	3)	Опишите функцию asShortPrint(unsigned* a, int len); которая принимает массив из тридцатидвухразрядных чисел (типа unsigned int),
 		например, [0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545] и выводит его на экран шестнадцатиразрядными числами (типа unsigned short).
 		Для массива в примере вывод будет выглядеть следующим образом [0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1].
 		Решения такого рода широко применяются для расшифровывания данных из входящих потоков или логов цифровых систем в аппаратуре.

 */

#include <stdio.h>
#include <math.h>

//Supplementary

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

int oddDoubler(int* arr, int len)	{
	int changed = 0;
	for (int i = 0; i < len; ++i)	{
		if (arr[i] % 2 != 0)	{
			arr[i] *= 2;
			changed = 1;
		}
	}
	return changed;
}

void showArray(int* arr, int len)	{
	int i;
	for (i = 0; i < len; ++i)
		printf("%d", arr[i]);
	printf("\n");
}

void printAsShort(unsigned* a, int len)	{
	unsigned short* out = a;
	for (int i =0; i < len * 2; ++i)
		printf("%d", *(out + i));
}

int main(int argv, const char ** argc)	{

// *** Task 3.1 *** //

	int a, b, c;
	double x1, x2;
	int r;

	printf("Task 3.1\n\n");
	printf("Enter figure for formula calculating\n");
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

// *** Task 3.2 *** //

	printf("\n\nTask 3.2\n\n");
	printf("Multiply odd massive element: \n");
	const int ARR_SZ = 10;
	int arr[] = {0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545};
	printf("Initial massive:\n");
	showArray(arr, ARR_SZ);
	printf("Outcome:\n");
	if (oddDoubler(arr, ARR_SZ))
		showArray(arr, ARR_SZ);
	else
		printf("Massive doesn't contain odd figures\n");

// *** Task 3.3 *** //

	printf("\n\nTask 3.3\n\n");
	printf("Massive outcome in type of char:\n");
	printAsShort(arr, ARR_SZ);
	return 0;
}
























