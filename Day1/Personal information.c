
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[20];
	printf("����� �̸��� �Է��ϼ���: ");
	scanf("%s", &ch);

	int d;
	printf("����� ���̸� �Է��ϼ���:");
	scanf("%d", &d);
	printf("���� �̸��� %s�̰� ���̴� %d", ch, d);

	return 0;
}