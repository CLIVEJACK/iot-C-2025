///*
//	strcmp - 문자열 비교 함수
//
//*/
//#include <stdio.h>
//
//int main()
//{	
//	char str[100] = "apple";
//	char str2[100] = "orange";
// 
//
//	/* str 이 사전에서 먼저 나오면 -1반환, str2가 먼저 나오면 1반환, 같으면 0을 반환 
//		뒤에것이 크면 1, 앞에 것이 크면 -1
//	*/
//	if (strcmp(str, str2) > 0) printf("%s\n", str);			// str과 str2의 문자열의 맨앞의 글자가 아스키코드로 많으면
//	else printf("%s\n", str2);
//
//	printf("a: %d\n", 'a');
//	printf("b: %d\n", 'b');
//
//	strncmp(str, str2, 3);
//
//	return 0;
//
//}