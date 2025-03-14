///*
//	문자열
//*/
//#include <stdio.h>				
//
//int main()
//{
//	char str[100] = "orange";			// 배열의 방하나씩 저장되어있음
//
//	printf("%s\n", str);				// 문자열을 불러옴
//	printf("%s\n", "orange");			// (데이터여역으로 저장)어딘가에 저장된 주소를 불러옴 값은 위랑 같지만 다름... 문자열은 주소다!!
//	printf("%p\n", "orange");			// 주소값 문자나 문자열은 이름이 주소이다
//	printf("%c\n", *"orange");			// o 문자열은 주소다!
//	printf("%c\n", *("orange" + 1));	// r 문자열 상수는 주소로 저장됨
//	printf("%c\n", "orange"[2]);		// a
//
//	//"orange"[0] = 'O';
//
//	*"orange" = 'O';					// 문자열 상수: 값을 바꾸지 못한다
//	printf("%s\n", str);				// 바꾸는거 가능
//
//
//	return 0;
//}