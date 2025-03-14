///*
//	sccanf, gets는 공백을 포함하는 함수
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//
//{
//	char str[100];						// 배열 선언
//	/* scanf */
//	//printf("문자열 입력 >>");
//	//scanf("%s", str);						// scanf는 띄어쓰기 까지만 입력됨
//
//	//printf("문자열: %s", str);				
//	//scanf("%s", str);						// 다시해주면 입력됨
//	//printf("다음 문자열: %s", str);			// scanf는 띄어쓰기 하면 안됨
//
//	/* gets */
//
//	//printf("공백을 포함한 입력 >>");
//	//gets(str);						// (str)저장될 공간. 공백을 포함
//	//printf("입력 문자열: %s\n", str);
//
//	/* fgets */							// 오류가 적게 난다 
//	printf("공백을 포함한 입력 >> ");
//	fgets(str, sizeof(str), stdin);				// stdin는 파일 입출력에 대해서 입력을 받는다
//	printf("입력 문자열: %s\n", str);
//
//	return 0;
//}