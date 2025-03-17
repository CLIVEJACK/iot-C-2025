/*
	for 문
*/
#include <stdio.h>

int main()
{	/* for(초기식; 조건식; 증감식) {  } */ 
	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);
	}

	int sum = 0;
	for (int i = 1; i < 10 + 1; i++) {
		sum += i;				// 누적시키는 변수를 만듬
	}
	printf("1부터10까지의 합은 %d", sum);

	return 0;
}