/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 3 , Chapter 6 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>

void main()
{
	double x = 2.5, y = 5.0;
	printf("x + y = %7.2f\n", x + y);
	printf("x - y = %7.2f\n", x - y);
	printf("x * y = %7.2f\n", x * y);
	printf("x / y = %7.2f\n", x / y);

	printf("\n");

	int a = 5, b = 3;
	double z = 2.5;
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("z / b = %f\n", z / b);

	printf("\n");

	int k;
	printf("세 자리 10진 정수 입력 후 Enter>");
	scanf("%d", &k);
	printf("  1의 자리수 %d\n", k % 10);
	k = k / 10;
	printf(" 10의 자리수 %d\n", k % 10);
	k = k / 10;
	printf("100의 자리수 %d\n", k % 10);

	printf("\n");

	int c = 10, d = 20;
	printf("c = %d\n", c++);
	printf("c = %d\n", ++c);
	printf("d = %d\n", d--);
	printf("d = %d\n", --d);

	printf("\n");

	int e, f;
	e = f = 2;
	e += f;
	f *= e;
	printf("e = %d , f = %d\n", e, f);

	printf("\n");

	int g = 10, h = 5;
	g = g + h * g - h / g;
	h = (-g + h) % g + h - g;
	printf("g = %d , h = %d\n", g, h);

	printf("\n");

	double j = 36.87;
	int l;
	l = j;
	j = j - l;
	printf("정수부분은 %d\n", l);
	printf("소수부분은 %f\n", j);

	printf("\n");

	int i = 4, m = 8, n;
	n = (i > m) ? i - m : m - i;
	printf("n = %d\n", n);

	printf("\n");

	int o = 4, p = 8;
	(o > p) ? printf("o > p\n") : printf("o <= p\n");

	printf("\n");

	unsigned char q = 16, r = 32;
	printf("q << 1 = %d\n", q << 1);
	printf("r >> 1 = %d\n", r >> 1);

	printf("\n");

	double s = 3.14159;
	int t = 10;
	t = (int)(t + s);
	printf("t = %d\n", t);
	printf("int s = %d\n", (int)s);
	printf("double s = %f\n", s);

	printf("\n");

	printf("int size : %d\n", sizeof(int));
	printf("double size : %d\n", sizeof(double));
	printf("(3 + 5.2) size : %d\n", sizeof(3 + 5.2));
}
