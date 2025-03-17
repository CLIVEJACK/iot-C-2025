//#include <stdio.h>
//
//int main()
//{
////
////	int ary[] = { 1, 2, 3 };
////
////	printf("배열의 전체크기: %d\n", sizeof(ary));					// sizeof는 배열의 크기를 아는거
////	printf("배열 방한개의 크기: %d\n", sizeof(ary[0]));				// 4바이트가 나온다 
////	printf("배열 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[1]));	// 3개
////	printf("배열 이름: %p\n", ary);								    // 배열의 이름은 배열의 시작주소 %p는 포인터변수 주소
////	printf("배열 첫번째 방 주소: %p\n", &ary[0]);					// 배열의 이름은 첫번째 방주소와 같다 배열의 각각방주소는 **연산자**
////	printf("배열 두번째 방 주소: %p\n", ary + 1);					// ary는 주소(상수)에다가 +1은 주소의 다음번째 방을 가리킴
////	printf("배열 두번쨰 방 주소: %p\n", &ary[1]);					// 위와 같은 주소를 가짐
//
//
//	int score;
//	int ary[5];								// 1		평균
//	int count = sizeof(ary) / sizeof(ary[0]);		// 3
//
//	for (int i = 0; i < 5; i++) {						// 2
//		printf("점수를 입력하세요:");
//		scanf_s("%d", &score);
//		ary[i] = score;
//		printf("%d번 학생 성적: %d\n", i + 1, ary[i]);
//	}
//	int sum = 0;
//	for (int j = 0; j < 5; j++) {
//		sum += ary[j];
//	}
//	double avg = sum / count;
//	printf("평균: %.2lf", avg);
//	
//	return 0;
//}