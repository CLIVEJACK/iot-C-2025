///*
//	viode pointer : 보이드 포인터 > 포인터라는 이야기 > 가리키는 자료형이 없는 포인터 
//*/
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double db = 3.14;
//
//	//int pn = &n;			// 이게 정석이지만
//	//double* pdb = &db;
//
//	void* p;
//
//	p = &n;								
//	//printf("*p: %d\n", *p);				// void 타임에 int(정수형언어를 넣어서)오류가 난다 
//	printf("*p: %d\n", *(int *)p);			// 따라서 자료형을 명시 해야한다  
//
//	p = &db;
//	printf("*p: %.1lf\n", *(double*)p);
//	
//
//	return 0;
//}