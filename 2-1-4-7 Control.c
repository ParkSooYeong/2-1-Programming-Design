/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 4 , Chapter 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	int grade;
	printf("���� ������ �Է��ϰ� Enter>");
	scanf("%d", &grade);
	if (grade > 60)
	{
		printf("���� �հ�!\n");
	}

	printf("\n");

	int grade1;
	printf("���� ������ �Է��ϰ� Enter>");
	scanf("%d", &grade1);
	if (grade1 > 60)
	{
		printf("���� �հ�!\n");
	}
	else
	{
		printf("���� ���հ�!\n");
	}

	printf("\n");

	int grade2;
	printf("���� ������ �Է��ϰ� Enter>");
	scanf("%d", &grade2);
	if (grade2 > 60)
	{
		printf("���� : %d\n", grade2);
		printf("�հ�! �����մϴ�.\n");
	}
	else
	{
		printf("���� ���հ�!\n");
		printf("�ٽ� �õ��غ�����.\n");
	}

	printf("\n");

	int value;
	printf("������ �Է��ϰ� Enter>");
	scanf("%d", &value);
	if (value > 0)
	{
		printf("����Դϴ�.\n");
	}
	else if (value < 0)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("0�Դϴ�.\n");
	}

	printf("\n");

	int button;
	printf("����(1~3)�� �Է��ϰ� Enter>");
	scanf("%d", &button);
	switch (button)
	{
	case 1:
		printf("��ũĿ��\n");
		break;
	case 2:
		printf("����Ŀ��\n");
		break;
	case 3:
		printf("��Ŀ��\n");
		break;
	}

	printf("\n");

	int button1;
	printf("����(1~5)�� �Է��ϰ� Enter>");
	scanf("%d", &button1);
	switch (button1)
	{
	case 1:
		printf("��ũĿ��\n");
		break;
	case 2:
		printf("����Ŀ��\n");
		break;
	case 3:
		printf("��Ŀ��\n");
		break;
	default:
		printf("���ھ�\n");
	}

	printf("\n");

	int grade3, grade4;
	printf("�ΰ��� ���������� �Է��ϰ� Enter>");
	scanf("%d %d", &grade3, &grade4);
	if (grade3 >= 60 && grade4 >= 60)
	{
		printf("���� �հ�!\n");
	}
	else
	{
		printf("���� ���հ�!\n");
	}

	printf("\n");

	char operand;
	int a = 3, b = 4;
	printf("������(+ - * / %)�� �Է��ϰ� Enter>");
	scanf("%c", &operand);
	switch (operand)
	{
	case '+':
		printf("a + b = %d\n", a + b);
		break;
	case '-':
		printf("a - b = %d\n", a - b);
		break;
	case '*':
		printf("a * b = %d\n", a * b);
		break;
	case '/':
		printf("a / b = %d\n", a / b);
		break;
	case '%':
		printf("a % b = %d\n", a % b);
		break;
	default:
		printf("����� �� �����ϴ�.");
	}
}
