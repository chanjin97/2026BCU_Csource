#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int a[4];
	int sum = 0;

	printf("1번째 숫자를 입력 : ");
	scanf("%d", &a[0]);

	printf("2번째 숫자를 입력 : ");
	scanf("%d", &a[1]);

	printf("3번째 숫자를 입력 : ");
	scanf("%d", &a[2]);

	printf("4번째 숫자를 입력 : ");
	scanf("%d", &a[3]);

	printf("1번째 숫자를 입력 : ");
	scanf("%d", &a);

	sum = a[0] + a[1] + a[2] + a[3];

	printf("합계 = %d\n", sum);*/

	int a[4];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		printf("%d번째 숫자를 입력 : ", i + 1);
		scanf("%d", &a[i]);
		sum = sum + a[i];

	}

	/*for (int i = 0; i < 4; i++) {

	}*/

	printf("합계 = %d\n", sum);

}