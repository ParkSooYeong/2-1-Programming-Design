/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 6 , Chapter 14 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <stdlib.h>

void swap1(int i4, int j);
void swap2(int i5, int j1);
int plus(int x, int y);
// int *mat_mult(int m[], int n);
char *string_cpy(char *dest, const char *src);

int main(void)
{
	char i = 3;
	int k = 8;
	printf("���� i�� �ּ�(10����)>%u\n", &i);
	printf("���� k�� �ּ�(10����)>%u\n", &k);
	printf("���� i�� �ּ�(16����)>%p\n", &i);
	printf("���� k�� �ּ�(16����)>%p\n", &k);

	printf("\n");

	int k1 = 8;
	int *p;
	p = &k1;
	printf("k�� �ּ� : %u\n", &k1);
	printf("p�� �ּ� : %u\n", &p);
	printf("p�� �� : %u\n", p);
	printf("p�� ����Ű�� ���� �� : %d\n", *p);

	printf("\n");

	int k2 = 8, i1 = 3;
	int *p1;
	p1 = &k2;
	printf("k2�� �ּ� : %u\n", &k2);
	printf("p1�� �ּ� : %u\n", &p1);
	printf("p1�� �� : %u\n", p1);
	printf("p1�� ����Ű�� ���� �� : %d\n", *p1);
	p1 = &i1;
	printf("i1�� �ּ� : %u\n", &i1);
	printf("p1�� �� : %u\n", p1);
	printf("p1�� ����Ű�� ���� �� : %d\n", *p1);

	printf("\n");

	int k3 = 8, i2 = 3;
	int *p2;
	p2 = &k3;
	printf("k3�� �� : %u\n", k3);
	printf("p2�� ����Ű�� ���� �� : %u\n", *p2);
	*p2 = i2;
	printf("k3�� �� : %u\n", k3);
	printf("p2�� ����Ű�� ���� �� : %u\n", *p2);

	printf("\n");

	int a[3] = { 10,20,30 };
	int *pt;
	pt = a;
	printf("�迭 �̸� : %u\n", a);
	printf("a[0]�� �ּ� : %u\n", &a[0]);
	printf("a[1]�� �ּ� : %u\n", &a[1]);
	printf("a[2]�� �ּ� : %u\n", &a[2]);
	printf("a[0]�� �� : %d\n", a[0]);
	printf("pt�� ����Ű�� ���� �� : %d\n", *pt);

	printf("\n");

	int a1[3] = { 10,20,30 };
	int *pt1;
	pt1 = a1;
	printf("�迭 �̸� : %u\n", a1);
	printf("a1[1]�� �ּ� : %u\n", &a[1]);
	printf("a1+1�� �� : %u\n", a1 + 1);
	printf("pt1+1�� �� : %u\n", pt1 + 1);
	printf("a1[2]�� �� : %d\n", a1[2]);
	printf("*(pt1+2)�� �� : %d\n", *(pt1 + 2));
	printf("*pt1+2�� �� : %d\n", *pt1 + 2);

	printf("\n");

	int a2[3] = { 10,20,30 };
	int *pt2;
	pt2 = a2;
	printf("�迭 �̸� : %u\n", a2);
	printf("������ �ּ� : %u\n", &pt2);
	printf("�������� �� : %u\n", pt2);
	printf("*pt2�� �� : %d\n", *pt2);
	pt2++;
	printf("�������� �� : %u\n", pt2);
	printf("*pt2�� �� : %d\n", *pt2);

	printf("\n");

	char i3 = 8;
	int *p3;
	p3 = &i3;
	printf("i3�� �ּ� : %u\n", &i3);
	printf("p3�� �ּ� : %u\n", &p3);
	printf("p3�� ����Ű�� ���� �� : %d\n", *p3);

	printf("\n");

	char str1[] = "copy";
	char *str2 = "next";
	printf("str1�� �ּ� : %u\n", str1);
	printf("str2�� ����� �ּ� : %u\n", str2);
	printf("str1[2]�� ����� �� : %c\n", str1[2]);
	printf("str2+2�� �� : %c\n", *(str2 + 2));
	printf("���ڿ� str1 : %s\n", str1);
	printf("���ڿ� str2 : %s\n", str2);

	printf("\n");

	char na[4][17] = { "Korea","Japan","China","U.S.A" };
	char *ct[] = { "Korea","Japan","China","U.S.A" };
	printf("na[2] : %s\n", na[2]);
	printf("na[2][3] : %c\n", na[2][3]);
	printf("ct[2] : %s\n", ct[2]);
	printf("ct[2][3] : %c\n", ct[2][3]);

	printf("\n");

	int i4 = 30, j = 80;
	swap1(i4, j);
	printf("main i4 = %d , j = %d\n", i4, j);

	printf("\n");

	int i5 = 30, j1 = 80;
	swap2(&i5, &j1);
	printf("main i5 = %d , j1 = %d\n", i5, j1);

	printf("\n");

	int (*pt3)(int a3, int b);
	int a3 = 3, b = 5;
	pt3 = plus;
	printf("result = %d\n", pt3(a3, b));
	printf("result = %d\n", plus(a3, b));

	printf("\n");

	/* int ma[4] = { 1,3,5,7 };
	int *mb, i6;
	for (i6 = 0; i6 < 4; i6++)
	{
		printf("ma[%2] = %2d ", i6, mb[i6]);
	}
	printf("\n");
	mb = mat_mult(ma, 4);
	for (i6 = 0; i6 < 4; i6++)
	{
		printf("ma[%2] = %2d ", i6, mb[i6]);
	}
	
	printf("\n"); */

	char str3[20];
	char *pt4;
	pt4 = string_cpy(str3, "my program");
	printf("str3 : %s\n", str3);
	printf("pt4 : %s\n", pt4);

	printf("\n");

	char *str4;
	str4 = (char*)malloc(20);
	printf("���ڿ��� �Է��ϰ� Enter>");
	scanf("%s", str4);
	printf("�Էµ� ���ڿ� : %s\n", str4);
	free(str4);

	printf("\n");

	int num1 = 68734;
	long num2 = 9876543;
	char s[25];
	_itoa(num1, s, 10);
	printf("���� : %d , ���ڿ� : %s\n", num1, s);
	_itoa(num2, s, 10);
	printf("���� : %ld , ���ڿ� : %s\n", num2, s);

	printf("\n");

	int num3 = 14;
	long num4 = 512;
	char s1[25];
	_itoa(num3, s1, 2);
	printf("���� : %d , 2���� ���ڿ� : %s\n", num3, s1);
	_itoa(num4, s1, 16);
	printf("���� : %ld , 16���� ���ڿ� : %s\n", num4, s1);

	printf("\n");

	char *s2 = "-12.5e04";
	char *s3 = "1100";
	char *endptr;
	double num5;
	long num6;
	num5 = strtod(s2, &endptr);
	num6 = strtol(s3, &endptr, 2);
	printf("���ڿ� : %s , double�� ���� : %lf\n", s2, num5);
	printf("���ڿ� : %s , long�� 10���� : %ld\n", s3, num6);

	printf("\n");

	char s4[15] = "star";
	char t[6] = "craft";
	strcat(s4, t);
	printf("strcat : %s\n", s4);
	strncat(s4, t, 3);
	printf("strncat : %s\n", s4);

	printf("\n");

	char *s5 = "Republic of KOREA";
	char *s6 = "Republic of JAPAN";
	int ptr;
	ptr = strcmp(s5, s6);
	if (ptr < 0 || ptr > 0)
	{
		printf("���ڿ� s5�� s6�� �ٸ���.\n");
	}
	ptr = strncmp(s5, s6, 12);
	if (ptr == 0)
	{
		printf("���ڿ� s5�� s6�� ����.\n");
	}

	printf("\n");

	char s7[15];
	char *str5 = "abcdefghi";
	char *str6 = "ABCDefghi";
	strcpy(s7, str5);
	printf("strcpy : %s\n", s7);
	strncpy(s7, str6, 4);
	printf("strncpy : %s\n", s7);
	printf("length of s7 : %d\n", strlen(s7));

	printf("\n");

	char s8[15] = "program";
	char *str7 = "compile";
	printf("original s8 : %s\n", s8);
	printf("length of s8 : %d\n", strlen(s8));
	strncpy(s8, str7, 4);
	printf("\ns8 after strncpy : %s\n", s8);
	printf("length of s8 : %d\n", strlen(s8));
	s8[4] = '\0';
	printf("\ns8 after NULL : %s\n", s8);
	printf("length of s8 : %d\n", strlen(s8));

	/* printf("\n");

	char str8[5] = "copy";
	const char str9[5] = "text";
	const char *ptr1;
	str8[0] = 'a';
	ptr1 = str8;
	*ptr1 = 'b';
	str9[0] = 'c';
	ptr1 = str9;
	*ptr1 = 'd'; */
}

void swap1(int i4, int j)
{
	int temp;
	temp = i4;
	i4 = j;
	j = temp;
	printf("swap i4 = %d , j = %d\n", i4, j);
}

void swap2(int *i5, int *j1)
{
	int temp1;
	temp1 = *i5;
	*i5 = *j1;
	*j1 = temp1;
	printf("swap i5 = %d , j1 = %d\n", *i5, *j1);
}

int plus(int x, int y)
{
	return x + y;
}

/* int *mat_mult(int m[], int n)
{
	int *mc = (int*)malloc(n);
	for (int i6 = 0; i6 < n; i6++)
	{
		mc[i6] = m[i6] & n;
	}
	return mc;
} */

char *string_cpy(char *dest, const char *src)
{
	char *p4 = dest;
	while (*src)
	{
		*p4++ = *src++;
	}
	*p4 = NULL;
	return dest;
}
