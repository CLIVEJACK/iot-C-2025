///*
//	입력받은 두수를 덧샘하거나 밸샘하는 함수 만들기?
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
//	printf("계산할 값을 2개 입력하세요");
//	scanf(" %d, %d", x, y);
//	printf("계산할 연산자를 입력하세요");
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