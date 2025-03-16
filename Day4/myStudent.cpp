// 4명이 국영수 점수 받아서 학생별 합계, 평균 출력 (2차원배열)
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#include <stdio.h>

int main()
{
	int ary[4][4] = {0};
	double avg[4] = {0.0};
	const char* str[3] = { "국어", "영어", "수학" };

	
	for (int i = 0; i < 4; i++) {
		printf("%d 번재학생의 점수\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%s : ", str[j]);
			scanf("%d", &ary[i][j]);
			ary[i][3] += ary[i][j];			// ary[i][3] = ary[i][3] + ary[i][j]
		}
		avg[i] = ary[i][3] / 3.;
	}
	10

	for (int i = 0; i < 4; i++) {
		printf("%d 번째 학생의 성적 ", i + 1);
		printf("총점: %d, 평균 : %.2lf\n", ary[i][3], avg[i]);
	}

	return 0;
}