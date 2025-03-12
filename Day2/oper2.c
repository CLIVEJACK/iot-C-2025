//# include <stdio.h>
//
//int main()
//{
//	int n = 10, n2 = 20;
//	int res;
//
//	res = (n < n2) ? n : n2;   // 삼항연산자 ?앞의 조건식이며 참이면 : 기준으로 좌측 거짓이면 우측
//	printf("res: %d\n", res);
//
//	res = n++;
//	printf("res: %d, n: %d\n", res, n);		// 후위 연산자 n을 실행되고 1을 증가 
//	res = ++n2;
//	printf("res: %d, n2: %d\n", res, n2);   // 전위 연산자 1을 증가하고 n을 실행
//
//	return 0;
//}