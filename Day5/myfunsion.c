///*
//	�Է¹��� �μ��� �����ϰų� ����ϴ� �Լ� �����?
//*/
//
//#include <stdio.h>
//
//int sum(int, int);
//int min(int, int);
//int mul(int, int);
//int div(int, int);
//
//
//
//int main()
//{
//	printf("����� ���� 2�� �Է��ϼ���");
//	scanf(" %d, %d", x, y);
//	printf("����� �����ڸ� �Է��ϼ���");
//	scanf(" %c ", fp);
//
//
//	return 0;
//}
//void func(int(*fp)(int, int))
//{
//	int x, y, val;
//	char fp = 0;
//
//	switch (fp) {
//	case '+':
//		val = sum(x, y);
//		break;
//	case '-':
//		val = min(x, y);
//		break;
//	case '*':
//		val = mul(x, y);
//		break;
//	case '/':
//		val = div(x, y);
//	}
//	printf("%d, %c, %d", x, fp, y, val);
//}
//
//int sum(int a, int b) 
//{
//	int res = a + b;
//	return res;
//}
//int min(int a, int b)
//{
//	int res = a - b;
//	return res;
//}
//int mul(int a, int b)
//{
//	int res = a * b;
//	return res;
//}
//int div(int a, int b)
//{
//	int res = a / b;
//	return res;
//}