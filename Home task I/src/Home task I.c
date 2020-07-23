/*
 ============================================================================
 Name        : Home task I
 Author      : Vyacheslav Tarakanov
 Version     : v1.0
 Copyright   : Belongs only to me
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()	{

	//Task #1
	printf("Task I: \n");
	printf("Hello world \n");

	printf("\n");//Task #2
	printf("Task II: \n");
	int input;
	printf("Insert random figure: ");
	scanf("%d", &input);
	printf("Inserted is: %d\n", input);
	printf("Squared is : %d\n", input*input);

	printf("\n");//Task #3
	printf("Task III: \n");
	float Uo, Ui, R1, R2, R3;
	printf("Ui= ");
	scanf("%f", &Ui);
	printf("R1= ");
	scanf("%f", &R1);
	printf("R2= ");
	scanf("%f", &R2);
	printf("R3= ");
	scanf("%f", &R3);
	Uo=Ui*(R1/(R2+R1));
	printf("U0 = %.5f ", Uo);

	return 0;
}
