
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[20];
	printf("당신의 이름을 입력하세요: ");
	scanf("%s", &ch);

	int d;
	printf("당신의 나이를 입력하세요:");
	scanf("%d", &d);
	printf("나의 이름은 %s이고 나이는 %d", ch, d);

	return 0;
}