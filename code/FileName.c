﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <windows.system.h>


int main() {
	system("chcp 65001");
	setlocale(LC_ALL, "chs");
	//??
	void zsoutput();
	zsoutput();
	return 0;
};

int test() {
	int input = 0;
	int res_ = scanf("%d", &input);
	if (input == 1)
	{
		wprintf(L"真");
		int i;
		for (i = 0; i < 5; i++) {
			printf("\nfuck");
		}
	}
	else {
		wprintf(L"假");
		printf("%d\n", res_);
		int i = 1;
		while (i <= 300) {
			printf("%d shit\n", i);
			i++;
		}
	}
	return 1;
} 

int add(int x, int y) {
	return x + y;
}

void array_() {
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int i;
	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		printf("%d\n", arr[i]);
	}

}

int divison() {
	int a = 7;
	a = -a;
	int b = 2;
	int c = a % b;
	c += a;
	wprintf(L"%d", c);
	return c;
}

int morethan() {
	int a = 10;
	int* q = &a;
	int b = *q;
	int r = a > b ? a : b;
	//int* p1, * p2, * p3 = (& a, & a, & a);
	printf("%zu\n", sizeof(char*));
	return r;
}

void jsys() {
	int a = 0;
	int b = 0;
	int c = scanf("%d %d", &a, &b);
	int j = a / b;
	int i = a % b;
	printf("%d  %d\n", j, i);
	printf("%d", c);
}

void ifsentence() {
	if (3 == 5) {
		printf("shit");
	}
	else if (5 == 5) {
		printf("eee");
	}
	else {
		printf("hehe");
	}
}

void whileloop() {
	int i = 0;
	while (i<100) {
		i++;
		printf("%d ", i);
	}
}

void getcharr() {
	char password[20] = { 0 };
	printf("input your password: ");
	int a = scanf("%s", password);
	int ch = '\0';
	while ((ch = getchar()) != '\n') {
		;
	}
	printf("Y/N: ");
	int ret = getchar();
	if ('Y' == ret) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}

void srtm() {
	int year = 0;
	int month = 0;
	int day = 0;
	int a = scanf("%4d%2d%2d", &year, &month, &day);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);
}

void xscjoutput() {
	int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float english = 0.0f;
	int a = scanf("%d;%f,%f,%f", &id, &c, &math, &english);
	int b = printf("Id of %d is %.2f %.2f %.2f", id, c, math, english);
	printf("\n%d", b);

}

void zsoutput() {
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int d = 0;
	//int j = scanf("%d %d %d %d", &a ,&b, &c, &d);
	int arr[4] = { 0 };
	for (int i = 0;i < 4;i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 0;i < (sizeof(arr) / sizeof(arr[0]));i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d", max);
}