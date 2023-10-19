#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <windows.system.h>


int main() {
	system("chcp 65001");
	setlocale(LC_ALL, "chs"); 
	//??
	int morethan();
	int r = morethan();
	printf("%d", r);
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
	int b = 20;
	int r = a > b ? a : b;
	return r;
}