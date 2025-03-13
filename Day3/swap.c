//#include <stdio.h>
//
//
//void swap(int*, int*);					// 함수 선언
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("호출 전 a: %d, b: %d\n", a, b);
//
//	swap(&a, &b);						// &실인수로 전달해야해서 부침
//	printf("호출 후 a: %d, b: %d\n", a, b);				// 함수 호출
//
//	return 0;
//}
//
//void swap(int *pa, int *pb)		// 함수 정의  메인에있는 a와b는 여기 a,b와 달라서 매개변수로 써도된다
//{
//	int temp;					// a = 20 , b = 10
//	temp = *pa;					// temp = 10
//	*pa = *pb;					// a = 20 
//	*pb = temp;					// b = 10
//}
//
//
//
//
