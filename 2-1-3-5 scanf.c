/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 3 , Chapter 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	int a, b;
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf("%d", &a);
	printf("10�� ������ �Է��ϰ� Enter>");
	scanf("%d", &b);
	printf("a + b = %d\n", a + b);

	printf("\n");

	int c, d;
	printf("8�� ������ �Է��ϰ� Enter>");
	scanf("%o", &c);
	printf("8�� ������ �Է��ϰ� Enter>");
	scanf("%o", &d);
	printf("���� c��(8����) : %o\n", c);
	printf("���� c��(10����) : %d\n", c);
	printf("���� d��(8����) : %o\n", d);
	printf("���� d��(10����) : %d\n", d);
	printf("c + d (8����) = %o\n", c + d);
	printf("c + d (10����) = %d\n", c + d);

	printf("\n");

	int e, f;
	printf("16�� ������ �Է��ϰ� Enter>");
	scanf("%x", &e);
	printf("16�� ������ �Է��ϰ� Enter>");
	scanf("%x", &f);
	printf("���� e��(8����) : %o\n", e);
	printf("���� e��(10����) : %d\n", e);
	printf("���� e��(16����) : %x\n", e);
	printf("���� f��(8����) : %o\n", f);
	printf("���� f��(10����) : %d\n", f);
	printf("���� f��(16����) : %x\n", f);
	printf("e + f (8����) = %o\n", e + f);
	printf("e + f (10����) = %d\n", e + f);
	printf("e + f (16����) = %x\n", e + f);

	printf("\n");

	double x, y;
	printf("�Ǽ��� �Է��ϰ� Enter>");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��ϰ� Enter>");
	scanf("%lf", &y);
	printf("x * y = %f\n", x * y);
	printf("x / y = %f\n", x / y);
	printf("x * y = %lf\n", x * y);
	printf("x * y = %lf\n", x / y);

	printf("\n");

	char ch1;
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch1);
	printf("�Էµ� ���� %c\n", ch1);

	printf("\n");

	char ch2, ch3;
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch2);
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch3);
	printf("�Էµ� ���� %c, %c\n", ch2, ch3);

	printf("\n");

	char ch4, ch5;
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch4);
	fflush(stdin);
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch5);
	printf("�Էµ� ���� %c, %c\n", ch4, ch5);

	printf("\n");

	int g;
	double z;
	printf("������ �Ǽ��� �Է��ϰ� Enter>");
	scanf("%d %lf", &g, &z);
	printf("�Էµ� ���� : %d\n", g);
	printf("�Էµ� �Ǽ� : %f\n", z);
	
	printf("\n");

	double km, liter, result;
	printf("���� ����Ÿ��� �Է��ϰ� Enter�ϼ���. ");
	scanf("%lf", &km);
	printf("���� ����Ҹ𷮸� �Է��ϰ� Enter�ϼ���. ");
	scanf("%lf", &liter);
	result = km / liter;
	printf("���� ����� %f", result);
}
