/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 4 , Chapter 7 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	int grade;
	printf("성적 점수를 입력하고 Enter>");
	scanf("%d", &grade);
	if (grade > 60)
	{
		printf("시험 합격!\n");
	}

	printf("\n");

	int grade1;
	printf("성적 점수를 입력하고 Enter>");
	scanf("%d", &grade1);
	if (grade1 > 60)
	{
		printf("시험 합격!\n");
	}
	else
	{
		printf("시험 불합격!\n");
	}

	printf("\n");

	int grade2;
	printf("성적 점수를 입력하고 Enter>");
	scanf("%d", &grade2);
	if (grade2 > 60)
	{
		printf("점수 : %d\n", grade2);
		printf("합격! 축하합니다.\n");
	}
	else
	{
		printf("시험 불합격!\n");
		printf("다시 시도해보세요.\n");
	}

	printf("\n");

	int value;
	printf("정수를 입력하고 Enter>");
	scanf("%d", &value);
	if (value > 0)
	{
		printf("양수입니다.\n");
	}
	else if (value < 0)
	{
		printf("음수입니다.\n");
	}
	else
	{
		printf("0입니다.\n");
	}

	printf("\n");

	int button;
	printf("숫자(1~3)를 입력하고 Enter>");
	scanf("%d", &button);
	switch (button)
	{
	case 1:
		printf("밀크커피\n");
		break;
	case 2:
		printf("프림커피\n");
		break;
	case 3:
		printf("블랙커피\n");
		break;
	}

	printf("\n");

	int button1;
	printf("숫자(1~5)를 입력하고 Enter>");
	scanf("%d", &button1);
	switch (button1)
	{
	case 1:
		printf("밀크커피\n");
		break;
	case 2:
		printf("프림커피\n");
		break;
	case 3:
		printf("블랙커피\n");
		break;
	default:
		printf("코코아\n");
	}

	printf("\n");

	int grade3, grade4;
	printf("두개의 성적점수를 입력하고 Enter>");
	scanf("%d %d", &grade3, &grade4);
	if (grade3 >= 60 && grade4 >= 60)
	{
		printf("시험 합격!\n");
	}
	else
	{
		printf("시험 불합격!\n");
	}

	printf("\n");

	char operand;
	int a = 3, b = 4;
	printf("연산자(+ - * / %)를 입력하고 Enter>");
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
		printf("계산할 수 없습니다.");
	}
}
