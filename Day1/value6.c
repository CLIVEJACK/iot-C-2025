///* 상수 */
//#include <stdio.h>
//
//int main()
//{
//	int r = 10;
//	const double pi = 3.14;			//const는 상수를 바꾸지 못하게 하는거. 변수명이름가지고 변경시키는걸 못하게한다
//	double cf = 2 * pi * r;
//
//	//pi = 3.15;
//	double * dp = &pi;				// 포인터로 지정하면 상수로 되는게 아닌 변수가되서
//	*dp = 4.0;						
//
//
//	printf("원둘레: % .2lf\n", cf);
//	printf("pi: %.2lf", pi);
//	return 0;
//}