/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 3 , Chapter 5 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	int a, b;
	printf("10진 정수를 입력하고 Enter>");
	scanf("%d", &a);
	printf("10진 정수를 입력하고 Enter>");
	scanf("%d", &b);
	printf("a + b = %d\n", a + b);

	printf("\n");

	int c, d;
	printf("8진 정수를 입력하고 Enter>");
	scanf("%o", &c);
	printf("8진 정수를 입력하고 Enter>");
	scanf("%o", &d);
	printf("변수 c값(8진수) : %o\n", c);
	printf("변수 c값(10진수) : %d\n", c);
	printf("변수 d값(8진수) : %o\n", d);
	printf("변수 d값(10진수) : %d\n", d);
	printf("c + d (8진수) = %o\n", c + d);
	printf("c + d (10진수) = %d\n", c + d);

	printf("\n");

	int e, f;
	printf("16진 정수를 입력하고 Enter>");
	scanf("%x", &e);
	printf("16진 정수를 입력하고 Enter>");
	scanf("%x", &f);
	printf("변수 e값(8진수) : %o\n", e);
	printf("변수 e값(10진수) : %d\n", e);
	printf("변수 e값(16진수) : %x\n", e);
	printf("변수 f값(8진수) : %o\n", f);
	printf("변수 f값(10진수) : %d\n", f);
	printf("변수 f값(16진수) : %x\n", f);
	printf("e + f (8진수) = %o\n", e + f);
	printf("e + f (10진수) = %d\n", e + f);
	printf("e + f (16진수) = %x\n", e + f);

	printf("\n");

	double x, y;
	printf("실수를 입력하고 Enter>");
	scanf("%lf", &x);
	printf("실수를 입력하고 Enter>");
	scanf("%lf", &y);
	printf("x * y = %f\n", x * y);
	printf("x / y = %f\n", x / y);
	printf("x * y = %lf\n", x * y);
	printf("x * y = %lf\n", x / y);

	printf("\n");

	char ch1;
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch1);
	printf("입력된 문자 %c\n", ch1);

	printf("\n");

	char ch2, ch3;
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch2);
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch3);
	printf("입력된 문자 %c, %c\n", ch2, ch3);

	printf("\n");

	char ch4, ch5;
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch4);
	fflush(stdin);
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch5);
	printf("입력된 문자 %c, %c\n", ch4, ch5);

	printf("\n");

	int g;
	double z;
	printf("정수와 실수를 입력하고 Enter>");
	scanf("%d %lf", &g, &z);
	printf("입력된 정수 : %d\n", g);
	printf("입력된 실수 : %f\n", z);
	
	printf("\n");

	double km, liter, result;
	printf("차의 주행거리를 입력하고 Enter하세요. ");
	scanf("%lf", &km);
	printf("차의 연료소모량를 입력하고 Enter하세요. ");
	scanf("%lf", &liter);
	result = km / liter;
	printf("계산된 연비는 %f", result);
}
