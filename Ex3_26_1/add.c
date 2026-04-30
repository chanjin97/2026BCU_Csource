// scanf() 때문에 넣음 경고문자 보내지마라
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//1번째 연습
	/*int num1, num2, result;
	
	printf("두 수를 입력해주세요 : ");
	scanf("%d %d", &num1, &num2);
	result = num1 + num2;
	printf("덧셈 결과\n");
	printf("%d + %d = %d\n", num1, num2, result);*/

	//2번째 연습
	/*int num1, num2, result;

	printf("첫 번째 수를 입력해주세요 : ");
	scanf("%d", &num1);
	printf("두 번째 수를 입력해주세요 : ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("덧셈 결과\n");
	printf("%d 더하기 %d는 %d입니다.\n", num1, num2, result);*/

	//3번째 연습
	char name[10];
	int num1, num2, result;
		
	printf("참여자명 : ");
	scanf("%s", name);
	printf("첫 번째 수를 입력해주세요 : ");
	scanf("%d", &num1);
	printf("두 번째 수를 입력해주세요 : ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("덧셈 결과\n");
	printf("%d 더하기 %d는 %d입니다.\n", num1, num2, result);
	printf("%s님 수고하셨습니다.\n", name);
}