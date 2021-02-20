/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 7 , Chapter 15 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2-1-7-15 user.h"

struct user
{
	char name[20];
	char phone[14];
	int quick;
};

struct student
{
	char name[10];
	int id;
};

struct pupil
{
	int id_num;
	char label[10];
};

struct person
{
	char name[20];
	int id;
};

struct person1
{
	char *name;
	int age;
	struct phone
	{
		char *home_num;
		char *mobile_num;
	} number;
};

struct phone1
{
	char *home_num;
	char *mobile_num;
};

struct person2
{
	char *name;
	int age;
	struct phone number;
};

struct person3
{
	char name[10];
	int age;
	struct phone2
	{
		char home_num[14];
		char mobile_num[14];
	} number;
};

struct node
{
	char data;
	struct node *link;
};

struct node1
{
	char data[10];
	struct node1 *link;
};

struct person input_st(void);
struct node1 *creat(void);

void display_st(struct user data);
void display_st1(struct user *data);
void change_st(struct user *data);
void display_st2(struct user *s, int n);
void display_st3(struct person d11);
void input_name(struct node1 *ptr);

int main(void)
{
	struct user d = { "박수영",
					  "012-345-6789",
					  1 };
	printf("name : %s\n", d.name);
	printf("phone : %s\n", d.phone);
	printf("quick : %d\n", d.quick);

	printf("\n");

	struct user d1;
	strcpy(d1.name, "박수영");
	strcpy(d1.phone, "012-345-6789");
	d1.quick = 1;
	printf("name : %s\n", d1.name);
	printf("phone : %s\n", d1.phone);
	printf("quick : %d\n", d1.quick);

	printf("\n");

	struct user d2;
	printf("name 입력 : ");
	scanf("%s", d2.name);
	printf("phone 입력 : ");
	scanf("%s", d2.phone);
	printf("quick 입력 : ");
	scanf("%d", &d2.quick);
	printf("name : %s\n", d2.name);
	printf("phone : %s\n", d2.phone);
	printf("quick : %d\n", d2.quick);

	printf("\n");

	struct user d3, d4 = { "박수영",
						   "012-345-6789",
						   1 };
	d3 = d4;
	printf("name : %s\n", d3.name);
	printf("phone : %s\n", d3.phone);
	printf("quick : %d\n", d3.quick);

	printf("\n");

	struct student s1 = { "Park",1998 };
	struct pupil p1 = { 2020,"SY" };
	int temp;
	printf("s1.id	  : %d\n", s1.id);
	printf("p1.id_num : %d\n", p1.id_num);
	temp = s1.id;
	s1.id = p1.id_num;
	p1.id_num = temp;
	printf("s1.id	  : %d\n", s1.id);
	printf("p1.id_num : %d\n", p1.id_num);

	printf("\n");

	struct user d5[2] = { {"박수영","012-345-6789",0},
						  {"박수영2","987-654-3210",1} };
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("d5[%d].name : %s\n", i, d5[i].name);
		printf("d5[%d].phone : %s\n", i, d5[i].phone);
		printf("d5[%d].quick : %d\n", i, d5[i].quick);
		printf("\n");
	}

	printf("\n");

	struct user d6[2] = { {"박수영","012-345-6789",0},
						  {"박수영2","987-654-3210",1} };
	struct user *pt;
	int i1;
	pt = d6;
	for (i1 = 0; i1 < 2; i1++)
	{
		printf("name : %s\n", (pt + i1)->name);
		printf("phone : %s\n", (pt + i1)->phone);
		printf("quick : %d\n", (pt + i1)->quick);
		printf("\n");
	}

	printf("\n");

	printf("user size : %d\n", sizeof(struct user));

	printf("\n");

	struct user d7[2] = { {"박수영","012-345-6789",0},
						  {"박수영2","987-654-3210",1} };
	struct user *pt1;
	pt1 = d7;
	printf("pt1의 주소 : %u\n", &pt1);
	printf("pt1의 값 : %u\n", pt1);
	printf("d7[1]의 주소 : %u\n", &d7[1]);

	printf("\n");

	struct user d8 = { "박수영", "012-345-6789", 1 };
	display_st(d8);

	printf("\n");

	struct user d9 = { "박수영", "012-345-6789", 1 };
	display_st1(&d9);
	change_st(&d9);
	display_st1(&d9);

	printf("\n");

	struct user d10[2] = { {"박수영","012-345-6789",0},
						   {"박수영2","987-654-3210",1} };
	display_st2(d10, 2);

	printf("\n");

	struct person d11;
	d11 = input_st();
	display_st3(d11);

	printf("\n");

	struct user d12[2] = { {"박수영","012-345-6789",0},
						   {"박수영2","987-654-3210",1} };
	struct user *pt2;
	int i3;
	pt2 = d12;
	for (i3 = 0; i3 < 2; i3++)
	{
		printf("name : %s\n", (pt2 + i3)->name);
		printf("phone : %s\n", (pt2 + i3)->phone);
		printf("quick : %d\n", (pt2 + i3)->quick);
		printf("\n");
	}

	printf("\n");

	struct person1 man = { "sooyoung",24,{"012-345-6789","987-654-3210"} };
	printf("name : %s\n", man.name);
	printf("age : %d\n", man.age);
	printf("home : %s\n", man.number.home_num);
	printf("mobile : %s\n", man.number.mobile_num);

	printf("\n");

	struct person2 man1 = { "sooyoung",24,{"012-345-6789","987-654-3210"} };
	printf("name : %s\n", man1.name);
	printf("age : %d\n", man1.age);
	printf("home : %s\n", man1.number.home_num);
	printf("mobile : %s\n", man1.number.mobile_num);

	printf("\n");

	struct person3 man2[3];
	printf("이름을 입력하고 Enter : ");
	scanf("%s", man2[0].name);
	printf("나이를 입력하고 Enter : ");
	scanf("%d", man2[0].age);
	printf("집전화를 입력하고 Enter : ");
	scanf("%s", man2[0].number.home_num);
	printf("휴대폰번호를 입력하고 Enter : ");
	scanf("%s", man2[0].number.mobile_num);
	printf("\n");
	printf("name : %s\n", man2[0].name);
	printf("age : %d\n", man2[0].age);
	printf("home : %s\n", man2[0].number.home_num);
	printf("mobile : %s\n", man2[0].number.mobile_num);

	printf("\n");

	struct person1 man3, *pt3;
	pt3 = &man3;
	pt3->name = "sooyoung";
	pt3->age = 24;
	pt3->number.home_num = "012-345-6789";
	pt3->number.mobile_num = "987-654-3210";
	printf("name : %s\n", pt3->name);
	printf("age : %d\n", pt3->age);
	printf("home : %s\n", pt3->number.home_num);
	printf("mobile : %s\n", pt3->number.mobile_num);

	printf("\n");

	struct node *head, a1, a2, a3;
	a1.data = 'A';
	a2.data = 'K';
	a3.data = 'D';
	head = &a1;
	a1.link = &a2;
	a2.link = &a3;
	a3.link = NULL;
	printf("Linked List\n\n");
	printf("head의 주소 : %u\n", &head);
	printf("head의 포인터 : %u\n", head);
	while (head != NULL)
	{
		printf("데이터 : %c , 주소 : %u\n", head->data, head->link);
		head = head->link;
	}

	printf("\n");

	struct node1 *head1, *a4, *a5, *a6;
	a4 = creat();
	a5 = creat();
	a6 = creat();
	input_name(a4);
	input_name(a5);
	input_name(a6);
	head1 = a4;
	a4->link = a5;
	a5->link = a6;
	a6->link = NULL;
	printf("Linked List\n\n");
	while (head1 != NULL)
	{
		printf("데이터 : %s , 주소 : %u\n", head1->data, head1->link);
		head1 = head1->link;
	}
}

void display_st(struct user data)
{
	printf("name : %s\n", data.name);
	printf("phone : %s\n", data.phone);
	printf("quick : %d\n", data.quick);
}

void display_st1(struct user *data)
{
	printf("name : %s\n", data->name);
}

void change_st(struct user *data)
{
	strcpy(data->name, "박수영1");
}

void display_st2(struct user *s, int n)
{
	int i2;
	for (i2 = 0; i2 < n; i2++)
	{
		printf("name : %s\n", s[i2].name);
		printf("phone : %s\n", (s + i2)->phone);
		printf("quick : %d\n", s[i2].quick);
		printf("\n");
	}
}

void display_st3(struct person s)
{
	printf("name : %s\n", s.name);
	printf("id : %d\n", s.id);
}

struct person input_st(void)
{
	struct person s;
	printf("이름 입력 후 Enter>");
	gets(s.name);
	printf("학번 8자리 입력 후 Enter>");
	scanf("%d", &s.id);
	return s;
}

struct node1 *creat(void)
{
	return (struct node1*)malloc(sizeof(struct node1));
}

void input_name(struct node1 *ptr)
{
	printf("이름을 입력하고 Enter : ");
	scanf("%s", ptr->data);
}
