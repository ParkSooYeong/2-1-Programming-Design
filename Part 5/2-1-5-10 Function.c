/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 5 , Chapter 10 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b);
int add(int n);
int fact(int n);
void call_1(int n);
void call_2(int n);
int call_3(int n);

void main()
{
	int i;
	printf("숫자 입력 후 Enter>");
	scanf("%d", &i);
	printf("%d의 절댓값 = %d\n", i, abs(i));

	printf("\n");

	printf("pow(10,3) = %.3f\n", pow(10., 3.));
	printf("pow(2,4) = %.3f\n", pow(2., 4.));

	printf("\n");

	printf("%f\n", sqrt((double)2));
	printf("%f\n", sqrt((double)9));

	printf("\n");

	for (int i = 1; i <= 5; i += 1)
	{
		printf("%d\n", rand());
	}

	printf("\n");

	srand(time(NULL));
	for (int i = 1; i <= 5; i += 1)
	{
		printf("%d\n", rand());
	}

	printf("\n");

	srand(time(NULL));
	for (int i = 1; i <= 10; i += 1)
	{
		printf("%d\n", rand() % 100 + 1);
	}

	printf("\n");

	int a1 = 5, a2 = 8;
	printf("a + b = %d\n", sum(a1, a2));

	printf("\n");

	int n;
	printf("정수 입력 후 Enter>");
	scanf("%d", &n);
	printf("1부터 %d까지의 합 : %d\n", n, add(n));

	printf("\n");

	printf("정수 입력 후 Enter>");
	scanf("%d", &n);
	printf("1부터 %d까지의 곱 : %d\n", n, fact(n));

	printf("\n");

	call_1(5);

	printf("\n");

	call_2(5);

	printf("\n");

	printf("%d\n", call_3(123));
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

int add(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + add(n - 1);
}

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * fact(n - 1);
}

void call_1(int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		printf("%d\n", n);
		call_1(n - 1);
	}
}

void call_2(int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		call_2(n - 1);
		printf("%d\n", n);
	}
}

int call_3(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return call_3(n / 10) + 1;
}
