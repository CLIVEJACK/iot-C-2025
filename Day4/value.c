///*
//	
//*/
//
//#include <stdio.h>
//void incFunc();
//
//int cnt = 0;					// 전역변수를 잘 못 쓰면 원하는 값이 나오지 않는다 "잘쓰지마라..?" 
//								//전역변수는 초기화를 하지않으면 자동으로 0으로 초기화 됨
//int main()
//{
//	//int cnt = 0;						// local 지역변수 void에 cnt랑 다름
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		printf("cnt: %d\n", cnt);
//	}
//	cnt++;			// 마지막에 더함
//	printf("cnt: %d\n", cnt);
//	return 0;
//}
//void incFunc()						// 매모리 영역이다름 
//{
//	cnt++;									//전역변수는 지역변수에 묻힌다
//	printf("incFunc cnt: %d\n", cnt);		//
//}