/*
	for ��
*/
#include <stdio.h>

int main()
{	/* for(�ʱ��; ���ǽ�; ������) {  } */ 
	for (int i = 0; i < 10; i++) {
		printf("i: %d\n", i);
	}

	int sum = 0;
	for (int i = 1; i < 10 + 1; i++) {
		sum += i;				// ������Ű�� ������ ����
	}
	printf("1����10������ ���� %d", sum);

	return 0;
}