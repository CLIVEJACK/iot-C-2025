///*
//	입력받은 문자열 배열에 저장하기
//*/
//
//# include <stdio.h>
//
//void myStrInput(char*, int);
//
//int main()
//{
//	char str[100];
//
//	myStrInput(str, 100);
//	printf("입력한 문자열 : %s\n", str);
//
//	return 0;
//
//}
//
//void myStrInput(char* ps, int size)		
//{
//	int i = 0;
//	while (1) {
//		ps[i] = getchar();			
//		if (ps[i] == '\n' || i == (size - 1))
//			break;
//		i++;
//	}
//	ps[i] = '\0';
//}