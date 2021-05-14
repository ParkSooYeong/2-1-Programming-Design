/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 5 , Chapter 12 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

#define PI 3.14159265

void gotoxy(int x, int y);

double rad2deg(double radian);
double deg2rad(double degree);

int main(void)
{
	char ch1 = '1', ch2 = 'A';
	if (isalpha(ch2))
	{
		printf("%c는 문자입니다.\n", ch2);
	}
	if (isdigit(ch1))
	{
		printf("%c는 숫자입니다.\n", ch1);
	}
	printf("소문자 %c\n", tolower(ch2));

	printf("\n");

	printf("int형 숫자 : %d\n", atoi("47476"));
	printf("long형 숫자 : %ld\n", atol("98765432"));
	printf("double형 숫자 : %lf\n", atof("3456.7634"));

	printf("\n");

	double x = 123.54, y = -123.54;
	printf("ceil(%f) = %f\n", x, ceil(x));
	printf("floor(%f) = %f\n", x, floor(x));
	printf("ceil(%f) = %f\n", y, ceil(y));
	printf("floor(%f) = %f\n", y, floor(y));

	printf("\n");

	double num1 = 2.0;
	double num2 = 4.0;
	double num3 = 8.0;
	double num4 = 9.0;
	double num5 = 16.0;
	double mantissa;
	int expt;
	printf("지수함수 e^%.1f = %f\n", num1, exp(num1));
	printf("%.1f * 2^%.1f = %f\n", num2, num1, ldexp(num2, 2));
	mantissa = frexp(num3, &expt);
	printf("%.1f = %.1f * 2^%d\n", num3, mantissa, expt);
	printf("log(%.1f) = %f\n", num4, log(num4));
	printf("log10(%.1f) = %f\n", num4, log10(num4));
	printf("%.1f^%.1f = %f\n", num1, num2, pow(num1, num2));
	printf("square root(%.1f) = %f\n", num5, sqrt(num5));

	printf("\n");

	div_t ix;
	ldiv_t lx;
	double num = 367.568, frct, intg;
	double x1 = 7.0, y1 = 2.0;
	ix = div(10, 4);
	printf("10/4의 결과 몫 : %d , 나머지 : %d\n", ix.quot, ix.rem);
	lx = ldiv(100L, 30L);
	printf("100/30의 결과 몫 : %ld , 나머지 : %ld\n", lx.quot, lx.rem);
	frct = modf(num, &intg);
	printf("%lf의 정수 : %lf , 실수 : %lf\n", num, intg, frct);
	printf("%lf / %lf의 나머지 : %lf\n", x1, y1, fmod(x1, y1));

	printf("\n");

	double degree = 90;
	double radian = PI / 2;
	printf("각도 %f의 라디안 = %f\n", degree, deg2rad(degree));
	printf("라디안 %f의 각도 = %f\n", radian, rad2deg(radian));

	printf("\n");

	int n;
	double r, s, c;
	for (n = 0; n <= 90; n += 10)
	{
		r = (double)n * PI / 180;
		s = sin(r);
		c = cos(r);
		printf("sin(%2d) = %9.6f , cos(%2d) = %9.6f\n", n, s, n, c);
	}

	printf("\n");

	int i;
	for (i = 1; i <= 9; i++)
	{
		system("cls");
		printf("%d * %d = %d\n", 1, i, 1 * i);
		printf("아무키나 누르시오.\n");
		_getch();
	}

	printf("\n");

	int j;
	for (j = 1; j <= 9; j++)
	{
		system("cls");
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", j, i, j * i);
		}
		printf("아무키나 누르시오.\n");
		_getch();
	}

	printf("\n");

	system("cls");
	for (i = 1; i <= 9; i++)
	{
		gotoxy(i, i);
		printf("%d * %d = %d\n", 1, i, 1 * i);
	}
}

double rad2deg(double radian)
{
	return radian * 180 / PI;
}

double deg2rad(double degree)
{
	return degree * PI / 180;
}

void gotoxy(int x, int y)
{
	COORD Pos = x - 1, y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
