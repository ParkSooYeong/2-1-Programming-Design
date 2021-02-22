/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 9 , Chapter 18 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error
#define EQ ==
#define PI 3.141592
#define START "���α׷��� �����մϴ�."
#define END "���α׷��� �����մϴ�."
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
	printf("�Է��� ���ڿ��� ���̸�\n");
	printf("byte���� �Է��ϰ� Enter>");
	scanf("%d", &size);
	ptr = (char*)malloc(size + 1);
	printf("%d���� ���ڿ���\n", size);
	printf("������� �Է��ϰ� Enter>");
	scanf("%s", ptr);
	printf("�Էµ� ���ڿ� : %s\n", ptr);
	free(ptr);

	printf("\n");

	struct person p;
	p.name = (char*)malloc(sizeof(char) * 20);
	p.phone_num = (char*)malloc(sizeof(char) * 14);
	printf("�̸� �Է� >");
	scanf("%s", p.name);
	printf("�޴��� �Է� >");
	scanf("%s", p.phone_num);
	printf("���Ҹ� �Է� >");
	scanf("%d", &p.bell_num);
	printf("�̸� : %s\n", p.name);
	printf("�޴��� : %s\n", p.phone_num);
	printf("���Ҹ� : %d\n", p.bell_num);

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
	printf("0�� �ƴ� �������� ���̸� �Է��ϰ� Enter : ");
	scanf("%lf", &radius);
	if (radius EQ 0)
	{
		printf("%s\n", END);
		exit(0);
	}
	printf("���� �ѷ��� %lf �Դϴ�.\n", 2 * PI * radius);
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

	printf("�����ϵ� ���� : %s\n", __FILE__);
	printf("�����ϵ� ��¥ : %s\n", __DATE__);
	printf("�����ϵ� ���� : %s\n", __TIME__);
	printf("������ line : %d\n", __LINE__);

	printf("\n");

#if (LEVEL>1)
	printf("�������� ���α׷�\n");
#else
	printf("�ʺ��ڿ� ���α׷�\n");
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
	printf("�������� ���α׷�\n");
#else
	printf("�ʺ��ڿ� ���α׷�\n");
#endif

	printf("\n");

	char *ptr1;
	int size1;
	printf("�Է��� ���ڿ��� ���̸�\n");
	printf("byte���� �Է��ϰ� Enter>");
	scanf("%d", &size1);
	ptr1 = (char*)malloc(size1 + 1);
	printf("%d���� ���ڿ���\n", size1);
	printf("������� �Է��ϰ� Enter>");
	scanf("%d", ptr1);
	printf("�Էµ� ���ڿ� : %s\n", ptr1);
	free(ptr1);
	system("pause");
	return 0;
}
