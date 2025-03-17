///*
//	함수 포인터:  함수이름 자체가 포인터다> 함수 포인터 작성 순서 1 ~ 3
//	함수 작성 순 1 ~ 4
//*/
//# include <stdio.h>
//int sum(int, int);				// 1.함수 선언
//int min(int, int);
//
//int main()
//{
//	int (*fp)(int, int);		// 1.함수포인터
//	int res;
//	//res =  sum(20, 10);			// 3.함수 호출
//	//res = min(20, 10);
//	fp = sum;					// 2.함수포인터를 sum이라고 정의
//	res = fp(20, 10);			// 3.res의 fp를 호출 
//	printf("res: %d\n", res);		// 4.함수 출력
//
//	return 0;
//}
//
//int sum(int a, int b)			//2.함수 정의 
//{
//	int res = a + b;
//	return res;
//}
//
//int min(int a, int b)
//{
//	int res = a - b;
//	return res;
//}
//
