//#define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//
//
//char change_up(char a ,char b);
////char change_do(char a);
//int main()
//{
//	
//	char b = 0;
//	char c = 0;
//
//	printf("문자를 입력하세요:");
//	scanf("%c", &c);
//
//	printf("대문자는 : %c, 소문자는 %c 입니다\n", c);
//
//	return 0;
//
//}
//char change_up(char a , char b) {
//	if ((a >= 'A') && (a <= 'Z')) {			// 아스키코드 대문자 범위안에 있다 라는 뜻 
//		a = b + ('a' - 'A');				// 소문자 a는 97이고 A는 65 라서 32가 나옴 > ch2 + 32 = 소문자가 나옴
//	}
//	return a;
//}
////char change_do(char a) {
////	if (a > 64 && a < 91) a = a + 32; // b > ?
////	return a;
////}
//
