/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 9 , Chapter 18 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error
#define EQ ==
#define PI 3.141592
#define START "프로그램을 시작합니다."
#define END "프로그램을 종료합니다."
#define SQUARE(x) x*x
#define SQUARE1(x) ((x)*(x))
#define LEVEL 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char *name;
	char *phone_num;
	int bell_num;
};

struct employee
{
	char name[20];
	int year;
	int pay;
};

int main(void)
{
	char *ptr;
	int size;
	printf("입력할 문자열의 길이를\n");
	printf("byte수로 입력하고 Enter>");
	scanf("%d", &size);
	ptr = (char*)malloc(size + 1);
	printf("%d개의 문자열을\n", size);
	printf("공백없이 입력하고 Enter>");
	scanf("%s", ptr);
	printf("입력된 문자열 : %s\n", ptr);
	free(ptr);

	printf("\n");

	struct person p;
	p.name = (char*)malloc(sizeof(char) * 20);
	p.phone_num = (char*)malloc(sizeof(char) * 14);
	printf("이름 입력 >");
	scanf("%s", p.name);
	printf("휴대폰 입력 >");
	scanf("%s", p.phone_num);
	printf("벨소리 입력 >");
	scanf("%d", &p.bell_num);
	printf("이름 : %s\n", p.name);
	printf("휴대폰 : %s\n", p.phone_num);
	printf("벨소리 : %d\n", p.bell_num);

	printf("\n");

	struct employee *p1;
	p1 = (struct employee*)malloc(sizeof(struct employee));
	strcpy(p1->name, "James Bond");
	p1->year = 1970;
	p1->pay = 5500;
	printf("name : %s\n", p1->name);
	printf("year : %d\n", p1->year);
	printf("pay : %d\n", p1->pay);
	free(p1);

	printf("\n");

	double radius;
	printf("%s\n", START);
	printf("0이 아닌 반지름의 길이를 입력하고 Enter : ");
	scanf("%lf", &radius);
	if (radius EQ 0)
	{
		printf("%s\n", END);
		exit(0);
	}
	printf("원의 둘레는 %lf 입니다.\n", 2 * PI * radius);
	printf("%s\n", END);

	printf("\n");

	printf("SQUARE(5) = %d\n", SQUARE(5));

	printf("\n");

	double x = 2, y = 5;
	printf("SQUARE(x+1) = %f\n", SQUARE(x + 1));
	printf("SQUARE(x+1) / SQUARE(y+1) = %f\n", SQUARE(x + 1) / SQUARE(y + 1));

	printf("\n");

	double x1 = 2, y1 = 5;
	printf("SQUARE1(x1+1) = %f\n", SQUARE1(x1 + 1));
	printf("SQUARE1(x1+1) / SQUARE1(y1+1) = %f\n", SQUARE1(x1 + 1) / SQUARE1(y1 + 1));

	printf("\n");

	printf("컴파일된 파일 : %s\n", __FILE__);
	printf("컴파일된 날짜 : %s\n", __DATE__);
	printf("컴파일된 파일 : %s\n", __TIME__);
	printf("현재의 line : %d\n", __LINE__);

	printf("\n");

#if (LEVEL>1)
	printf("전문가용 프로그램\n");
#else
	printf("초보자용 프로그램\n");
#endif

	printf("\n");

/* #if LEVEL == 1
#include "novice.h"
#elif LEVEL == 2
#include "middle.h"
#elif LEVEL == 3
#include "expert.h"
#else
#include "general.h"
#endif

	printf("\n"); */

#ifdef LEVEL
	printf("전문가용 프로그램\n");
#else
	printf("초보자용 프로그램\n");
#endif

	printf("\n");

	char *ptr1;
	int size1;
	printf("입력할 문자열의 길이를\n");
	printf("byte수로 입력하고 Enter>");
	scanf("%d", &size1);
	ptr1 = (char*)malloc(size1 + 1);
	printf("%d개의 문자열을\n", size1);
	printf("공백없이 입력하고 Enter>");
	scanf("%d", ptr1);
	printf("입력된 문자열 : %s\n", ptr1);
	free(ptr1);
	system("pause");
	return 0;
}
