/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 6 , Chapter 13 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void print_array(char a[]);
int sum_mat(int a1[][3], int n);

int main(void)
{
	int n[] = { 1,2,3,4,5 }, i;
	for (i = 0; i < 5; i += 1)
	{
		printf("%d : %d\n", i, n[i]);
	}

	printf("\n");

	int n1[5], i1;
	for (i1 = 0; i1 <= 4; i1 += 1)
	{
		n1[i1] = i1 + 1;
		printf("%d : %d\n", i1, n1[i1]);
	}

	printf("\n");

	int korea[4], i2, sum = 0;
	for (i2 = 0; i2 < 4; i2 += 1)
	{
		printf("%d번째 득점수 입력 : ", i2);
		scanf("%d", &korea[i2]);
		sum += korea[i2];
		printf("입력된 데이터 : %d\n", korea[i2]);
	}
	printf("합계 : %d\n", sum);

	printf("\n");

	char str[10];
	printf("문자열 입력 후 Enter>");
	scanf("%s", str);
	printf("입력된 문자열 : %s\n", str);
	printf("str[3] = %c\n", str[3]);

	printf("\n");

	int num[3], i3;
	for (i3 = 0; i3 < 3; i3 += 1)
	{
		scanf("%d", &num[i3]);
	}
	for (i3 = 0; i3 < 3; i3 += 1)
	{
		printf("%d\n", num[i3]);
	}

	printf("\n");

	char str1[20];
	printf("문자열을 입력하고 Enter>");
	gets(str1);
	printf("입력된 문자열 : %s\n", str1);

	char str2[20] = "program";
	puts("C 언어");
	puts(str2);

	printf("\n");

	int mat[3][3] = { {3,8,6},{4,1,7},{5,2,9} };
	int j, k;
	for (j = 0; j <= 2; j++)
	{
		for (k = 0; k <= 2; k++)
		{
			printf("mat[%d][%d] = %d ", j, k, mat[j][k]);
		}
		printf("\n");
	}

	printf("\n");

	/* int ma[3][3] = { {3, 8, 6}, {4, 1, 7}, {5, 2, 9} };
	int mb[3][3] = { {1, 4, 9}, {6, 5, 8}, {2, 3, 7} };
	int sum1[3][3] = { 0 };
	int i, j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++);
		{
			sum1[i][j] = ma[i][j] + mb[i][j];
			printf("sum1[%d][%d] = %2d ", i, j, sum1[i][j]);
		}
		printf("\n");
	}
	return 0;

	printf("\n"); */

	char nation[3][9] = { "Korea","Japan","China" };
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", nation[i]);;
	}

	printf("\n");

	char str3[10];
	printf("문자열을 입력 : ");
	scanf("%s", str3);
	print_array(str3);

	printf("\n");

	int ma1[3][3] = { {3,8,6},
					  {4,1,7},
					  {5,2,9} };
	int sum2;
	sum2 = sum_mat(ma1, 3);
	printf("행렬요소의 합 : %d\n", sum2);
}

void print_array(char a[])
{
	printf("입력된 문자열 : ");
	printf("%s\n", a);
}

int sum_mat(int a1[][3], int n)
{
	int j1, k1, total = 0;
	for (j1 = 0; j1 < n; j1++)
	{
		for (k1 = 0; k1 < n; k1++)
		{
			total += a1[j1][k1];
		}
	}
	return total;
}
