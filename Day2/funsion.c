#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
	int x, y, val = 0;
	char id = 0;

	printf("���� ���α׷��Դϴ�.\n");
	printf("�ΰ��� ������ �Է��ϼ���.\n");
	scanf("%d %d", &x, &y);
	printf("�����ڸ� �Է��ϼ���.\n");
	scanf("%c", &id);
	
	switch (id) {
	case '+':
		val = add(a, b);
		break;
	case '-':
		val = sub(a, b);
		break;
	case '*':
		val = mul(a, b);
		break;
	case '/':
		val = div(a, b);
	}

	printf("%d %c %d = %d", a, id, b, val);

	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {	
	return a / b;
}