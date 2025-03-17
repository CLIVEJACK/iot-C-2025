///*
//	시력을 입력해서 바뀐시력을 출력하는 문제?
//*/
//#define _CRT_SECURE_NO_WARNINGS		
//#include <stdio.h>
//
//typedef struct vision {
//	double left;
//	double right;
//
//	/*void move() {};		*/		//
//}Vision;
//
//Vision exchange(Vision);			//함수 원형 입력과 출력이 있다 
//
//int main()
//{
//	Vision rot;				// 구조체 Vison변수 선언
//	printf("시력 입력:>> ");
//	scanf("%.1lf %.1lf\n", &(rot.left), &(rot.right));	// 입력 주소넣기	scanf에는 ,게 들어가면 안된다
//
//	rot = exchange(rot);		// (rot)도 구조체 변수도 매개변수로 가능하다 
//
//	printf("바뀐 시력: %.1lf, %.1lf\n", rot.left, rot.right);
//
//	return 0;
//
//}