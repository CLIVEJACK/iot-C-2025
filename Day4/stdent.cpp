#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int j, k;
	float aver;
	int score[4][3];
	int rank[4] = { 1,1,1,1 };
	int sum[4] = { 0 };

	//학생 점수 
	for (int i = 0; i < 4; i++) {
		printf("%d번 학생: ", i + 1);
		for (int j = 0; j < 3; j++) {
			scanf("%d번 학생: ", &score[i][j]);
		}
	}

	//점수 더함
	for (int i = 0; i < 4; i++) {
		sum[i] = 0;
		for (j = 0; j < 3; j++) {
			sum[i] += score[i][j];
		}
	}

	//등수 
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (sum[i] < sum[j]) {
				rank[i] = rank[i] + 1;
			}
		}
	}

	// 출력
	for (int i = 0; i < 4; i++) {
		printf("%d번학생: ", i + 1);
		for (j = 0; j < 3; j++) {
			printf("%d ", score[i][j]);
		}
		aver = sum[i] / 3.0;
		printf("  %d %.1f %d등\n", sum[i], aver, rank[i]);
	}
}