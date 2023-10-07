// HW1012.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include<stdio.h>
#include<stdlib.h>
#include <iostream>

//init 2.21 
int square();
int circle();
int arrow();
int rhombus();

//init 2.23
int detect_maxmin();

//init 2.24
int odd_even();

//init 2.25
int printinit();

//init 2.26
int multiple();

//init 2.27
int pyramid();

//init 2.31
int num_square_cube();

//init 2.32
float bmi();

//init 2.33
float car();

int main()
{
	//2.21
	/*printf("Square : \n");
	square();
	printf("\nCircle :\n");
	circle();
	printf("\nArrow :\n");
	arrow();
	printf("\nRhombus :\n");
	rhombus();*/

	//2.23
	//detect_maxmin();

	//2.24
	//odd_even();

	//2.25
	//printinit();

	//2.26
	//multiple();

	//2.27
	//pyramid();

	//2.31
	//num_square_cube();

	//2.32
	//bmi();

	//2.33
	car();

	system("pause");
	return 0;
}

//Square
int square() {
	for (int i = 0; i < 10; i++) {
		for (int r = 0; r < 10; r++) {
			if (i == 0 || i == 9 || r == 0 || r == 9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf(" \n");
	}
	return 0;
}

//Square
int circle() {
	for (int y = 0; y <= 9; y++) {
		for (int x = 0; x <= 9; x++) {
			if (x == 0 && (y <= 6 && y >= 2) || x == 8 && (y <= 6 && y >= 2)) {
				printf("*");
			}
			else if (y == 0 && (x <= 5 && x >= 3) || y == 8 && (x <= 5 && x >= 3)) {
				printf("*");
			}
			else if (y == 1 && (x == 1 || x == 7) || y == 7 && (x == 1 || x == 7)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

//Arrow
int arrow() {
	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 4; j++) {
			if ((i == 0 && j == 2) || (i == 1 && j <= 3 && j >= 1) || i == 2 || (i<=8&&i>=2&&j==2)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

//rhombus
int rhombus() {
	for (int i = 0; i <= 8; i++) {
		for (int k = 0; k <= 8; k++) {
			switch (i) {
			case 0:
				if (k == 4) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;
			case 1:
				if (k == 3 || k == 5) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 2:
				if (k == 2 || k == 6) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;
			case 3:
				if (k == 1 || k == 7) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 4:
				if (k == 0 || k == 8) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 5:
				if (k == 1 || k == 7) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 6:
				if (k == 2 || k == 6) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 7:
				if (k == 3 || k == 5) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;

			case 8:
				if (k ==4) {
					printf("*");
				}
				else {
					printf(" ");
				}
				break;
			}
		}
		printf("\n");
		
	}
	return 0;
}

//Detect Max & min
int detect_maxmin() {
	int fst=0, snd=0, trd=0;

	printf("Input three Integers: ");
	scanf("%d%d%d",&fst,&snd,&trd);
	if (fst > snd) {
		if (fst > trd) {
			printf("Max: %d", fst);
			if (snd < trd) {
				printf("min: %d", snd);
			}
			else {
				printf("min: %d", trd);
			}
		}
		else {
			printf("Max: %d", trd);
			printf("min: %d", snd);
		}
	}
	else {
		if (snd > trd) {
			printf("Max: %d", snd);
			if (fst < trd) {
				printf("min: %d", fst);
			}
			else {
				printf("min: %d", trd);
			}
		}
		else {
			printf("Max: %d", trd);
			printf("min: %d", fst);
		}
	}
	return 0;
}

//Detect odd or even
int odd_even() {
	int input_int = 0;

	printf("Input an integer: ");
	scanf("%d", &input_int);
	if (input_int % 2 == 0) {
		printf("It's an Even Number \n");
	}
	else {
		printf("It's an Odd Number \n");
	}
	return 0;
}

//Print my initial: SHL
int printinit() {

	//S
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 8; j++) {
			if (i == 0 && j == 6  || i == 4 && j == 2 ) {
				printf("*");
			}
			else if (i <= 3 && i >= 1 && j % 4 == 0) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	//H
	for (int x = 0; x <= 4; x++) {
		for (int y = 0; y <= 8; y++) {
			if (y ==4 || x == 0 || x == 4) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	//L
	for (int x = 0; x <= 4; x++) {
		for (int y = 0; y <= 8; y++) {
			if (y == 0 || x == 0 ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

//Determine if 2nd is a factor if 1st
int multiple() {
	int fst = 0, snd = 0;

	printf("Input 2 Integers: ");
	scanf("%d%d", &fst, &snd);

	if (fst%snd == 0) {
		printf("Yes!!! First num is a multi of Second num");
	}
	else {
		printf("Nah~ First num is not a multi of Second num");
	}
	return 0;
}

//Print Pyramid w/ five printf & w/ one printf
int pyramid() {
	printf("Print w/ five printf :\n");
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");

	printf("Print w/ one printf :\n");
	for (int i = 1; i <= 5; i++) {
		for (int k = 1; k <= 5-i; k++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//Print Number Square Cube
int num_square_cube() {
	int arr[11] = {0, 1, 2, 3, 4, 5,6,7,8,9,10 };
	int i = 0;

	printf("Number: \n");
	for (i = 0; i <= 10; i++)
		printf("%d ", arr[i]);

	printf("\nSquare: \n");
	for (i = 0; i <= 10; i++)
		printf("%d ", arr[i] * arr[i]);

	printf("\nCube: \n");
	for (i = 0; i <= 10; i++)
		printf("%d ", arr[i] * arr[i]*arr[i]);

	printf("\n");

	return 0;
	return 0;
}

//BMI
float bmi() {
	float height = 0, weight = 0,result=0;
	printf("Input Height (m) and Weight (kg): \n");
	scanf("%f%f", &height, &weight);
	result = weight / (height*height);
	if (result < 18.5) {
		printf("Underweight");
	}
	else if (result >= 18.5 && result <= 24.9) {
		printf("Normal");
	}
	else if (result >= 25 && result <= 29.9) {
		printf("Overweight");
	}
	else if (result > 30) {
		printf("Obese");
	}
	else {
		printf("ERROR");
	}
	return 0;
}

//Car
float car() {
	int a = 0, b = 0, c = 0 ,d = 0, e = 0;
	printf("Input 1.Total Miles: 2.Gas cost per ml 3.Avg km per ml 4.Parking fee 5.Total Toll fee \n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("Total cost for today: %d", (a/c)*b + d + e);
	return 0;
}