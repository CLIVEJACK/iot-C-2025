//1. printAry < 출력하는 함수 만들기
//2. intputAry < 입력하는 함수 만들기 

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printAry();
//
//int main()
//{
//	
//	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ary2[] = { 1, 2, 3 };
//
//	int size = sizeof(ary2) / sizeof(ary2[0]);		// size 행동넣기 4. 
//
//	//inputAry();
//	//printf("입력받는 값을 넣으시오.");
//	//scanf("%d", inputAry);
//	printAry(ary, size);							// size넣기 3.
//
//	return 0;
//
//}
//
//void printAry(int* p, int _size)				// 값을 main에서 받아오려면 매개변수에 *(포인터)를 해야한다
//{												// 그래서 실인수인 size를 넣는다 2.
//	int i;
//	for (i = 0; i < _size; i++) {				// printAry입장에서는 ary의 값을 몰라 그러므로 입력으로 받아들일 실인수가 필요하다 1. 그래서 for조건식에 넣는다 5. 
//		printf("ary[%d]: %d\n", i, p[i]);
//	}
//}