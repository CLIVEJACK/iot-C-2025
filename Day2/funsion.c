//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int add(int a, int b);
//int sub(int a, int b);
//int mul(int a, int b);
//int div(int a, int b);
//
//int main()
//{
//	int x, y, val = 0;
//	char id = 0;
//
//	printf("계산기 프로그램입니다.\n");
//	printf("두개의 정수를 입력하세요.\n");
//	scanf("%d %d", &x, &y);
//	printf("연산자를 입력하세요.\n");
//	scanf(" %c", &id);
//	
//	switch (id) {
//	case '+':
//		val = add(x, y);
//		break;
//	case '-':
//		val = sub(x, y);
//		break;
//	case '*':
//		val = mul(x, y);
//		break;
//	case '/':
//		val = div(x, y);
//	}
//
//	printf("%d %c %d = %d", x, id, y, val);
//
//	return 0;
//}
//
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {	
//	return a / b;
//}