//문제 : 1~100 중에서 홀수의 합(2500)과 짝수의 합(2550) 을 각각 구하는 프로그램을 작성하시오
//Hint : 1. for 반복문을 이용한다 2. 짝수는 2로 나누어 나머지가 0인 경우이다
//		 3. 필요한 변수의 이름은 알아서 정한다. 출력결과 포맷 : 홀수의 합 => 2500 \n 짝수의 합 => 2550
#include <stdio.h>

void main() {
	// 홀수의 합
	int sum_odd = 0;
	// 짝수의 합
	int sum_even = 0;

	//합 구하는 프로그램 for문
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			sum_even = sum_even + i;
		else
			sum_odd += i;
	}

	printf("홀수의 합 => %d\n", sum_odd);
	printf("짝수의 합 => %d\n", sum_even);

}