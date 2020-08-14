#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[1000];
	long salary;
	printf("name :  ");
	scanf("%s", &name);
	printf("salary : ");
	scanf("%ld", &salary);
	int money = salary * 12;
	printf("%s have money per year : %ld", name,money);
	if (money >= 10000) {
		int tex = money / 100;
		printf("\ntex : %ld", tex);
		printf("\n%s have total money : %ld ", name,money - tex);
	}
	else if (money < 9999) {
		printf("\ntex : 0");
		printf("\n%s have total money : %ld ", name,money);
	}
} 