///*
//	입력받은 문자열을 배열에 저장하기		
//*/
//
//#include <stdio.h>
//
//void myStrInput(char*, int);					//3이랑 같은 원형
//
//int main()
//{
//	char str[100];								// 문자열을 저장할 배열 1
//
//	myStrInput(str, 100);						// 호출 문자열을 저장할 배열 2			4의 사이즈
//	printf("입력한 문자열 : %s\n", str);
//
//	return 0;
//}
//
//void myStrInput(char* ps, int size)			// 3 개행문자가 입력되거나 배열의 끝에 도착하면 종료
//{	
//	int i = 0;
//	while (1) {					// 1번방부터 계속쌓아라
//		ps[i] = getchar();
//		if (ps[i] == '\n' || i == (size - 1)) break;		//4
//		i++;
//	}
//	ps[i] = '\0';						// Null을 넣지 않으면 오류가남
//}
//
