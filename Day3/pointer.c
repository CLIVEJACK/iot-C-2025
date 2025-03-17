/*
	pointer - 주소
	포인터 변수 - 주소를 저장할 수 있는 변수
*/

#include <stdio.h>

int main()
{
//	int p;		// int타입의 변수 선언 
//	int* p;		// int타입의 포인터 변수 선언. 포인터 변수의 크기는 4바이트
//	char* pc;	// char타입의 포인터 변수 선언
//	double *pd;	// *의 위치는 별로 상관없다

	//int* p = 10;
	//printf("%d",p); 


	int num = 100;
	printf("num의 주소: %p\n", &num);
	printf("num의 값: %d\n", num);
	int * p = &num;			// int타입의 num을 *p 주소에 저장.  * 아무의미 없는 표시
	printf("포인터변수 p에 저장된 값(주소): %p\t", p);
	printf("포인터변수 P가 가리키는 곳의 값: %d\n", *p);			// *p는 간접참조 연산을 해라 
	num += 1;
	printf("num: %d, *p: %d\n", num, *p);					// *p는 포인터값의 데이터 
	*p += 1;
	printf("num: %d, *p: %d\n", num, *p);					// *는 그냥 표시


	return 0; 
}