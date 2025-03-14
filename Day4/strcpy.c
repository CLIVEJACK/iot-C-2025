///*
//	strcpy - 문자열 복사함수 문자열 > 배열 가능, 배열 > 배열 가능, 문자열 > 포인터 안됨
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//	char str3[100] = "banana";
//
//	printf("str: %s\n", str);
//	printf("srt2: %s\n", str2);
//
//	strcpy(str, str2);			// strcpy(복사, 원본)  오른쪽의 값을 왼쪽에 저장함
//	printf("str: %s\n", str);		// apple
//	printf("srt2: %s\n", str2);		// apple
//
//	strcpy(str, "banana");		// 문자열을 넣어서 도 가능	
//	printf("str: %s\n", str);	// banana
//	
//	strcpy(str, ps);			// 포인터도 가능
//	printf("str: %s\n", str);	// apple
//
//	//strcpy(ps, str2);			// 이건 문자열을(str2)가져와 ps(포인터)에 저장은 안됨
//	//printf("str: %s\n", str);
//
//	strncpy(str, "abc", 3);			// 시작주소부터 복사항 문자 갯수를 설정하여 복사 > str의 "abcd"중에 3개만 복사
//	printf("%s\n", str);
//
//
//	return 0;
//}