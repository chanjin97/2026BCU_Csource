#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	// 변수 선언
	int select;				// 작업메뉴 선택
	int no_member = 0;		// 현재 보유 대상 데이터 수
	int max_id = 1;			// id 자동 부여를 위한 마지막 멤버 id
	char con;				// 데이터 입력 진행 여부
	char target_name[10];	// 수정할 대상
	int del_id;				// 삭제할 대상의 id

	// 대상 데이터 변수 (대상 수는 20명으로 제한)
	int id[20];				// id
	char name[20][10];		// 이름
	int age[20];			// 나이
	char phone[20][15];		// 전화번호
		
	// 반복
	while (1) {

		// 메뉴 출력
		printf("###데이터 관리 툴 Ver 1.0 ###\n\n");
		printf("-----------------------------\n");

		printf("1. 데이터 추가\n");
		printf("2. 데이터 출력\n");
		printf("3. 데이터 수정\n");
		printf("4. 데이터 삭제\n");
		printf("0. 종료\n");

		printf("-----------------------------\n\n");
		printf("원하는 작업 선택(0~4) : ");
		scanf("%d", &select);

		switch (select) {

			// 데이터 추가
		case 1 : 
			printf("\n*** 데이터 추가 ***\n");
			while (1) {
				id[no_member] = max_id;

				printf("이름 : ");
				scanf("%s", name[no_member]);

				printf("나이 : ");
				scanf("%d", &age[no_member]);

				printf("전화번호 : ");
				scanf("%s", phone[no_member]);

				no_member++;
				max_id++;
				
				printf("-----------------------------\n");
				printf("\n계속 추가하시겠습니까? (y/n)");
				scanf(" %c", &con);

				if (con != 'y')
					break;
			}
			break;

			// 데이터 출력
		case 2 :
			printf("\n*** 데이터 출력 ***\n");
			printf("id\t 이름\t 나이\t 전화번호\n");
			printf("========================================\n");

			for (int i = 0; i < no_member; i++) {
				printf("%-5d\t %-10s\t %-5d\t %-15s\n", id[i], name[i], age[i], phone[i]);
			};

			break;

			// 데이터 수정
		case 3 :
			printf("\n*** 데이터 수정 ***\n");
			printf("========================================\n");
			printf("수정할 대상의 이름을 입력하세요 : ");
			scanf("%s", target_name);
			for (int i = 0; i < no_member; i++) {
				if (strcmp(target_name, name[i]) == 0) {
					printf("이름 : %s -> ", name[i]);
					scanf("%s", name[i]);

					printf("나이 : %d -> ", age[i]);
					scanf("%d", &age[i]);

					printf("전화번호 : %s -> ", phone[i]);
					scanf("%s", phone[i]);
					break;
				}
			}
			break;

			// 데이터 삭제
		case 4 :
			printf("\n*** 데이터 삭제 ***\n");
			printf("========================================\n");
			printf("삭제할 대상의 id를 입력하세요 : ");
			scanf("%d", &del_id);

			for (int i = 0; i < no_member; i++) {
				if (id[i] < del_id)
					continue;
				
				if (id[i] == del_id)
					printf("id : %d, 이름 : %s, 나이 : %d, 전화번호 : %s 데이터를 삭제합니다.\n", id[i], name[i], age[i], phone[i]);
				
				id[i] = id[i + 1];
				strcpy(name[i], name[i + 1]);
				age[i] = age[i + 1];
				strcpy(phone[i], phone[i + 1]);
			}
			// 멤버 인원수 차감
			no_member--;

			break;

			// 프로그램 종료
		case 0 :
			printf("\n*** 프로그램 종료 ***\n");
			return;

		default :
			printf("메뉴 숫자를 다시 확인해 주세요.\n");

		}
	}

}


