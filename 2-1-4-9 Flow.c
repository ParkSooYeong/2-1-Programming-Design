/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 4 , Chapter 9 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	int i, n, sum = 0;
	printf("1���� n������ ���� ��\n");
	printf("���� n �Է� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 1)
	{
		sum += i;
		if (sum > 100)
		{
			break;
		}
	}
	printf("�� : %d , i = %d\n", sum, i);

	printf("\n");

	for (i = 1; i <= 10; i += 1)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}

	printf("\n");

	for (i = 1; i <= 10; i += 2)
	{
		printf("%d ", i);
	}

	printf("\n");

	for (i = 1; i <= 10; i += 2)
	{
		if (i % 2 == 0)
		{
			goto next;
		}
		printf("%d ", i);
	next:;
	}

	printf("\n");

	for (i = 1; i <= 10; i += 2)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
}
