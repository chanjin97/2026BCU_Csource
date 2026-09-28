#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 렌트카
void main() {
	
	// 자동차 관리
	struct car {
		int car_id; // 자동차 고유번호
		char name[20]; // 모델명
		char engine[20]; // 엔진
		int model_year; // 연식
		char car_num[20]; // 번호판
		char use_user[20]; // 사용중인 유저
	};

	struct car c;
	char choice;
	FILE* fp;

	fp = fopen("D:\\chanjin\\Csource\\Temp\\car_info.txt", "a+");

	while (1) {
		puts("\n------------------------------------------------------------------"); 
		puts("1. 차량정보 입력");
		puts("2. 차량정보 출력");
		puts("0. 종료");
		puts("\n------------------------------------------------------------------");
		printf("원하는 작업 선택");
		scanf(" %c", &choice);

		switch (choice) {
			// 차량정보 입력
		case '1':
			printf("자동차 고유번호 : ");
			scanf("%d", &c.car_id);

			printf("모델명 : ");
			scanf("%19s", c.name);

			printf("엔진 (가솔린, 디젤, 전기)\n : ");
			scanf("%19s", c.engine);

			printf("자동차 연식 :");
			scanf("%d", &c.model_year);

			printf("번호판 : ");
			scanf(" %19[^\n]", c.car_num);

			printf("사용중인 유저 : (없다면 null 입력.)");
			scanf(" %19s", c.use_user);

			fprintf(fp,"%d,%s,%s,%d,%s,%s\n",
				c.car_id, c.name, c.engine, c.model_year, c.car_num, c.use_user);
			fflush(fp);

			break;

		case '2' :
			// 차량 정보 출력
			fseek(fp, 0L, SEEK_SET);

			printf("------------------------------------------------------------------\n");
			printf("%-10s%-12s%-10s%-8s%-12s%-14s\n",
				"고유번호", "모델명", "엔진", "연식", "번호판", "사용중인유저");
			printf("------------------------------------------------------------------\n");

			while (fscanf(fp, "%d,%19[^,],%19[^,],%d,%19[^,],%19[^\n]\n\n", &c.car_id, c.name, c.engine, &c.model_year, c.car_num, c.use_user) == 6) {
				printf("%-10d%-12s%-10s%-8d%-12s%-14s\n",c.car_id, c.name, c.engine, c.model_year, c.car_num, c.use_user);

			}

			printf("------------------------------------------------------------------\n");
			fseek(fp, 0L, SEEK_END);
			break;
		case '0' :
			fclose(fp);
			return;

		default : 
			printf("잘못 입력 하셨습니다. 다시 입력해주세요.\n");
		}

	}

	//int i;
	
	/*for (i = 0; i < 3; i++) {
		printf("자동차 고유번호 : ");
		scanf("%d", &c[i].car_id);

		printf("모델명 : ");
		scanf("%19s", c[i].name);

		printf("엔진 (가솔린, 디젤, 전기)\n : " );
		scanf("%19s", c[i].engine);

		printf("자동차 연식 :");
		scanf("%d", &c[i].model_year);

		printf("번호판 : ");
		scanf(" %19[^\n]", c[i].car_num);

		printf("사용중인 유저 : (없다면 null 입력.)");
		scanf(" %19s", c[i].use_user);

		printf("\n\n\n");

	}*/


	/*printf("고유번호	모델명	엔진	연식	번호판	사용중인유저 \n");
	printf("%10d	%10s	%10s	%10d	%10s	%10s \n", c.car_id, c.name, c.engine, c.model_year, c.car_num, c.use_user);
	printf("------------------------------------------------------------ \n");*/

	/*printf("%-10s%-12s%-10s%-8s%-12s%-14s\n",
		"고유번호", "모델명", "엔진", "연식", "번호판", "사용중인유저");

	printf("------------------------------------------------------------------\n");

	for (i = 0; i < 3; i++) {
		printf("%-10d%-12s%-10s%-8d%-12s%-14s\n",
		c[i].car_id, c[i].name, c[i].engine, c[i].model_year, c[i].car_num, c[i].use_user);

	}*/


	//printf("------------------------------------------------------------------\n");

	

	
}