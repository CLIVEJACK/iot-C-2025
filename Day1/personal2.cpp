//#include <stdio.h>
//
//int main()
//{
//	char str[20];
//	int age;
//	printf("나이: ");
//	scanf_s("%d", &age);			// scanf_s는 고정적으로 지정된 타입은 필요없지만(고정적인거 int,double,...)
//	printf("이름: ");
//	scanf_s("%s", str, sizeof(str));	// 캐럭터 타입의 배열은 우리가 지정하는 명시한 값은 필요 
//										// str은 배열이기때문에 주소연산자가 필요없음
//										// scanf는 입력받으면 입력버퍼에 저장되고 그걸 가져와서 메모리에넣어서 입력
//	printf("이름: %s, 나이: %d\n", str, age);
//
//	return 0;
//}
//
///*  A && B 논리 연산자 AND
//*   A & B 비트연산자
//*   A || B 논리 연산자 OR
//*	  A | B 비트연산자 
//*/