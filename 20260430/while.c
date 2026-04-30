#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
		int a, b;
		char ch;

	while (1) {
		printf("계산할 두 수를 입력하세요 :\n");
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0) {
			printf("프로그램을 종료합니다...\n");
			return;
		}

		printf("계산할 연산자를 입력하세요. (종료하려면 q 입력)\nex)+, -, *, /, %% : ");
		scanf(" %c",&ch);

		switch (ch) {
			case '+' :
				printf("%d + %d = %d 입니다.\n", a, b, a + b);
				break;

			case '-' :
				printf("%d - %d = %d 입니다.\n", a, b, a - b);
				break;

			case '*':
				printf("%d * %d = %d 입니다.\n", a, b, a * b);
				break;

			case '/':
				printf("%d / %d = %d 입니다.\n", a, b, a / b);
				break;

			case '%':
				printf("%d %% %d = %d 입니다.\n", a, b, a % b);
				break;

			case 'q':
				printf("프로그램을 종료합니다...\n");
				return;

			default :
				printf("연산자를 잘못 입력 했습니다.\n");
		}



	}
}
