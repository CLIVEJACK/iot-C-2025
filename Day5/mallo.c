///*
//	메모리 동적 할당: malloc - free
//	calloc - 메모리 동적 할당하여 0으로 초기화
//	realloc - 크기조절 
//*/
//# include <stdio.h>
//# include <stdlib.h>			//헤더파일 포함
//
//int main()
//{
//	int* pi =(void*)malloc(sizeof(int));		// 힙영역에 입력크기만큼 메모리 공간이을 할당받앙서 시작 주소를 리턴한다
//	//int* pi = (int*)malloc(sizeof(int));		// 위랑 동일하다 보이드라서 인트로 명시 해도된다
//	if(pi == NULL){
//		printf("메모리 할당 실패");
//		exit(1);
//	}
//	printf("할당성공!!");
//
//	free(pi);									// 힙의 메모리 공간의 영역의 끝나면 씀 
//	
//	return 0;
//}