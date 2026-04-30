#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char name[10];
	int mid, final, avg;
	char grade;

	// 학생 자료 입력
	printf("학생의 이름 : ");
	scanf("%s", name);
	printf("중간고사와 기말고사 성적 : ");
	scanf("%d %d", &mid, &final);

	// 평균계산
	avg = (mid + final) / 2;

	//// 학점 계산
	//if (avg >= 90)
	//	grade = 'A';
	//else if (avg >= 80)
	//	grade = 'B';
	//else if (avg >= 70)
	//	grade = 'C';
	//else if (avg >= 60)
	//	grade = 'D';
	//else  
	//	grade = 'F';

	switch (avg / 10) {
		case 10 :
		case 9:
			grade = 'A';
			break;
		case 8 :
			grade = 'B';
			break;
		case 7 :
			grade = 'C';
			break;
		case 6 :
			grade = 'D';
			break;
		default : 
			grade = 'F';

	}

	printf("%s는 중간고사 %d점, 기말고사 %d점, 학점 %c 입니다. \n", name, mid, final, grade);

}