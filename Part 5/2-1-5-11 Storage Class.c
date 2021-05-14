/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 5 , Chapter 11 */

#include <stdio.h>

int add(int a);
int add1(int b);
void count(void);
void count1(void);

int a = 10;
static int gcnt;

int main(void)
{
	// int a = 10;
	printf("a = %d\n", a);
	printf("%d\n", add(a));
	printf("a = %d\n", a);

	printf("\n");

	printf("a = %d\n", a);
	printf("%d\n", add1(a));
	printf("a = %d\n", a);

	printf("\n");

	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	printf("1 + 2 + 3 + ... + 10 = %d\n", sum);

	printf("\n");

	for (int i = 1; i <= 3; i++)
	{
		count();
	}

	printf("\n");

	int i;
	for (i = 1; i <= 3; i++)
	{
		count1();
		gcnt += 1;
	}

	printf("\n");

	register i1 = 0;
	double sum1 = 0;
	for (i = i1; i1 <= 30000; i1++)
	{
		sum1 += i1;
	}
	printf("1 + 2 + ... + 29999 + 30000 = %lf\n", sum1);
	return 0;
}

int add(int a)
{
	a = a + 5;
	return a;
}

int add1(int b)
{
	b = b + 5;
	a = a + 5;
	return b;
}

void count(void)
{
	int acnt = 0;
	static int stcnt = 0;
	acnt += 1;
	stcnt += 1;
	printf("auto count = %d , static count = %d\n", acnt, stcnt);
}

void count1(void)
{
	static int stcnt;
	stcnt += 1;
	gcnt += 1;
	printf("local count = %d , global count = %d\n", stcnt, gcnt);
}
