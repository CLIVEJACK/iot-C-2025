///*
//	대문자 소문자 변환
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	char ch1;
//	char ch2 = 'A';								// A
//	if ((ch2 >= 'A') && (ch2 <= 'Z')) {			// 아스키코드 대문자 범위안에 있다 라는 뜻 
//		ch1 = ch2 + ('a' - 'A');				// 소문자 a는 97이고 A는 65 라서 32가 나옴 > ch2 + 32 = 소문자가 나옴
//	}
//	printf("대문자: %c\t", ch2);
//	printf("소문자: %c\n", ch1);
//
//	return 0;
//}