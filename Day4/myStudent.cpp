// 4���� ������ ���� �޾Ƽ� �л��� �հ�, ��� ��� (2�����迭)
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#include <stdio.h>

int main()
{
	int ary[4][4] = {0};
	double avg[4] = {0.0};
	const char* str[3] = { "����", "����", "����" };

	
	for (int i = 0; i < 4; i++) {
		printf("%d �����л��� ����\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%s : ", str[j]);
			scanf("%d", &ary[i][j]);
			ary[i][3] += ary[i][j];			// ary[i][3] = ary[i][3] + ary[i][j]
		}
		avg[i] = ary[i][3] / 3.;
	}
	10

	for (int i = 0; i < 4; i++) {
		printf("%d ��° �л��� ���� ", i + 1);
		printf("����: %d, ��� : %.2lf\n", ary[i][3], avg[i]);
	}

	return 0;
}