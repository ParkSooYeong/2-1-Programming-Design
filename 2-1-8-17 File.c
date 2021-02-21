/* SKU CoE ITE - ParkSooYoung */
/* Grade 2 , Semester 1 , Part 8 , Chapter 17 */

#define _CRT_SECURE_NO_WARNINGS // Warning C4996 Error
#define filename "grade01.txt"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char na[10];
	int vic;
	int tie;
	int def;
} worldcup;

struct worldcup1
{
	char na[10];
	int vic;
	int tie;
	int def;
};

void search_data(void);
void change_data(void);
void delete_data(void);

char *file = "group.bin";

int main(void)
{
	FILE *fp;
	char c;
	fp = fopen("chr.txt", "w");
	if (fp == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	printf("Enter가 사용될 때까지 문자출력\n");
	printf("문자입력 : ");
	while ((c = getchar()) != '\n')
	{
		printf("%c", c);
		fputc(c, fp);
	}
	fclose(fp);
	printf("\n");

	printf("\n");

	FILE *fp1;
	char c1;
	fp1 = fopen("chr.txt", "r");
	if (fp1 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	while ((c1 = fgetc(fp1)) != EOF)
	{
		printf("%c", c1);
	}
	fclose(fp1);
	printf("\n");

	printf("\n");

	FILE *fp2;
	char c2;
	fp2 = fopen("chr.txt", "r");
	if (fp2 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	while (!feof(fp2))
	{
		c2 = getc(fp2);
		printf("%c", c2);
	}
	fclose(fp2);
	printf("\n");

	printf("\n");

	FILE *fp3;
	fp3 = fopen("worldcup.txt", "w");
	if (fp3 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	fputs("Korea\n", fp3);
	fputs("Japan\n", fp3);
	fputs("China\n", fp3);
	fputs("U.S.A\n", fp3);
	fclose(fp3);
	printf("\n");

	printf("\n");

	FILE *fp4;
	char chr[8];
	fp4 = fopen("worldcup.txt", "r");
	if (fp4 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	while (!feof(fp4))
	{
		fgets(chr, 7, fp4);
		printf("%s", chr);
	}
	fclose(fp4);
	printf("\n");

	printf("\n");

	char *team[4] = { "대한민국","일본","중국","미국" };
	int marks[4] = { 1,2,3,4 };
	int i;
	FILE *fp5;
	fp5 = fopen("20xxcup.txt", "w");
	if (fp5 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	for (i = 0; i <= 3; i++)
	{
		printf("%s %d\n", team[i], marks[i]);
		fprintf(fp5, "%s %d\n", team[i], marks[i]);
	}
	fclose(fp5);

	printf("\n");

	char chr1[10];
	int marks1, sum = 0;
	FILE *fp6;
	fp6 = fopen("20xxcup.txt", "r");
	if (fp6 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	while (!feof(fp6))
	{
		fscanf(fp6, "%s %d\n", chr1, &marks1);
		sum += marks1;
		printf("%-8s %2d\n", chr1, marks1);
	}
	printf("득점 합 : %d\n", sum);
	fclose(fp6);

	printf("\n");

	char names[20];
	int score;
	int i1;
	FILE *fp7;
	if ((fp7 = fopen(filename,"w")) == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	printf("이름과 점수를 입력하고 Enter\n");
	for (i1 = 0; i1 <= 2; i1++)
	{
		scanf("%s %d\n", names, &score);
		fprintf(fp7, "%s %d\n", names, score);
		fflush(stdin);
	}
	fclose(fp7);

	printf("\n");

	FILE *fp8;
	int i2;
	worldcup d[4] = { {"대한민국",1,2,3},
					  {"일본",4,5,6},
					  {"중국",7,8,9},
					  {"미국",10,11,12} };
	fp8 = fopen("group.bin", "wb");
	if (fp8 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	if (fwrite(d, sizeof(worldcup), 4, fp8) != 4)
	{
		printf("File Write Error 발생!");
		exit(1);
	}
	printf("국가이름 승 무 패\n");
	for (i2 = 0; i2 < 4; i2++)
	{
		printf("%-8s %2d %2d %2d\n", d[i2].na, d[i2].vic, d[i2].tie, d[i2].def);
	}
	fclose(fp8);

	printf("\n");

	FILE *fp9;
	int i3;
	worldcup d1[4];
	fp9 = fopen("group.bin", "rb");
	if (fp9 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	if (fread(d1, sizeof(worldcup), 4, fp9) != 4)
	{
		printf("File Write Error 발생!");
		exit(1);
	}
	printf("국가이름 승 무 패\n");
	for (i3 = 0; i3 < 4; i3++)
	{
		printf("%-8s %2d %2d %2d\n", d1[i3].na, d1[i3].vic, d1[i3].tie, d1[i3].def);
	}
	fclose(fp9);

	printf("\n");

	FILE *fp10;
	worldcup d2;
	long total_block, block_number;
	fp10 = fopen("group.bin", "rb");
	if (fp10 == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	fseek(fp10, 0L, SEEK_END);
	total_block = ftell(fp10) / sizeof(worldcup);
	while (1)
	{
		printf("원하는 block의 숫자(1-%d)를 입력하고 Enter >", total_block);
		scanf("%ld", &block_number);
		fflush(stdin);
		if (block_number > total_block)
		{
			break;
		}
		fseek(fp10, sizeof(worldcup) * (block_number - 1), SEEK_SET);
		if (fread(&d2, sizeof(worldcup), 1, fp10) != 1)
		{
			printf("File Write Error 발생!");
			exit(1);
		}
		printf("\n현재 block 위치 : %d\n", block_number);
		printf("국가이름 승 무 패\n");
		printf("%-8s %2d %2d %2d\n\n", d2.na, d2.vic, d2.tie, d2.def);
	}
	fclose(fp10);

	printf("\n");

	search_data();

	printf("\n");

	change_data();

	printf("\n");

	delete_data();
}

void search_data(void)
{
	long i4, total_block, check = 0;
	char name1[10];
	FILE *fpr;
	struct worldcup1 d3[10];
	fpr = fopen(file, "rb");
	if (fpr == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	fseek(fpr, 0L, SEEK_END);
	total_block = ftell(fpr) / sizeof(struct worldcup1);
	fseek(fpr, 0L, SEEK_SET);
	fread(d3, sizeof(struct worldcup1), total_block, fpr);
	fclose(fpr);
	printf("파일에서 검색할 국가명을 입력하고 Enter>");
	gets(name1);
	for (i4 = 0; i4 < total_block; i4++)
	{
		if (strcmp(name1, d3[i4].na) == 0)
		{
			check = 1;
			printf("%-8s %2d %2d %2d\n\n", d3[i4].na, d3[i4].vic, d3[i4].tie, d3[i4].def);
		}
		if (check == 0)
		{
			printf("일치하는 데이터 없음\n");
		}
	}
}

void change_data(void)
{
	int i5, block_number, total_block;
	FILE *fpr;
	worldcup d4[10];
	fpr = fopen(file, "rb+");
	if (fpr == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	fseek(fpr, 0L, SEEK_END);
	total_block = ftell(fpr) / sizeof(worldcup);
	rewind(fpr);
	fread(d4, sizeof(worldcup), total_block, fpr);
	printf("\n전체 data\n");
	printf("block 국가이름 승 무 패\n");
	for (i5 = 0; i5 < total_block; i5++)
	{
		printf("%d %-8s %3d %3d %3d\n", i5, d4[i5].na, d4[i5].vic, d4[i5].tie, d4[i5].def);
	}
	printf("승점을 수정하려는 block의 번호를 입력>");
	scanf("%d", &block_number);
	fflush(stdin);
	printf("국가명 : %s\n", d4[block_number].na);
	printf("수정할 승점 입력 후 Enter>");
	scanf("%d", &d4[block_number].vic);
	rewind(fpr);
	fseek(fpr, sizeof(worldcup) * block_number, SEEK_SET);
	fwrite(&d4[block_number], sizeof(worldcup), 1, fpr);
	fclose(fpr);
}

void delete_data(void)
{
	long i6, total_block, check = 0;
	char name2[10];
	FILE *fpr;
	worldcup d5[10];
	fpr = fopen(file, "rb");
	if (fpr == NULL)
	{
		printf("File open에 오류 발생");
		exit(1);
	}
	fseek(fpr, 0L, SEEK_END);
	total_block = ftell(fpr) / sizeof(worldcup);
	fseek(fpr, 0L, SEEK_SET);
	fread(d5, sizeof(worldcup), total_block, fpr);
	fclose(fpr);
	printf("파일에서 삭제할 국가명을 입력하고 Enter>");
	gets(name2);
	for (i6 = 0; i6 < total_block; i6++)
	{
		if (strcmp(name2, d5[i6].na) == 0)
		{
			check = 1;
			d5[i6] = d5[total_block - 1];
			total_block--;
		}
		if (check == 0)
		{
			printf("일치하는 데이터 없음\n");
		}
	}
	printf("\n삭제 처리 후 전체 data\n\n");
	printf("국가이름 승 무 패\n");
	for (i6 = 0; i6 < total_block; i6++)
	{
		printf("%-8s %3d %3d %3d\n", d5[i6].na, d5[i6].vic, d5[i6].tie, d5[i6].def);
	}
	fpr = fopen(file, "wb");
	fseek(fpr, 0L, SEEK_SET);
	fwrite(d5, sizeof(worldcup), total_block, fpr);
	fclose(fpr);
}
