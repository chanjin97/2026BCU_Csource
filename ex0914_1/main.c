#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/* 파일쓰고 저장
	char s[20];
	FILE* wfp;

	wfp = fopen("C:\\temp\\data3.txt", "w");

	printf("문자열을 입력(최대 19자) : ");
	gets(s);

	fputs(s, wfp);

	fclose(wfp);*/

	FILE* wfp;
	int hap = 0;
	int in, i;
	wfp = fopen("C:/temp/data7.txt", "w");

	for (i = 0; i < 5; i++) {
		printf("숫자 %d : ", i + 1);
		scanf("%d", &in);
		hap = hap + in;
	}

	fprintf(wfp, "합계 ==> : %d\n", hap);

	fclose(wfp);

}








