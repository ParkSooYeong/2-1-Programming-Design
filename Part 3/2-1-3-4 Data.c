/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 3 , Chapter 4 */

#include <stdio.h>

void main()
{
	printf("%s %d\n", "토성", 1426980000);
	printf("%s %d\n", "천왕성", 2870000000);
	printf("%s %d\n", "해왕성", 4497070000);
	printf("%s %d\n", "명왕성", 5913520000);

	printf("\n");

	printf("%s %d\n", "토성", 1426980000);
	printf("%s %f\n", "천왕성", 2870000000.);
	printf("%s %f\n", "해왕성", 4497070000.);
	printf("%s %f\n", "명왕성", 5913520000.);

	printf("\n");

	int a, b, c;
	a = 3;
	b = 4;
	c = a * b;
	printf("%d\n", c);

	printf("\n");

	int d = 3, e = 4, f;
	f = d * e;
	printf("%d\n", f);

	printf("\n");

	double x = 3.4, y = 4.3;
	printf("%.2f\n", x + y);
	printf("%.2f\n", x - y);
	printf("%.2f\n", x * y);
	printf("%.2f\n", x / y);

	printf("\n");

	printf("%.1f + %.1f = %.2f\n", x, y, x + y);
	printf("%.1f - %.1f = %.2f\n", x, y, x - y);
	printf("%.1f * %.1f = %.2f\n", x, y, x * y);
	printf("%.1f / %.1f = %.2f\n", x, y, x / y);

	printf("\n");

	printf("%.1f + %.1f = %6.2f\n", x, y, x + y);
	printf("%.1f - %.1f = %6.2f\n", x, y, x - y);
	printf("%.1f * %.1f = %6.2f\n", x, y, x * y);
	printf("%.1f / %.1f = %6.2f\n", x, y, x / y);

	printf("\n");

	char ch1 = 'A';
	printf("ch1의 문자값 %c\n", ch1);

	printf("\n");

	char ch2 = 'A', ch3 = 66;
	printf("ch2의 값 %c\n", ch2);
	printf("ch2의 정수값 %d\n", ch2);
	printf("ch3의 값 %c\n", ch3);
	printf("ch3의 정수값 %d\n", ch3);

	printf("\n");
}
