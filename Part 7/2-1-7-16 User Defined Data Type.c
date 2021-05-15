/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 7 , Chapter 16 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error

#include <stdio.h>
#include <string.h>

struct patient2
{
	int age;
	unsigned sex : 1;
	unsigned drinking : 1;
	unsigned smoking : 1;
	unsigned pressure : 2;
};

union uchr
{
	char chr1;
	char chr2[3];
};

enum week { sun, mon, tue, wed, thu, fri, sat };
enum prod { engine = 3, battery, filter, fuse };

int main(void)
{
	union uchr data;
	strcpy(data.chr2, "AB");
	printf("data.chr1 = %c\n", data.chr1);
	printf("data.chr2 = %s\n", data.chr2);
	data.chr1 = 'C';
	printf("data.chr1 = %c\n", data.chr1);
	printf("data.chr2 = %s\n", data.chr2);

	printf("\n");

	enum week day1;
	day1 = fri;
	printf("day1 : %d\n", day1);
	printf("fri : %d\n", fri);
	day1 = mon;
	printf("day1 : %d\n", day1);
	printf("mon : %d\n", mon);

	printf("\n");

	enum prod v;
	v = battery;
	printf("ÀåÄ¡¹øÈ£ : %d\n", v);
	printf("engine ¹øÈ£ : %d\n", engine);
	v = fuse;
	printf("ÀåÄ¡¹øÈ£ : %d\n", v);

	printf("\n");

	struct patient2 p1 = { 24,0,1,0,3 };
	printf("age : %d\n", p1.age);
	printf("sex : %d\n", p1.sex);
	printf("drinking : %d\n", p1.drinking);
	printf("smoking : %d\n", p1.smoking);
	printf("blood pressure : %d\n", p1.pressure);
	return 0;
}
