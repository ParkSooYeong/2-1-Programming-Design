/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 4 , Chapter 8 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	printf("�й� : 123456789	�̸� : �ڼ���\n");
	printf("�й� : 123456789	�̸� : �ڼ���\n");
	printf("�й� : 123456789	�̸� : �ڼ���\n");
	printf("�й� : 123456789	�̸� : �ڼ���\n");
	printf("�й� : 123456789	�̸� : �ڼ���\n");

	printf("\n");

	int i;
	for (i = 1; i <= 5; i += 1)
	{
		printf("�й� : 123456789	�̸� : �ڼ���\n");
	}

	printf("\n");

	for (i = 1; i <= 5; i += 1)
	{
		printf("%d) �̸� : �ڼ���\n", i);
	}

	printf("\n");

	for (i = 1; i <= 10; i += 2)
	{
		printf("%d) �̸� : �ڼ���\n", i);
	}

	printf("\n");

	for (i = 1; i <= 15; i += 3)
	{
		printf("%d) �̸� : �ڼ���\n", i);
	}

	printf("\n");

	for (i = 6; i <= 10; i += 1)
	{
		printf("%d) �̸� : �ڼ���\n", i);
	}

	printf("\n");

	for (int i = 1; i <= 10; i += 1)
	{
		printf("%d", i);
	}

	printf("\n");

	for (int i = 10; i >= 1; i -= 1)
	{
		printf("%d", i);
	}

	printf("\n");

	for (double i = 0; i <= 0.5; i += 0.1)
	{
		printf("%.1f\n", i);
	}

	printf("\n");

	for (double i = 0.5; i >= 0; i -= 0.1)
	{
		printf("%.1f\n", i);
	}

	printf("\n");

	for (int i = 1; i <= 5; i += 1)
	{
		printf("%d) �̸� : �ڼ���\n", i);
		printf("--------------------\n");
	}

	printf("\n");

	int j = 1;
	while (j != 0)
	{
		printf("0�� �Է��ϸ� �ݺ��� �ߴܵ�\n");
		printf("���� �Է� �� Enter>");
		scanf("%d", &j);
	}

	printf("\n");

	while (j <= 10)
	{
		printf("%d ", j);
		j += 2;
	}

	printf("\n");

	for (j = 1; j <= 10; j += 2)
	{
		printf("%d ", j);
	}

	printf("\n\n");

	do
	{
		printf("0�� �Է��ϸ� ������\n");
		printf("���� �Է� �� Enter>");
		scanf("%d", &i);
	} while (i != 0);

	printf("\n");

	while (j != 0)
	{
		printf("0�� �Է��ϸ� ������\n");
		printf("���� �Է� �� Enter>");
		scanf("%d", &j);
	}

	printf("\n");

	int n;
	printf("1���� n������ �������\n");
	printf("���� n �Է� �� Enter>");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 1)
	{
		printf("i = %d\n", i);
	}

	printf("\n");

	int sum = 0;
	printf("1���� n������ �� ���\n");
	printf("���� n �Է� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 1)
	{
		sum += i;
	}
	printf("1���� %d������ �� : %d\n", n, sum);

	printf("\n");

	sum = 1;
	printf("1���� n������ �� ���\n");
	printf("���� n �Է� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 1)
	{
		sum *= i;
	}
	printf("1���� %d������ �� : %d\n", n, sum);

	printf("\n");

	for (int i = 1; i <= 3; i += 1)
	{
		printf("AAA\n");
	}

	printf("\n");

	for (int j = 1; j <= 3; j += 1)
	{
		printf("A");
	}

	printf("\n\n");

	for (int i = 1; i <= 3; i += 1)
	{
		for (int j = 1; j <= 3; j += 1)
		{
			printf("A");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d\n", 1, i, 1 * i);
	}

	printf("\n");

	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d\n", 1, i, 1 * i);
	}
	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d\n", 2, i, 2 * i);
	}

	printf("\n");

	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d\n", 1, i, 1 * i);
	}
	printf("\n");
	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d\n", 2, i, 2 * i);
	}

	printf("\n");

	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d ", 1, i, 1 * i);
	}
	printf("\n");
	for (i = 1; i <= 9; i = i + 1)
	{
		printf("%d * %d = %d ", 2, i, 2 * i);
	}

	printf("\n\n");

	for (j = 1; j <= 9; j += 1)
	{
		for (i = 1; i <= 9; i += 1)
		{
			printf("%d * %d = %d ", 1, i, 1 * i);
		}
		printf("\n");
	}

	printf("\n");

	for (j = 1; j <= 9; j += 1)
	{
		for (i = 1; i <= 9; i += 1)
		{
			printf("%d * %d = %2d ", j, i, j * i);
		}
		printf("\n");
	}

	printf("\n");

	for (j = 1; j <= 9; j += 1)
	{
		for (i = 1; i <= 9; i += 1)
		{
			printf("%d * %d = %2d ", i, j, j * i);
		}
		printf("\n");
	}

	printf("\n");

	i = 4;
	for (; i <= 10; i += 2)
	{
		printf("i = %d\n", i);
	}

	printf("\n");

	for (int i = 4; i <= 10; )
	{
		printf("i = %d\n", i);
		i += 2;
	}

	printf("\n");

	for (int i = 0, j = 2; i <= 10, j <= 10; i += 2, j += 1)
	{
		printf("i = %2d j = %2d\n", i, j);
	}

	printf("\n");

	for (int i = 0, j = 2; i <= 10 && j <= 10; i += 2, j += 1)
	{
		printf("i = %2d j = %2d\n", i, j);
	}

	printf("\n");

	sum = 0;
	for (int x1 = 50, x2 = 100; sum <= 0; x1 += 4, x2 -= 6)
	{
		sum = 2 * x1 - 4 * x2 + 10;
		printf("x1 = %d , x2 = %d , sum = %d\n", x1, x2, sum);
	}
}
