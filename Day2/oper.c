//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 30;
//	int res;
//	
//	res = (n > 10) && (n < 20);				// && 기준으로 좌항과 우항의 조건이 만족하면 참(1)출력 거짓(0)을 출력 
//	printf("res: %d\n", res);				// 컴퓨터는 0을 기준으로 판단한다
//	res = (n < 10) || (n > 20);				// || 기준으로 좌항또는 우항이 의조건이 하나라도 만족하면 참(1)을출력 것짓이면 거짓(0)을출력
//	printf("res: %d\n", res);				// 1(참)
//	res = (n >= 30);						// >=는 복합대입 연산자 
//	printf("res: %d\n", res);				// 1(참)
//
//	res = !(n >= 30);						// ! 부정연산자 Ex참을거짓으로 거짓을 참으로  
//	printf("res: %d\n", res);				// 참이지만 거짓을 출력함 0
//
//	res = ~n;								// ~ 은 n이 30이면 이진수로 변경하여 0을 1로 1을 0으로 변경하여 -31이 나옴  
//	printf("res: %d\n", res);				// -31가 나옴
//
//	res = n << 1;						   // << 은 좌측으로 1비트씩 움직임 ex) 0001 이면 0010이 됨  
//	printf("res: %x\n", res);			   // 3c가 나옴
//
//	res = n >> 1;						   // >> 은 우측으로 1비트씩 움직임 ex) 0010 이면 0001이 됨  
//	printf("res: %x\n", res);			   // f가 나옴
//
//	int n2 = 143;							// 0b 1000 1111
//	res = n2 << 1;							// 0b 1 0001 1110	
//	printf("res: %x\n", res);				// 11e
//	res = n2 >> 1;							// 0b 1100 0111
//	printf("res: %x\n", res);				// 47
//
//	return 0;
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
////int main()
////{
////	int a;
////	char ch;
////	scanf("%d", &a);
////	getchar();					// 밑에있는 띄어쓰기랑 같음
////	scanf("%c", &ch);
////	//scanf(" %c", &ch);			// " %c"(띄어쓰기)버프에있는 엔터키를 입력받는거 
////
////	return 0;
////}