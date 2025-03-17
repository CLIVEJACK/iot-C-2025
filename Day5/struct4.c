///*
//	typedef은 기본자료형을 다른 형태로 선언해서 쓰는거
//*/
//
//
//#include <stdio.h>
//
//typedef int int32mt;		// int를 int32mt로 쓰겠다  
//
//struct human {
//	char name[100];
//	int age;
//};
//typedef struct mystruct {			// 구조체선언 mystruct대신에 Myst로 쓰겠다 
//	int a;
//	int b;
//}Myst;
//
//
//int main()
//{
//	//struct human h = { "홍길동", 100 };
//	//struct human h2 = { "강감찬", 100 };
//	struct human h = { "홍길동", 100 },					//사용자 저의도 자료형과 동일하게 선언
//		h2 = { "이순신", 110 },
//		h3 = { "김유신",200 };
//
//	Myst m;
//
//	return 0;
//}