///*
//	입력받은 문자를 저장하라 for 문으로 작성하고 입력받아서 5개 저장하고 카피로 바꾼후에 malloc써서 
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[100];
//	char* ps;
//	
//	printf("5개의 문자를 입력하세요>>");
//	gets(str);
//	printf("입력받은 문자열 %s:", str);
//
//	ps = (char*)malloc(strlen(str) + 1);
//	if (ps == NULL) {
//		printf("사용불가능");
//		exit(1);
//	}
//	else {
//		for (int i = 0; i < 5; i++) {
//			printf("%s", ps);
//		}
//		
//	}
//
//	free(ps);
//	
//	
//
//	return 0;
//}
//	
