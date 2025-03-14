///*
//	static - 정적 지역변수
//*/
//#include <stdio.h>
//void incFunc();
//void incFunc2();
//
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		incFunc();
//		incFunc2();
//	}
//	
//	return 0;
//}
//
//void incFunc() {
//	int cnt = 0;
//	cnt++;
//	printf("cnt: %d\t",cnt);
//}
//void incFunc2() {
//	static int scnt = 0;	// 정적 지역변수(정적변수의 수정은 선언된 블록안에서만 가능하다)
//	scnt++;					// 지역변수는 지역을 벗어나면 끝나지만 정적 지역변수는 선언쪽에서 종료
//	printf("scnt: %d\n", scnt);
//}
//
////
////int ary[열] = { 1, 2, 3 };		// 1차원 배열
////int art[행][열];					// 2차원 배열